#include <iostream>
#include <fstream>
#include <unordered_set>
#include <vector>
#include <unordered_map>
#include "antlr4-runtime.h"
#include "HelloLexer.h"
#include "HelloParser.h"
#include "tree/ErrorNode.h"
#include "HelloVisitor.h"
#include "HelloBaseVisitor.h"

using namespace antlr4;

class CustomErrorListener : public BaseErrorListener {
private:
    int errorCount = 0;
    std::vector<std::string> errorMessages;

public:
    void syntaxError(Recognizer* recognizer, Token* offendingSymbol,
                    size_t line, size_t charPositionInLine,
                    const std::string& msg, std::exception_ptr e) override {
        errorCount++;
        errorMessages.push_back("Line " + std::to_string(line) + ":" + 
                              std::to_string(charPositionInLine) + " " + msg);
    }

    int getErrorCount() const { return errorCount; }
    const std::vector<std::string>& getErrorMessages() const { return errorMessages; }
};

class SemanticVisitor : public HelloBaseVisitor {
private:
    std::unordered_map<std::string, std::pair<std::string, std::string>> symbolTable;
    std::unordered_set<std::string> functionTable;
    std::vector<std::string> semanticErrors;
    bool hasMainFunction = false;

    const std::unordered_set<std::string> builtinFunctions = {
        "print_int", "print_float", "print_char",
        "get_int", "get_float", "get_char"
    };

    // 严格字面量检查（禁止任何运算符）
    bool isLiteralInitializer(HelloParser::ConstInitValContext* ctx, const std::string& expectedType) {
        if (!ctx) return false;

         // 检查是否是数组初始化
        if (ctx->LBRACE()) {
            // 数组初始化必须使用大括号
            for (auto initVal : ctx->constInitVal()) {
                if (!isLiteralInitializer(initVal, expectedType)) {
                    return false;
                }
            }
            return true;
        }

        // 情况1：直接是字面量
        if (ctx->constExp()) {
            auto addExp = ctx->constExp()->addExp();
            // 禁止加减运算符（AddExp的子节点只能有一个MulExp）
            if (addExp->children.size() > 1) return false;
            
            auto mulExp = addExp->mulExp();
            // 禁止乘除运算符（MulExp的子节点只能有一个UnaryExp）
            if (mulExp->children.size() > 1) return false;
            
            auto unaryExp = mulExp->unaryExp();
            // 禁止单目运算符（必须是PrimaryExp）
            if (unaryExp->primaryExp() == nullptr) return false;
            
            auto primaryExp = unaryExp->primaryExp();
            // 必须是数字字面量
            if (primaryExp->number()) {
                auto numberCtx = primaryExp->number();
                // 类型匹配检查
                if (numberCtx->FloatConst() && expectedType != "float") return false;
                if (numberCtx->CharConst() && expectedType != "char") return false;
                if (numberCtx->IntConst() && expectedType != "int") return false;
                return true;
            }
            return false;
        }


        return false;
    }

    bool checkArrayInitializer(HelloParser::ConstInitValContext* ctx, 
                          int expectedDimensions,
                          int* totalElements,
                          bool isTopLevel = true) {
        // 非数组变量禁止用 {}
        if (expectedDimensions == 0 && ctx->LBRACE()) {
            return false;
        }

        // 数组初始化必须用 {}（顶层）
        if (isTopLevel && expectedDimensions > 0 && !ctx->LBRACE()) {
            return false;
        }

        if (ctx->LBRACE()) {
            // 检查初始化项
            for (auto initVal : ctx->constInitVal()) {
                if (initVal->LBRACE()) {
                    // 嵌套 {}：仅当剩余维度 > 1 时允许
                    if (expectedDimensions <= 1) {
                        return false; // 单维数组不允许嵌套 {}
                    }
                    if (!checkArrayInitializer(initVal, expectedDimensions - 1, 
                                            totalElements, false)) {
                        return false;
                    }
                } else {
                    // 扁平化元素：直接计数
                    (*totalElements)++;
                }
            }
            return true;
        } else if (ctx->constExp()) {
            // 直接元素（无 {}）
            (*totalElements)++;
            return true;
        }
        return false;
    }

    
    std::any visitVarDef(HelloParser::VarDefContext* ctx) override {
        std::string varName = ctx->Ident()->getText();
        bool isArray = ctx->LBRACK().size() > 0;
        int arrayDimensions = ctx->LBRACK().size();

        if (ctx->constInitVal()) {
            if (isArray) {
                int totalElements = 0;
                if (!checkArrayInitializer(ctx->constInitVal(), arrayDimensions, &totalElements)) {
                    semanticErrors.push_back("Line " + std::to_string(ctx->getStart()->getLine()) + 
                                        ": 数组 '" + varName + "' 初始化格式不正确");
                }

                // 检查元素数量
                int arraySize = 1;
                for (auto size : ctx->IntConst()) {
                    arraySize *= std::stoi(size->getText());
                }
                if (totalElements > arraySize) {
                    semanticErrors.push_back("Line " + std::to_string(ctx->getStart()->getLine()) + 
                                        ": 数组 '" + varName + "' 初始值过多");
                }
            } else {
                // 非数组变量
                if (ctx->constInitVal()->LBRACE()) {
                    semanticErrors.push_back("Line " + std::to_string(ctx->getStart()->getLine()) + 
                                        ": 非数组变量 '" + varName + "' 不能使用大括号初始化");
                }
            }
        }
        return visitChildren(ctx);
    }


    bool isValidType(HelloParser::BTypeContext* ctx) {
        return ctx && (ctx->INT() || ctx->FLOAT() || ctx->CHAR());
    }

    std::string getTypeText(HelloParser::BTypeContext* ctx) {
        if (ctx->INT()) return "int";
        if (ctx->FLOAT()) return "float";
        if (ctx->CHAR()) return "char";
        return "unknown";
    }

    void checkMainFunction(HelloParser::FuncDefContext* ctx) {
        if (ctx->Ident()->getText() == "main") {
            if (hasMainFunction) {
                semanticErrors.push_back("Error: 重复的main函数定义");
            }
            hasMainFunction = true;
            
            if (ctx->funcType()->INT() == nullptr) {
                semanticErrors.push_back("Error: main函数必须返回int类型");
            }
            
            if (ctx->funcFParams() != nullptr) {
                semanticErrors.push_back("Error: main函数不能有参数");
            }
        }
    }

public:
    std::any visitCompUnit(HelloParser::CompUnitContext* ctx) override {
        visitChildren(ctx);
        
        if (!hasMainFunction) {
            semanticErrors.push_back("Error: 缺少main函数");
        }
        return nullptr;
    }

    std::any visitFuncDef(HelloParser::FuncDefContext* ctx) override {
        std::string funcName = ctx->Ident()->getText();
        if (functionTable.count(funcName)) {
            semanticErrors.push_back("Error: 函数'" + funcName + "'重复定义");
        }
        functionTable.insert(funcName);
        
        if (funcName == "main") {
            checkMainFunction(ctx);
        }
        
        return visitChildren(ctx);
    }

    // 新增：函数调用检查
    std::any visitUnaryExp(HelloParser::UnaryExpContext* ctx) override {
        // 检查函数调用（例如：func(a,b)）
        if (ctx->Ident() && ctx->LPAREN()) {
            std::string funcName = ctx->Ident()->getText();
            
            // 排除内置函数
            if (builtinFunctions.find(funcName) == builtinFunctions.end()) {
                // 检查函数是否已定义
                if (functionTable.find(funcName) == functionTable.end()) {
                    semanticErrors.push_back("Error: 函数'" + funcName + "'未声明");
                }
            }
        }
        return visitChildren(ctx);
    }

    std::any visitConstDecl(HelloParser::ConstDeclContext* ctx) override {
        if (!isValidType(ctx->bType())) {
            semanticErrors.push_back("Error: 无效的常量类型");
        }
        
        std::string type = getTypeText(ctx->bType());
        
        for (auto constDef : ctx->constDef()) {
            std::string constName = constDef->Ident()->getText();
            if (symbolTable.count(constName)) {
                semanticErrors.push_back("Error: 常量'" + constName + "'重复声明");
            }
            
            if (!constDef->constInitVal()) {
                semanticErrors.push_back("Error: 常量'" + constName + "'必须显式初始化");
            } else if (!isLiteralInitializer(constDef->constInitVal(), type)) {
                semanticErrors.push_back("Error: 常量'" + constName + "'必须使用字面量初始化");
            }
            
            symbolTable[constName] = {type, "常量"};
        }
        return visitChildren(ctx);
    }

    std::any visitVarDecl(HelloParser::VarDeclContext* ctx) override {
        if (!isValidType(ctx->bType())) {
            semanticErrors.push_back("Error: 无效的变量类型");
        }
        
        std::string type = getTypeText(ctx->bType());
        
        for (auto varDef : ctx->varDef()) {
            std::string varName = varDef->Ident()->getText();
            if (symbolTable.count(varName)) {
                semanticErrors.push_back("Error: 变量'" + varName + "'重复声明");
            }
            
            for (size_t i = 0; i < varDef->LBRACK().size(); i++) {
                if (!varDef->IntConst(i)) {
                    semanticErrors.push_back("Error: 数组'" + varName + "'的维度必须为常量");
                }
            }
            
            if (varDef->constInitVal()) {
                if (!isLiteralInitializer(varDef->constInitVal(), type)) {
                    semanticErrors.push_back("Error: 变量'" + varName + "'必须使用字面量初始化");
                }
                symbolTable[varName] = {type, "显式初始化"};
            } else {
                symbolTable[varName] = {type, "隐式初始化"};
            }
        }
        return visitChildren(ctx);
    }

    std::any visitLVal(HelloParser::LValContext* ctx) override {
        std::string varName = ctx->Ident()->getText();
        if (!symbolTable.count(varName)) {
            //semanticErrors.push_back("Error: 变量/常量'" + varName + "'未声明");
            std::cerr << "4" << std::endl;

        }
        return visitChildren(ctx);
    }

    const std::vector<std::string>& getSemanticErrors() const {
        return semanticErrors;
    }
    
    int getSemanticErrorCount() const {
        return semanticErrors.size();
    }
};

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <input_file>" << std::endl;
        return 1;
    }

    std::ifstream stream;
    stream.open(argv[1]);
    if (!stream.is_open()) {
        std::cerr << "Error: Cannot open file " << argv[1] << std::endl;
        return 2;
    }

    try {
        ANTLRInputStream input(stream);
        HelloLexer lexer(&input);
        
        CustomErrorListener lexerErrorListener;
        lexer.removeErrorListeners();
        lexer.addErrorListener(&lexerErrorListener);

        CommonTokenStream tokens(&lexer);
        HelloParser parser(&tokens);

        CustomErrorListener parserErrorListener;
        parser.removeErrorListeners();
        parser.addErrorListener(&parserErrorListener);

        auto tree = parser.program();
        
        SemanticVisitor semanticVisitor;
        semanticVisitor.visit(tree);
        
        // 输出错误信息
        for (const auto& msg : lexerErrorListener.getErrorMessages()) {
            //std::cerr << "[Lexical Error] " << msg << std::endl;
            std::cerr << "1" << std::endl;

        }
        
        for (const auto& msg : parserErrorListener.getErrorMessages()) {
            //std::cerr << "[Syntax Error] " << msg << std::endl;
            std::cerr << "2" << std::endl;

        }
        
        for (const auto& msg : semanticVisitor.getSemanticErrors()) {
            //std::cerr << "[Semantic Error] " << msg << std::endl;
            std::cerr << "3" << std::endl;
        }

        int totalErrors = lexerErrorListener.getErrorCount() + 
                         parserErrorListener.getErrorCount() + 
                         semanticVisitor.getSemanticErrorCount();
        
        //std::cout << "Total errors found: " << totalErrors << std::endl;
        
        if (totalErrors == 0) {
            std::cout << "0" << std::endl;
        }

        return totalErrors > 0 ? 1 : 0;
        
    } catch (const std::exception& e) {
        //std::cerr << "Error: " << e.what() << std::endl;
        std::cerr << "6" << std::endl;
        
        return 1;
    }
}