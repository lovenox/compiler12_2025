
    #include <vector>


// Generated from Hello.g4 by ANTLR 4.13.1


#include "HelloVisitor.h"

#include "HelloParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct HelloParserStaticData final {
  HelloParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  HelloParserStaticData(const HelloParserStaticData&) = delete;
  HelloParserStaticData(HelloParserStaticData&&) = delete;
  HelloParserStaticData& operator=(const HelloParserStaticData&) = delete;
  HelloParserStaticData& operator=(HelloParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag helloParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
HelloParserStaticData *helloParserStaticData = nullptr;

void helloParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (helloParserStaticData != nullptr) {
    return;
  }
#else
  assert(helloParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<HelloParserStaticData>(
    std::vector<std::string>{
      "program", "compUnit", "decl", "constDecl", "bType", "constDef", "constInitVal", 
      "varDecl", "varDef", "funcDef", "funcType", "funcFParams", "funcFParam", 
      "block", "blockItem", "stmt", "exp", "constExp", "cond", "lVal", "number", 
      "funcRParams", "primaryExp", "unaryExp", "mulExp", "addExp", "relExp", 
      "eqExp", "lAndExp", "lOrExp"
    },
    std::vector<std::string>{
      "", "'const'", "'int'", "'float'", "'char'", "'void'", "'if'", "'else'", 
      "'while'", "'break'", "'continue'", "'return'", "", "", "", "", "", 
      "", "", "", "';'", "','", "'('", "')'", "'['", "']'", "'{'", "'}'", 
      "'='", "'+'", "'-'", "'*'", "'/'", "'%'", "'=='", "'!='", "'<'", "'>'", 
      "'<='", "'>='", "'&&'", "'||'", "'!'"
    },
    std::vector<std::string>{
      "", "CONST", "INT", "FLOAT", "CHAR", "VOID", "IF", "ELSE", "WHILE", 
      "BREAK", "CONTINUE", "RETURN", "Ident", "NewLine", "WhiteSpace", "LineComment", 
      "BlockComment", "IntConst", "FloatConst", "CharConst", "SEMI", "COMMA", 
      "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", "ASSIGN", 
      "PLUS", "MINUS", "MUL", "DIV", "MOD", "EQ", "NE", "LT", "GT", "LE", 
      "GE", "AND", "OR", "NOT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,42,334,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,1,0,1,0,1,1,1,1,4,1,65,8,1,11,1,12,1,66,1,2,1,2,3,2,71,8,
  	2,1,3,1,3,1,3,1,3,1,3,5,3,78,8,3,10,3,12,3,81,9,3,1,3,1,3,1,4,1,4,1,5,
  	1,5,1,5,1,5,5,5,91,8,5,10,5,12,5,94,9,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,
  	6,5,6,104,8,6,10,6,12,6,107,9,6,3,6,109,8,6,1,6,3,6,112,8,6,1,7,1,7,1,
  	7,1,7,5,7,118,8,7,10,7,12,7,121,9,7,1,7,1,7,1,8,1,8,1,8,1,8,5,8,129,8,
  	8,10,8,12,8,132,9,8,1,8,1,8,3,8,136,8,8,1,9,1,9,1,9,1,9,3,9,142,8,9,1,
  	9,1,9,1,9,1,10,1,10,1,11,1,11,1,11,5,11,152,8,11,10,11,12,11,155,9,11,
  	1,12,1,12,1,12,1,12,3,12,161,8,12,1,12,1,12,1,12,1,12,5,12,167,8,12,10,
  	12,12,12,170,9,12,3,12,172,8,12,1,13,1,13,5,13,176,8,13,10,13,12,13,179,
  	9,13,1,13,1,13,1,14,1,14,3,14,185,8,14,1,15,1,15,1,15,1,15,1,15,1,15,
  	3,15,193,8,15,1,15,1,15,1,15,1,15,3,15,199,8,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,1,15,3,15,209,8,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,
  	15,1,15,1,15,3,15,221,8,15,1,16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,
  	19,1,19,1,19,5,19,234,8,19,10,19,12,19,237,9,19,1,20,1,20,1,21,1,21,1,
  	21,5,21,244,8,21,10,21,12,21,247,9,21,1,22,1,22,1,22,1,22,1,22,1,22,3,
  	22,255,8,22,1,23,1,23,1,23,1,23,1,23,1,23,3,23,263,8,23,1,23,3,23,266,
  	8,23,1,24,1,24,1,24,1,24,1,24,1,24,5,24,274,8,24,10,24,12,24,277,9,24,
  	1,25,1,25,1,25,1,25,1,25,1,25,5,25,285,8,25,10,25,12,25,288,9,25,1,26,
  	1,26,1,26,1,26,1,26,1,26,5,26,296,8,26,10,26,12,26,299,9,26,1,27,1,27,
  	1,27,1,27,1,27,1,27,5,27,307,8,27,10,27,12,27,310,9,27,1,28,1,28,1,28,
  	1,28,1,28,1,28,5,28,318,8,28,10,28,12,28,321,9,28,1,29,1,29,1,29,1,29,
  	1,29,1,29,5,29,329,8,29,10,29,12,29,332,9,29,1,29,0,6,48,50,52,54,56,
  	58,30,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,
  	46,48,50,52,54,56,58,0,8,1,0,2,4,1,0,2,5,1,0,17,19,2,0,29,30,42,42,1,
  	0,31,33,1,0,29,30,1,0,36,39,1,0,34,35,344,0,60,1,0,0,0,2,64,1,0,0,0,4,
  	70,1,0,0,0,6,72,1,0,0,0,8,84,1,0,0,0,10,86,1,0,0,0,12,111,1,0,0,0,14,
  	113,1,0,0,0,16,124,1,0,0,0,18,137,1,0,0,0,20,146,1,0,0,0,22,148,1,0,0,
  	0,24,156,1,0,0,0,26,173,1,0,0,0,28,184,1,0,0,0,30,220,1,0,0,0,32,222,
  	1,0,0,0,34,224,1,0,0,0,36,226,1,0,0,0,38,228,1,0,0,0,40,238,1,0,0,0,42,
  	240,1,0,0,0,44,254,1,0,0,0,46,265,1,0,0,0,48,267,1,0,0,0,50,278,1,0,0,
  	0,52,289,1,0,0,0,54,300,1,0,0,0,56,311,1,0,0,0,58,322,1,0,0,0,60,61,3,
  	2,1,0,61,1,1,0,0,0,62,65,3,18,9,0,63,65,3,4,2,0,64,62,1,0,0,0,64,63,1,
  	0,0,0,65,66,1,0,0,0,66,64,1,0,0,0,66,67,1,0,0,0,67,3,1,0,0,0,68,71,3,
  	6,3,0,69,71,3,14,7,0,70,68,1,0,0,0,70,69,1,0,0,0,71,5,1,0,0,0,72,73,5,
  	1,0,0,73,74,3,8,4,0,74,79,3,10,5,0,75,76,5,21,0,0,76,78,3,10,5,0,77,75,
  	1,0,0,0,78,81,1,0,0,0,79,77,1,0,0,0,79,80,1,0,0,0,80,82,1,0,0,0,81,79,
  	1,0,0,0,82,83,5,20,0,0,83,7,1,0,0,0,84,85,7,0,0,0,85,9,1,0,0,0,86,92,
  	5,12,0,0,87,88,5,24,0,0,88,89,5,17,0,0,89,91,5,25,0,0,90,87,1,0,0,0,91,
  	94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,95,1,0,0,0,94,92,1,0,0,0,95,
  	96,5,28,0,0,96,97,3,12,6,0,97,11,1,0,0,0,98,112,3,34,17,0,99,108,5,26,
  	0,0,100,105,3,12,6,0,101,102,5,21,0,0,102,104,3,12,6,0,103,101,1,0,0,
  	0,104,107,1,0,0,0,105,103,1,0,0,0,105,106,1,0,0,0,106,109,1,0,0,0,107,
  	105,1,0,0,0,108,100,1,0,0,0,108,109,1,0,0,0,109,110,1,0,0,0,110,112,5,
  	27,0,0,111,98,1,0,0,0,111,99,1,0,0,0,112,13,1,0,0,0,113,114,3,8,4,0,114,
  	119,3,16,8,0,115,116,5,21,0,0,116,118,3,16,8,0,117,115,1,0,0,0,118,121,
  	1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,122,1,0,0,0,121,119,1,0,0,
  	0,122,123,5,20,0,0,123,15,1,0,0,0,124,130,5,12,0,0,125,126,5,24,0,0,126,
  	127,5,17,0,0,127,129,5,25,0,0,128,125,1,0,0,0,129,132,1,0,0,0,130,128,
  	1,0,0,0,130,131,1,0,0,0,131,135,1,0,0,0,132,130,1,0,0,0,133,134,5,28,
  	0,0,134,136,3,12,6,0,135,133,1,0,0,0,135,136,1,0,0,0,136,17,1,0,0,0,137,
  	138,3,20,10,0,138,139,5,12,0,0,139,141,5,22,0,0,140,142,3,22,11,0,141,
  	140,1,0,0,0,141,142,1,0,0,0,142,143,1,0,0,0,143,144,5,23,0,0,144,145,
  	3,26,13,0,145,19,1,0,0,0,146,147,7,1,0,0,147,21,1,0,0,0,148,153,3,24,
  	12,0,149,150,5,21,0,0,150,152,3,24,12,0,151,149,1,0,0,0,152,155,1,0,0,
  	0,153,151,1,0,0,0,153,154,1,0,0,0,154,23,1,0,0,0,155,153,1,0,0,0,156,
  	157,3,8,4,0,157,171,5,12,0,0,158,160,5,24,0,0,159,161,5,17,0,0,160,159,
  	1,0,0,0,160,161,1,0,0,0,161,162,1,0,0,0,162,168,5,25,0,0,163,164,5,24,
  	0,0,164,165,5,17,0,0,165,167,5,25,0,0,166,163,1,0,0,0,167,170,1,0,0,0,
  	168,166,1,0,0,0,168,169,1,0,0,0,169,172,1,0,0,0,170,168,1,0,0,0,171,158,
  	1,0,0,0,171,172,1,0,0,0,172,25,1,0,0,0,173,177,5,26,0,0,174,176,3,28,
  	14,0,175,174,1,0,0,0,176,179,1,0,0,0,177,175,1,0,0,0,177,178,1,0,0,0,
  	178,180,1,0,0,0,179,177,1,0,0,0,180,181,5,27,0,0,181,27,1,0,0,0,182,185,
  	3,4,2,0,183,185,3,30,15,0,184,182,1,0,0,0,184,183,1,0,0,0,185,29,1,0,
  	0,0,186,187,3,38,19,0,187,188,5,28,0,0,188,189,3,32,16,0,189,190,5,20,
  	0,0,190,221,1,0,0,0,191,193,3,32,16,0,192,191,1,0,0,0,192,193,1,0,0,0,
  	193,194,1,0,0,0,194,221,5,20,0,0,195,221,3,26,13,0,196,198,5,11,0,0,197,
  	199,3,32,16,0,198,197,1,0,0,0,198,199,1,0,0,0,199,200,1,0,0,0,200,221,
  	5,20,0,0,201,202,5,6,0,0,202,203,5,22,0,0,203,204,3,36,18,0,204,205,5,
  	23,0,0,205,208,3,30,15,0,206,207,5,7,0,0,207,209,3,30,15,0,208,206,1,
  	0,0,0,208,209,1,0,0,0,209,221,1,0,0,0,210,211,5,8,0,0,211,212,5,22,0,
  	0,212,213,3,36,18,0,213,214,5,23,0,0,214,215,3,30,15,0,215,221,1,0,0,
  	0,216,217,5,9,0,0,217,221,5,20,0,0,218,219,5,10,0,0,219,221,5,20,0,0,
  	220,186,1,0,0,0,220,192,1,0,0,0,220,195,1,0,0,0,220,196,1,0,0,0,220,201,
  	1,0,0,0,220,210,1,0,0,0,220,216,1,0,0,0,220,218,1,0,0,0,221,31,1,0,0,
  	0,222,223,3,50,25,0,223,33,1,0,0,0,224,225,3,50,25,0,225,35,1,0,0,0,226,
  	227,3,58,29,0,227,37,1,0,0,0,228,235,5,12,0,0,229,230,5,24,0,0,230,231,
  	3,32,16,0,231,232,5,25,0,0,232,234,1,0,0,0,233,229,1,0,0,0,234,237,1,
  	0,0,0,235,233,1,0,0,0,235,236,1,0,0,0,236,39,1,0,0,0,237,235,1,0,0,0,
  	238,239,7,2,0,0,239,41,1,0,0,0,240,245,3,32,16,0,241,242,5,21,0,0,242,
  	244,3,32,16,0,243,241,1,0,0,0,244,247,1,0,0,0,245,243,1,0,0,0,245,246,
  	1,0,0,0,246,43,1,0,0,0,247,245,1,0,0,0,248,249,5,22,0,0,249,250,3,32,
  	16,0,250,251,5,23,0,0,251,255,1,0,0,0,252,255,3,38,19,0,253,255,3,40,
  	20,0,254,248,1,0,0,0,254,252,1,0,0,0,254,253,1,0,0,0,255,45,1,0,0,0,256,
  	266,3,44,22,0,257,258,7,3,0,0,258,266,3,46,23,0,259,260,5,12,0,0,260,
  	262,5,22,0,0,261,263,3,42,21,0,262,261,1,0,0,0,262,263,1,0,0,0,263,264,
  	1,0,0,0,264,266,5,23,0,0,265,256,1,0,0,0,265,257,1,0,0,0,265,259,1,0,
  	0,0,266,47,1,0,0,0,267,268,6,24,-1,0,268,269,3,46,23,0,269,275,1,0,0,
  	0,270,271,10,1,0,0,271,272,7,4,0,0,272,274,3,46,23,0,273,270,1,0,0,0,
  	274,277,1,0,0,0,275,273,1,0,0,0,275,276,1,0,0,0,276,49,1,0,0,0,277,275,
  	1,0,0,0,278,279,6,25,-1,0,279,280,3,48,24,0,280,286,1,0,0,0,281,282,10,
  	1,0,0,282,283,7,5,0,0,283,285,3,48,24,0,284,281,1,0,0,0,285,288,1,0,0,
  	0,286,284,1,0,0,0,286,287,1,0,0,0,287,51,1,0,0,0,288,286,1,0,0,0,289,
  	290,6,26,-1,0,290,291,3,50,25,0,291,297,1,0,0,0,292,293,10,1,0,0,293,
  	294,7,6,0,0,294,296,3,50,25,0,295,292,1,0,0,0,296,299,1,0,0,0,297,295,
  	1,0,0,0,297,298,1,0,0,0,298,53,1,0,0,0,299,297,1,0,0,0,300,301,6,27,-1,
  	0,301,302,3,52,26,0,302,308,1,0,0,0,303,304,10,1,0,0,304,305,7,7,0,0,
  	305,307,3,52,26,0,306,303,1,0,0,0,307,310,1,0,0,0,308,306,1,0,0,0,308,
  	309,1,0,0,0,309,55,1,0,0,0,310,308,1,0,0,0,311,312,6,28,-1,0,312,313,
  	3,54,27,0,313,319,1,0,0,0,314,315,10,1,0,0,315,316,5,40,0,0,316,318,3,
  	54,27,0,317,314,1,0,0,0,318,321,1,0,0,0,319,317,1,0,0,0,319,320,1,0,0,
  	0,320,57,1,0,0,0,321,319,1,0,0,0,322,323,6,29,-1,0,323,324,3,56,28,0,
  	324,330,1,0,0,0,325,326,10,1,0,0,326,327,5,41,0,0,327,329,3,56,28,0,328,
  	325,1,0,0,0,329,332,1,0,0,0,330,328,1,0,0,0,330,331,1,0,0,0,331,59,1,
  	0,0,0,332,330,1,0,0,0,33,64,66,70,79,92,105,108,111,119,130,135,141,153,
  	160,168,171,177,184,192,198,208,220,235,245,254,262,265,275,286,297,308,
  	319,330
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  helloParserStaticData = staticData.release();
}

}

HelloParser::HelloParser(TokenStream *input) : HelloParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

HelloParser::HelloParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  HelloParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *helloParserStaticData->atn, helloParserStaticData->decisionToDFA, helloParserStaticData->sharedContextCache, options);
}

HelloParser::~HelloParser() {
  delete _interpreter;
}

const atn::ATN& HelloParser::getATN() const {
  return *helloParserStaticData->atn;
}

std::string HelloParser::getGrammarFileName() const {
  return "Hello.g4";
}

const std::vector<std::string>& HelloParser::getRuleNames() const {
  return helloParserStaticData->ruleNames;
}

const dfa::Vocabulary& HelloParser::getVocabulary() const {
  return helloParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView HelloParser::getSerializedATN() const {
  return helloParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

HelloParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::CompUnitContext* HelloParser::ProgramContext::compUnit() {
  return getRuleContext<HelloParser::CompUnitContext>(0);
}


size_t HelloParser::ProgramContext::getRuleIndex() const {
  return HelloParser::RuleProgram;
}


std::any HelloParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ProgramContext* HelloParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, HelloParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(60);
    compUnit();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompUnitContext ------------------------------------------------------------------

HelloParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HelloParser::FuncDefContext *> HelloParser::CompUnitContext::funcDef() {
  return getRuleContexts<HelloParser::FuncDefContext>();
}

HelloParser::FuncDefContext* HelloParser::CompUnitContext::funcDef(size_t i) {
  return getRuleContext<HelloParser::FuncDefContext>(i);
}

std::vector<HelloParser::DeclContext *> HelloParser::CompUnitContext::decl() {
  return getRuleContexts<HelloParser::DeclContext>();
}

HelloParser::DeclContext* HelloParser::CompUnitContext::decl(size_t i) {
  return getRuleContext<HelloParser::DeclContext>(i);
}


size_t HelloParser::CompUnitContext::getRuleIndex() const {
  return HelloParser::RuleCompUnit;
}


std::any HelloParser::CompUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitCompUnit(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::CompUnitContext* HelloParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 2, HelloParser::RuleCompUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(64);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(62);
        funcDef();
        break;
      }

      case 2: {
        setState(63);
        decl();
        break;
      }

      default:
        break;
      }
      setState(66); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 62) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

HelloParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::ConstDeclContext* HelloParser::DeclContext::constDecl() {
  return getRuleContext<HelloParser::ConstDeclContext>(0);
}

HelloParser::VarDeclContext* HelloParser::DeclContext::varDecl() {
  return getRuleContext<HelloParser::VarDeclContext>(0);
}


size_t HelloParser::DeclContext::getRuleIndex() const {
  return HelloParser::RuleDecl;
}


std::any HelloParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::DeclContext* HelloParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 4, HelloParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HelloParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(68);
        constDecl();
        break;
      }

      case HelloParser::INT:
      case HelloParser::FLOAT:
      case HelloParser::CHAR: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        varDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclContext ------------------------------------------------------------------

HelloParser::ConstDeclContext::ConstDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::ConstDeclContext::CONST() {
  return getToken(HelloParser::CONST, 0);
}

HelloParser::BTypeContext* HelloParser::ConstDeclContext::bType() {
  return getRuleContext<HelloParser::BTypeContext>(0);
}

std::vector<HelloParser::ConstDefContext *> HelloParser::ConstDeclContext::constDef() {
  return getRuleContexts<HelloParser::ConstDefContext>();
}

HelloParser::ConstDefContext* HelloParser::ConstDeclContext::constDef(size_t i) {
  return getRuleContext<HelloParser::ConstDefContext>(i);
}

tree::TerminalNode* HelloParser::ConstDeclContext::SEMI() {
  return getToken(HelloParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> HelloParser::ConstDeclContext::COMMA() {
  return getTokens(HelloParser::COMMA);
}

tree::TerminalNode* HelloParser::ConstDeclContext::COMMA(size_t i) {
  return getToken(HelloParser::COMMA, i);
}


size_t HelloParser::ConstDeclContext::getRuleIndex() const {
  return HelloParser::RuleConstDecl;
}


std::any HelloParser::ConstDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitConstDecl(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ConstDeclContext* HelloParser::constDecl() {
  ConstDeclContext *_localctx = _tracker.createInstance<ConstDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, HelloParser::RuleConstDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(HelloParser::CONST);
    setState(73);
    bType();
    setState(74);
    constDef();
    setState(79);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::COMMA) {
      setState(75);
      match(HelloParser::COMMA);
      setState(76);
      constDef();
      setState(81);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(82);
    match(HelloParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BTypeContext ------------------------------------------------------------------

HelloParser::BTypeContext::BTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::BTypeContext::INT() {
  return getToken(HelloParser::INT, 0);
}

tree::TerminalNode* HelloParser::BTypeContext::FLOAT() {
  return getToken(HelloParser::FLOAT, 0);
}

tree::TerminalNode* HelloParser::BTypeContext::CHAR() {
  return getToken(HelloParser::CHAR, 0);
}


size_t HelloParser::BTypeContext::getRuleIndex() const {
  return HelloParser::RuleBType;
}


std::any HelloParser::BTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitBType(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::BTypeContext* HelloParser::bType() {
  BTypeContext *_localctx = _tracker.createInstance<BTypeContext>(_ctx, getState());
  enterRule(_localctx, 8, HelloParser::RuleBType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefContext ------------------------------------------------------------------

HelloParser::ConstDefContext::ConstDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::ConstDefContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

tree::TerminalNode* HelloParser::ConstDefContext::ASSIGN() {
  return getToken(HelloParser::ASSIGN, 0);
}

HelloParser::ConstInitValContext* HelloParser::ConstDefContext::constInitVal() {
  return getRuleContext<HelloParser::ConstInitValContext>(0);
}

std::vector<tree::TerminalNode *> HelloParser::ConstDefContext::LBRACK() {
  return getTokens(HelloParser::LBRACK);
}

tree::TerminalNode* HelloParser::ConstDefContext::LBRACK(size_t i) {
  return getToken(HelloParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> HelloParser::ConstDefContext::IntConst() {
  return getTokens(HelloParser::IntConst);
}

tree::TerminalNode* HelloParser::ConstDefContext::IntConst(size_t i) {
  return getToken(HelloParser::IntConst, i);
}

std::vector<tree::TerminalNode *> HelloParser::ConstDefContext::RBRACK() {
  return getTokens(HelloParser::RBRACK);
}

tree::TerminalNode* HelloParser::ConstDefContext::RBRACK(size_t i) {
  return getToken(HelloParser::RBRACK, i);
}


size_t HelloParser::ConstDefContext::getRuleIndex() const {
  return HelloParser::RuleConstDef;
}


std::any HelloParser::ConstDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitConstDef(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ConstDefContext* HelloParser::constDef() {
  ConstDefContext *_localctx = _tracker.createInstance<ConstDefContext>(_ctx, getState());
  enterRule(_localctx, 10, HelloParser::RuleConstDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(HelloParser::Ident);
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::LBRACK) {
      setState(87);
      match(HelloParser::LBRACK);
      setState(88);
      match(HelloParser::IntConst);
      setState(89);
      match(HelloParser::RBRACK);
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(95);
    match(HelloParser::ASSIGN);
    setState(96);
    constInitVal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstInitValContext ------------------------------------------------------------------

HelloParser::ConstInitValContext::ConstInitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::ConstExpContext* HelloParser::ConstInitValContext::constExp() {
  return getRuleContext<HelloParser::ConstExpContext>(0);
}

tree::TerminalNode* HelloParser::ConstInitValContext::LBRACE() {
  return getToken(HelloParser::LBRACE, 0);
}

tree::TerminalNode* HelloParser::ConstInitValContext::RBRACE() {
  return getToken(HelloParser::RBRACE, 0);
}

std::vector<HelloParser::ConstInitValContext *> HelloParser::ConstInitValContext::constInitVal() {
  return getRuleContexts<HelloParser::ConstInitValContext>();
}

HelloParser::ConstInitValContext* HelloParser::ConstInitValContext::constInitVal(size_t i) {
  return getRuleContext<HelloParser::ConstInitValContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::ConstInitValContext::COMMA() {
  return getTokens(HelloParser::COMMA);
}

tree::TerminalNode* HelloParser::ConstInitValContext::COMMA(size_t i) {
  return getToken(HelloParser::COMMA, i);
}


size_t HelloParser::ConstInitValContext::getRuleIndex() const {
  return HelloParser::RuleConstInitVal;
}


std::any HelloParser::ConstInitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitConstInitVal(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ConstInitValContext* HelloParser::constInitVal() {
  ConstInitValContext *_localctx = _tracker.createInstance<ConstInitValContext>(_ctx, getState());
  enterRule(_localctx, 12, HelloParser::RuleConstInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(111);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HelloParser::Ident:
      case HelloParser::IntConst:
      case HelloParser::FloatConst:
      case HelloParser::CharConst:
      case HelloParser::LPAREN:
      case HelloParser::PLUS:
      case HelloParser::MINUS:
      case HelloParser::NOT: {
        enterOuterAlt(_localctx, 1);
        setState(98);
        constExp();
        break;
      }

      case HelloParser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(99);
        match(HelloParser::LBRACE);
        setState(108);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 4399729348608) != 0)) {
          setState(100);
          constInitVal();
          setState(105);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == HelloParser::COMMA) {
            setState(101);
            match(HelloParser::COMMA);
            setState(102);
            constInitVal();
            setState(107);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(110);
        match(HelloParser::RBRACE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

HelloParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::BTypeContext* HelloParser::VarDeclContext::bType() {
  return getRuleContext<HelloParser::BTypeContext>(0);
}

std::vector<HelloParser::VarDefContext *> HelloParser::VarDeclContext::varDef() {
  return getRuleContexts<HelloParser::VarDefContext>();
}

HelloParser::VarDefContext* HelloParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<HelloParser::VarDefContext>(i);
}

tree::TerminalNode* HelloParser::VarDeclContext::SEMI() {
  return getToken(HelloParser::SEMI, 0);
}

std::vector<tree::TerminalNode *> HelloParser::VarDeclContext::COMMA() {
  return getTokens(HelloParser::COMMA);
}

tree::TerminalNode* HelloParser::VarDeclContext::COMMA(size_t i) {
  return getToken(HelloParser::COMMA, i);
}


size_t HelloParser::VarDeclContext::getRuleIndex() const {
  return HelloParser::RuleVarDecl;
}


std::any HelloParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::VarDeclContext* HelloParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 14, HelloParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    bType();
    setState(114);
    varDef();
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::COMMA) {
      setState(115);
      match(HelloParser::COMMA);
      setState(116);
      varDef();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(122);
    match(HelloParser::SEMI);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

HelloParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::VarDefContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

std::vector<tree::TerminalNode *> HelloParser::VarDefContext::LBRACK() {
  return getTokens(HelloParser::LBRACK);
}

tree::TerminalNode* HelloParser::VarDefContext::LBRACK(size_t i) {
  return getToken(HelloParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> HelloParser::VarDefContext::IntConst() {
  return getTokens(HelloParser::IntConst);
}

tree::TerminalNode* HelloParser::VarDefContext::IntConst(size_t i) {
  return getToken(HelloParser::IntConst, i);
}

std::vector<tree::TerminalNode *> HelloParser::VarDefContext::RBRACK() {
  return getTokens(HelloParser::RBRACK);
}

tree::TerminalNode* HelloParser::VarDefContext::RBRACK(size_t i) {
  return getToken(HelloParser::RBRACK, i);
}

tree::TerminalNode* HelloParser::VarDefContext::ASSIGN() {
  return getToken(HelloParser::ASSIGN, 0);
}

HelloParser::ConstInitValContext* HelloParser::VarDefContext::constInitVal() {
  return getRuleContext<HelloParser::ConstInitValContext>(0);
}


size_t HelloParser::VarDefContext::getRuleIndex() const {
  return HelloParser::RuleVarDef;
}


std::any HelloParser::VarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitVarDef(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::VarDefContext* HelloParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 16, HelloParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    match(HelloParser::Ident);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::LBRACK) {
      setState(125);
      match(HelloParser::LBRACK);
      setState(126);
      match(HelloParser::IntConst);
      setState(127);
      match(HelloParser::RBRACK);
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(135);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HelloParser::ASSIGN) {
      setState(133);
      match(HelloParser::ASSIGN);
      setState(134);
      constInitVal();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

HelloParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::FuncTypeContext* HelloParser::FuncDefContext::funcType() {
  return getRuleContext<HelloParser::FuncTypeContext>(0);
}

tree::TerminalNode* HelloParser::FuncDefContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

tree::TerminalNode* HelloParser::FuncDefContext::LPAREN() {
  return getToken(HelloParser::LPAREN, 0);
}

tree::TerminalNode* HelloParser::FuncDefContext::RPAREN() {
  return getToken(HelloParser::RPAREN, 0);
}

HelloParser::BlockContext* HelloParser::FuncDefContext::block() {
  return getRuleContext<HelloParser::BlockContext>(0);
}

HelloParser::FuncFParamsContext* HelloParser::FuncDefContext::funcFParams() {
  return getRuleContext<HelloParser::FuncFParamsContext>(0);
}


size_t HelloParser::FuncDefContext::getRuleIndex() const {
  return HelloParser::RuleFuncDef;
}


std::any HelloParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncDefContext* HelloParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 18, HelloParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    funcType();
    setState(138);
    match(HelloParser::Ident);
    setState(139);
    match(HelloParser::LPAREN);
    setState(141);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 28) != 0)) {
      setState(140);
      funcFParams();
    }
    setState(143);
    match(HelloParser::RPAREN);
    setState(144);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncTypeContext ------------------------------------------------------------------

HelloParser::FuncTypeContext::FuncTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::FuncTypeContext::VOID() {
  return getToken(HelloParser::VOID, 0);
}

tree::TerminalNode* HelloParser::FuncTypeContext::INT() {
  return getToken(HelloParser::INT, 0);
}

tree::TerminalNode* HelloParser::FuncTypeContext::FLOAT() {
  return getToken(HelloParser::FLOAT, 0);
}

tree::TerminalNode* HelloParser::FuncTypeContext::CHAR() {
  return getToken(HelloParser::CHAR, 0);
}


size_t HelloParser::FuncTypeContext::getRuleIndex() const {
  return HelloParser::RuleFuncType;
}


std::any HelloParser::FuncTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncType(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncTypeContext* HelloParser::funcType() {
  FuncTypeContext *_localctx = _tracker.createInstance<FuncTypeContext>(_ctx, getState());
  enterRule(_localctx, 20, HelloParser::RuleFuncType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 60) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamsContext ------------------------------------------------------------------

HelloParser::FuncFParamsContext::FuncFParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HelloParser::FuncFParamContext *> HelloParser::FuncFParamsContext::funcFParam() {
  return getRuleContexts<HelloParser::FuncFParamContext>();
}

HelloParser::FuncFParamContext* HelloParser::FuncFParamsContext::funcFParam(size_t i) {
  return getRuleContext<HelloParser::FuncFParamContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::FuncFParamsContext::COMMA() {
  return getTokens(HelloParser::COMMA);
}

tree::TerminalNode* HelloParser::FuncFParamsContext::COMMA(size_t i) {
  return getToken(HelloParser::COMMA, i);
}


size_t HelloParser::FuncFParamsContext::getRuleIndex() const {
  return HelloParser::RuleFuncFParams;
}


std::any HelloParser::FuncFParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncFParams(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncFParamsContext* HelloParser::funcFParams() {
  FuncFParamsContext *_localctx = _tracker.createInstance<FuncFParamsContext>(_ctx, getState());
  enterRule(_localctx, 22, HelloParser::RuleFuncFParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    funcFParam();
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::COMMA) {
      setState(149);
      match(HelloParser::COMMA);
      setState(150);
      funcFParam();
      setState(155);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncFParamContext ------------------------------------------------------------------

HelloParser::FuncFParamContext::FuncFParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::BTypeContext* HelloParser::FuncFParamContext::bType() {
  return getRuleContext<HelloParser::BTypeContext>(0);
}

tree::TerminalNode* HelloParser::FuncFParamContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

std::vector<tree::TerminalNode *> HelloParser::FuncFParamContext::LBRACK() {
  return getTokens(HelloParser::LBRACK);
}

tree::TerminalNode* HelloParser::FuncFParamContext::LBRACK(size_t i) {
  return getToken(HelloParser::LBRACK, i);
}

std::vector<tree::TerminalNode *> HelloParser::FuncFParamContext::RBRACK() {
  return getTokens(HelloParser::RBRACK);
}

tree::TerminalNode* HelloParser::FuncFParamContext::RBRACK(size_t i) {
  return getToken(HelloParser::RBRACK, i);
}

std::vector<tree::TerminalNode *> HelloParser::FuncFParamContext::IntConst() {
  return getTokens(HelloParser::IntConst);
}

tree::TerminalNode* HelloParser::FuncFParamContext::IntConst(size_t i) {
  return getToken(HelloParser::IntConst, i);
}


size_t HelloParser::FuncFParamContext::getRuleIndex() const {
  return HelloParser::RuleFuncFParam;
}


std::any HelloParser::FuncFParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncFParam(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncFParamContext* HelloParser::funcFParam() {
  FuncFParamContext *_localctx = _tracker.createInstance<FuncFParamContext>(_ctx, getState());
  enterRule(_localctx, 24, HelloParser::RuleFuncFParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    bType();
    setState(157);
    match(HelloParser::Ident);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == HelloParser::LBRACK) {
      setState(158);
      match(HelloParser::LBRACK);
      setState(160);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == HelloParser::IntConst) {
        setState(159);
        match(HelloParser::IntConst);
      }
      setState(162);
      match(HelloParser::RBRACK);
      setState(168);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == HelloParser::LBRACK) {
        setState(163);
        match(HelloParser::LBRACK);
        setState(164);
        match(HelloParser::IntConst);
        setState(165);
        match(HelloParser::RBRACK);
        setState(170);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

HelloParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::BlockContext::LBRACE() {
  return getToken(HelloParser::LBRACE, 0);
}

tree::TerminalNode* HelloParser::BlockContext::RBRACE() {
  return getToken(HelloParser::RBRACE, 0);
}

std::vector<HelloParser::BlockItemContext *> HelloParser::BlockContext::blockItem() {
  return getRuleContexts<HelloParser::BlockItemContext>();
}

HelloParser::BlockItemContext* HelloParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<HelloParser::BlockItemContext>(i);
}


size_t HelloParser::BlockContext::getRuleIndex() const {
  return HelloParser::RuleBlock;
}


std::any HelloParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::BlockContext* HelloParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 26, HelloParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(173);
    match(HelloParser::LBRACE);
    setState(177);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4399730401118) != 0)) {
      setState(174);
      blockItem();
      setState(179);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(180);
    match(HelloParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

HelloParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::DeclContext* HelloParser::BlockItemContext::decl() {
  return getRuleContext<HelloParser::DeclContext>(0);
}

HelloParser::StmtContext* HelloParser::BlockItemContext::stmt() {
  return getRuleContext<HelloParser::StmtContext>(0);
}


size_t HelloParser::BlockItemContext::getRuleIndex() const {
  return HelloParser::RuleBlockItem;
}


std::any HelloParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::BlockItemContext* HelloParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 28, HelloParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HelloParser::CONST:
      case HelloParser::INT:
      case HelloParser::FLOAT:
      case HelloParser::CHAR: {
        enterOuterAlt(_localctx, 1);
        setState(182);
        decl();
        break;
      }

      case HelloParser::IF:
      case HelloParser::WHILE:
      case HelloParser::BREAK:
      case HelloParser::CONTINUE:
      case HelloParser::RETURN:
      case HelloParser::Ident:
      case HelloParser::IntConst:
      case HelloParser::FloatConst:
      case HelloParser::CharConst:
      case HelloParser::SEMI:
      case HelloParser::LPAREN:
      case HelloParser::LBRACE:
      case HelloParser::PLUS:
      case HelloParser::MINUS:
      case HelloParser::NOT: {
        enterOuterAlt(_localctx, 2);
        setState(183);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

HelloParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::LValContext* HelloParser::StmtContext::lVal() {
  return getRuleContext<HelloParser::LValContext>(0);
}

tree::TerminalNode* HelloParser::StmtContext::ASSIGN() {
  return getToken(HelloParser::ASSIGN, 0);
}

HelloParser::ExpContext* HelloParser::StmtContext::exp() {
  return getRuleContext<HelloParser::ExpContext>(0);
}

tree::TerminalNode* HelloParser::StmtContext::SEMI() {
  return getToken(HelloParser::SEMI, 0);
}

HelloParser::BlockContext* HelloParser::StmtContext::block() {
  return getRuleContext<HelloParser::BlockContext>(0);
}

tree::TerminalNode* HelloParser::StmtContext::RETURN() {
  return getToken(HelloParser::RETURN, 0);
}

tree::TerminalNode* HelloParser::StmtContext::IF() {
  return getToken(HelloParser::IF, 0);
}

tree::TerminalNode* HelloParser::StmtContext::LPAREN() {
  return getToken(HelloParser::LPAREN, 0);
}

HelloParser::CondContext* HelloParser::StmtContext::cond() {
  return getRuleContext<HelloParser::CondContext>(0);
}

tree::TerminalNode* HelloParser::StmtContext::RPAREN() {
  return getToken(HelloParser::RPAREN, 0);
}

std::vector<HelloParser::StmtContext *> HelloParser::StmtContext::stmt() {
  return getRuleContexts<HelloParser::StmtContext>();
}

HelloParser::StmtContext* HelloParser::StmtContext::stmt(size_t i) {
  return getRuleContext<HelloParser::StmtContext>(i);
}

tree::TerminalNode* HelloParser::StmtContext::ELSE() {
  return getToken(HelloParser::ELSE, 0);
}

tree::TerminalNode* HelloParser::StmtContext::WHILE() {
  return getToken(HelloParser::WHILE, 0);
}

tree::TerminalNode* HelloParser::StmtContext::BREAK() {
  return getToken(HelloParser::BREAK, 0);
}

tree::TerminalNode* HelloParser::StmtContext::CONTINUE() {
  return getToken(HelloParser::CONTINUE, 0);
}


size_t HelloParser::StmtContext::getRuleIndex() const {
  return HelloParser::RuleStmt;
}


std::any HelloParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::StmtContext* HelloParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 30, HelloParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(220);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(186);
      lVal();
      setState(187);
      match(HelloParser::ASSIGN);
      setState(188);
      exp();
      setState(189);
      match(HelloParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(192);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4399662239744) != 0)) {
        setState(191);
        exp();
      }
      setState(194);
      match(HelloParser::SEMI);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(195);
      block();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(196);
      match(HelloParser::RETURN);
      setState(198);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4399662239744) != 0)) {
        setState(197);
        exp();
      }
      setState(200);
      match(HelloParser::SEMI);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(201);
      match(HelloParser::IF);
      setState(202);
      match(HelloParser::LPAREN);
      setState(203);
      cond();
      setState(204);
      match(HelloParser::RPAREN);
      setState(205);
      stmt();
      setState(208);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
      case 1: {
        setState(206);
        match(HelloParser::ELSE);
        setState(207);
        stmt();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(210);
      match(HelloParser::WHILE);
      setState(211);
      match(HelloParser::LPAREN);
      setState(212);
      cond();
      setState(213);
      match(HelloParser::RPAREN);
      setState(214);
      stmt();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(216);
      match(HelloParser::BREAK);
      setState(217);
      match(HelloParser::SEMI);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(218);
      match(HelloParser::CONTINUE);
      setState(219);
      match(HelloParser::SEMI);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

HelloParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::AddExpContext* HelloParser::ExpContext::addExp() {
  return getRuleContext<HelloParser::AddExpContext>(0);
}


size_t HelloParser::ExpContext::getRuleIndex() const {
  return HelloParser::RuleExp;
}


std::any HelloParser::ExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitExp(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ExpContext* HelloParser::exp() {
  ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, getState());
  enterRule(_localctx, 32, HelloParser::RuleExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(222);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstExpContext ------------------------------------------------------------------

HelloParser::ConstExpContext::ConstExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::AddExpContext* HelloParser::ConstExpContext::addExp() {
  return getRuleContext<HelloParser::AddExpContext>(0);
}


size_t HelloParser::ConstExpContext::getRuleIndex() const {
  return HelloParser::RuleConstExp;
}


std::any HelloParser::ConstExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitConstExp(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::ConstExpContext* HelloParser::constExp() {
  ConstExpContext *_localctx = _tracker.createInstance<ConstExpContext>(_ctx, getState());
  enterRule(_localctx, 34, HelloParser::RuleConstExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(224);
    addExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

HelloParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::LOrExpContext* HelloParser::CondContext::lOrExp() {
  return getRuleContext<HelloParser::LOrExpContext>(0);
}


size_t HelloParser::CondContext::getRuleIndex() const {
  return HelloParser::RuleCond;
}


std::any HelloParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::CondContext* HelloParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 36, HelloParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    lOrExp(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

HelloParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::LValContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

std::vector<tree::TerminalNode *> HelloParser::LValContext::LBRACK() {
  return getTokens(HelloParser::LBRACK);
}

tree::TerminalNode* HelloParser::LValContext::LBRACK(size_t i) {
  return getToken(HelloParser::LBRACK, i);
}

std::vector<HelloParser::ExpContext *> HelloParser::LValContext::exp() {
  return getRuleContexts<HelloParser::ExpContext>();
}

HelloParser::ExpContext* HelloParser::LValContext::exp(size_t i) {
  return getRuleContext<HelloParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::LValContext::RBRACK() {
  return getTokens(HelloParser::RBRACK);
}

tree::TerminalNode* HelloParser::LValContext::RBRACK(size_t i) {
  return getToken(HelloParser::RBRACK, i);
}


size_t HelloParser::LValContext::getRuleIndex() const {
  return HelloParser::RuleLVal;
}


std::any HelloParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::LValContext* HelloParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 38, HelloParser::RuleLVal);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(228);
    match(HelloParser::Ident);
    setState(235);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(229);
        match(HelloParser::LBRACK);
        setState(230);
        exp();
        setState(231);
        match(HelloParser::RBRACK); 
      }
      setState(237);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

HelloParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::NumberContext::IntConst() {
  return getToken(HelloParser::IntConst, 0);
}

tree::TerminalNode* HelloParser::NumberContext::FloatConst() {
  return getToken(HelloParser::FloatConst, 0);
}

tree::TerminalNode* HelloParser::NumberContext::CharConst() {
  return getToken(HelloParser::CharConst, 0);
}


size_t HelloParser::NumberContext::getRuleIndex() const {
  return HelloParser::RuleNumber;
}


std::any HelloParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::NumberContext* HelloParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 40, HelloParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(238);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 917504) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncRParamsContext ------------------------------------------------------------------

HelloParser::FuncRParamsContext::FuncRParamsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<HelloParser::ExpContext *> HelloParser::FuncRParamsContext::exp() {
  return getRuleContexts<HelloParser::ExpContext>();
}

HelloParser::ExpContext* HelloParser::FuncRParamsContext::exp(size_t i) {
  return getRuleContext<HelloParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> HelloParser::FuncRParamsContext::COMMA() {
  return getTokens(HelloParser::COMMA);
}

tree::TerminalNode* HelloParser::FuncRParamsContext::COMMA(size_t i) {
  return getToken(HelloParser::COMMA, i);
}


size_t HelloParser::FuncRParamsContext::getRuleIndex() const {
  return HelloParser::RuleFuncRParams;
}


std::any HelloParser::FuncRParamsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitFuncRParams(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::FuncRParamsContext* HelloParser::funcRParams() {
  FuncRParamsContext *_localctx = _tracker.createInstance<FuncRParamsContext>(_ctx, getState());
  enterRule(_localctx, 42, HelloParser::RuleFuncRParams);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(240);
    exp();
    setState(245);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == HelloParser::COMMA) {
      setState(241);
      match(HelloParser::COMMA);
      setState(242);
      exp();
      setState(247);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryExpContext ------------------------------------------------------------------

HelloParser::PrimaryExpContext::PrimaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* HelloParser::PrimaryExpContext::LPAREN() {
  return getToken(HelloParser::LPAREN, 0);
}

HelloParser::ExpContext* HelloParser::PrimaryExpContext::exp() {
  return getRuleContext<HelloParser::ExpContext>(0);
}

tree::TerminalNode* HelloParser::PrimaryExpContext::RPAREN() {
  return getToken(HelloParser::RPAREN, 0);
}

HelloParser::LValContext* HelloParser::PrimaryExpContext::lVal() {
  return getRuleContext<HelloParser::LValContext>(0);
}

HelloParser::NumberContext* HelloParser::PrimaryExpContext::number() {
  return getRuleContext<HelloParser::NumberContext>(0);
}


size_t HelloParser::PrimaryExpContext::getRuleIndex() const {
  return HelloParser::RulePrimaryExp;
}


std::any HelloParser::PrimaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitPrimaryExp(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::PrimaryExpContext* HelloParser::primaryExp() {
  PrimaryExpContext *_localctx = _tracker.createInstance<PrimaryExpContext>(_ctx, getState());
  enterRule(_localctx, 44, HelloParser::RulePrimaryExp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(254);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case HelloParser::LPAREN: {
        enterOuterAlt(_localctx, 1);
        setState(248);
        match(HelloParser::LPAREN);
        setState(249);
        exp();
        setState(250);
        match(HelloParser::RPAREN);
        break;
      }

      case HelloParser::Ident: {
        enterOuterAlt(_localctx, 2);
        setState(252);
        lVal();
        break;
      }

      case HelloParser::IntConst:
      case HelloParser::FloatConst:
      case HelloParser::CharConst: {
        enterOuterAlt(_localctx, 3);
        setState(253);
        number();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryExpContext ------------------------------------------------------------------

HelloParser::UnaryExpContext::UnaryExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::PrimaryExpContext* HelloParser::UnaryExpContext::primaryExp() {
  return getRuleContext<HelloParser::PrimaryExpContext>(0);
}

HelloParser::UnaryExpContext* HelloParser::UnaryExpContext::unaryExp() {
  return getRuleContext<HelloParser::UnaryExpContext>(0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::PLUS() {
  return getToken(HelloParser::PLUS, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::MINUS() {
  return getToken(HelloParser::MINUS, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::NOT() {
  return getToken(HelloParser::NOT, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::Ident() {
  return getToken(HelloParser::Ident, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::LPAREN() {
  return getToken(HelloParser::LPAREN, 0);
}

tree::TerminalNode* HelloParser::UnaryExpContext::RPAREN() {
  return getToken(HelloParser::RPAREN, 0);
}

HelloParser::FuncRParamsContext* HelloParser::UnaryExpContext::funcRParams() {
  return getRuleContext<HelloParser::FuncRParamsContext>(0);
}


size_t HelloParser::UnaryExpContext::getRuleIndex() const {
  return HelloParser::RuleUnaryExp;
}


std::any HelloParser::UnaryExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitUnaryExp(this);
  else
    return visitor->visitChildren(this);
}

HelloParser::UnaryExpContext* HelloParser::unaryExp() {
  UnaryExpContext *_localctx = _tracker.createInstance<UnaryExpContext>(_ctx, getState());
  enterRule(_localctx, 46, HelloParser::RuleUnaryExp);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(265);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(256);
      primaryExp();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(257);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4399657123840) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(258);
      unaryExp();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(259);
      match(HelloParser::Ident);
      setState(260);
      match(HelloParser::LPAREN);
      setState(262);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4399662239744) != 0)) {
        setState(261);
        funcRParams();
      }
      setState(264);
      match(HelloParser::RPAREN);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExpContext ------------------------------------------------------------------

HelloParser::MulExpContext::MulExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::UnaryExpContext* HelloParser::MulExpContext::unaryExp() {
  return getRuleContext<HelloParser::UnaryExpContext>(0);
}

HelloParser::MulExpContext* HelloParser::MulExpContext::mulExp() {
  return getRuleContext<HelloParser::MulExpContext>(0);
}

tree::TerminalNode* HelloParser::MulExpContext::MUL() {
  return getToken(HelloParser::MUL, 0);
}

tree::TerminalNode* HelloParser::MulExpContext::DIV() {
  return getToken(HelloParser::DIV, 0);
}

tree::TerminalNode* HelloParser::MulExpContext::MOD() {
  return getToken(HelloParser::MOD, 0);
}


size_t HelloParser::MulExpContext::getRuleIndex() const {
  return HelloParser::RuleMulExp;
}


std::any HelloParser::MulExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitMulExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::MulExpContext* HelloParser::mulExp() {
   return mulExp(0);
}

HelloParser::MulExpContext* HelloParser::mulExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::MulExpContext *_localctx = _tracker.createInstance<MulExpContext>(_ctx, parentState);
  HelloParser::MulExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 48;
  enterRecursionRule(_localctx, 48, HelloParser::RuleMulExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(268);
    unaryExp();
    _ctx->stop = _input->LT(-1);
    setState(275);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MulExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMulExp);
        setState(270);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(271);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 15032385536) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(272);
        unaryExp(); 
      }
      setState(277);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AddExpContext ------------------------------------------------------------------

HelloParser::AddExpContext::AddExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::MulExpContext* HelloParser::AddExpContext::mulExp() {
  return getRuleContext<HelloParser::MulExpContext>(0);
}

HelloParser::AddExpContext* HelloParser::AddExpContext::addExp() {
  return getRuleContext<HelloParser::AddExpContext>(0);
}

tree::TerminalNode* HelloParser::AddExpContext::PLUS() {
  return getToken(HelloParser::PLUS, 0);
}

tree::TerminalNode* HelloParser::AddExpContext::MINUS() {
  return getToken(HelloParser::MINUS, 0);
}


size_t HelloParser::AddExpContext::getRuleIndex() const {
  return HelloParser::RuleAddExp;
}


std::any HelloParser::AddExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitAddExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::AddExpContext* HelloParser::addExp() {
   return addExp(0);
}

HelloParser::AddExpContext* HelloParser::addExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::AddExpContext *_localctx = _tracker.createInstance<AddExpContext>(_ctx, parentState);
  HelloParser::AddExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 50;
  enterRecursionRule(_localctx, 50, HelloParser::RuleAddExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(279);
    mulExp(0);
    _ctx->stop = _input->LT(-1);
    setState(286);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AddExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAddExp);
        setState(281);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(282);
        _la = _input->LA(1);
        if (!(_la == HelloParser::PLUS

        || _la == HelloParser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(283);
        mulExp(0); 
      }
      setState(288);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelExpContext ------------------------------------------------------------------

HelloParser::RelExpContext::RelExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::AddExpContext* HelloParser::RelExpContext::addExp() {
  return getRuleContext<HelloParser::AddExpContext>(0);
}

HelloParser::RelExpContext* HelloParser::RelExpContext::relExp() {
  return getRuleContext<HelloParser::RelExpContext>(0);
}

tree::TerminalNode* HelloParser::RelExpContext::LT() {
  return getToken(HelloParser::LT, 0);
}

tree::TerminalNode* HelloParser::RelExpContext::GT() {
  return getToken(HelloParser::GT, 0);
}

tree::TerminalNode* HelloParser::RelExpContext::LE() {
  return getToken(HelloParser::LE, 0);
}

tree::TerminalNode* HelloParser::RelExpContext::GE() {
  return getToken(HelloParser::GE, 0);
}


size_t HelloParser::RelExpContext::getRuleIndex() const {
  return HelloParser::RuleRelExp;
}


std::any HelloParser::RelExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitRelExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::RelExpContext* HelloParser::relExp() {
   return relExp(0);
}

HelloParser::RelExpContext* HelloParser::relExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::RelExpContext *_localctx = _tracker.createInstance<RelExpContext>(_ctx, parentState);
  HelloParser::RelExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 52;
  enterRecursionRule(_localctx, 52, HelloParser::RuleRelExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(290);
    addExp(0);
    _ctx->stop = _input->LT(-1);
    setState(297);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<RelExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleRelExp);
        setState(292);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(293);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1030792151040) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(294);
        addExp(0); 
      }
      setState(299);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqExpContext ------------------------------------------------------------------

HelloParser::EqExpContext::EqExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::RelExpContext* HelloParser::EqExpContext::relExp() {
  return getRuleContext<HelloParser::RelExpContext>(0);
}

HelloParser::EqExpContext* HelloParser::EqExpContext::eqExp() {
  return getRuleContext<HelloParser::EqExpContext>(0);
}

tree::TerminalNode* HelloParser::EqExpContext::EQ() {
  return getToken(HelloParser::EQ, 0);
}

tree::TerminalNode* HelloParser::EqExpContext::NE() {
  return getToken(HelloParser::NE, 0);
}


size_t HelloParser::EqExpContext::getRuleIndex() const {
  return HelloParser::RuleEqExp;
}


std::any HelloParser::EqExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitEqExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::EqExpContext* HelloParser::eqExp() {
   return eqExp(0);
}

HelloParser::EqExpContext* HelloParser::eqExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::EqExpContext *_localctx = _tracker.createInstance<EqExpContext>(_ctx, parentState);
  HelloParser::EqExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 54;
  enterRecursionRule(_localctx, 54, HelloParser::RuleEqExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(301);
    relExp(0);
    _ctx->stop = _input->LT(-1);
    setState(308);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EqExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEqExp);
        setState(303);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(304);
        _la = _input->LA(1);
        if (!(_la == HelloParser::EQ

        || _la == HelloParser::NE)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(305);
        relExp(0); 
      }
      setState(310);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LAndExpContext ------------------------------------------------------------------

HelloParser::LAndExpContext::LAndExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::EqExpContext* HelloParser::LAndExpContext::eqExp() {
  return getRuleContext<HelloParser::EqExpContext>(0);
}

HelloParser::LAndExpContext* HelloParser::LAndExpContext::lAndExp() {
  return getRuleContext<HelloParser::LAndExpContext>(0);
}

tree::TerminalNode* HelloParser::LAndExpContext::AND() {
  return getToken(HelloParser::AND, 0);
}


size_t HelloParser::LAndExpContext::getRuleIndex() const {
  return HelloParser::RuleLAndExp;
}


std::any HelloParser::LAndExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitLAndExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::LAndExpContext* HelloParser::lAndExp() {
   return lAndExp(0);
}

HelloParser::LAndExpContext* HelloParser::lAndExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::LAndExpContext *_localctx = _tracker.createInstance<LAndExpContext>(_ctx, parentState);
  HelloParser::LAndExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 56;
  enterRecursionRule(_localctx, 56, HelloParser::RuleLAndExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(312);
    eqExp(0);
    _ctx->stop = _input->LT(-1);
    setState(319);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LAndExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLAndExp);
        setState(314);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(315);
        match(HelloParser::AND);
        setState(316);
        eqExp(0); 
      }
      setState(321);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LOrExpContext ------------------------------------------------------------------

HelloParser::LOrExpContext::LOrExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

HelloParser::LAndExpContext* HelloParser::LOrExpContext::lAndExp() {
  return getRuleContext<HelloParser::LAndExpContext>(0);
}

HelloParser::LOrExpContext* HelloParser::LOrExpContext::lOrExp() {
  return getRuleContext<HelloParser::LOrExpContext>(0);
}

tree::TerminalNode* HelloParser::LOrExpContext::OR() {
  return getToken(HelloParser::OR, 0);
}


size_t HelloParser::LOrExpContext::getRuleIndex() const {
  return HelloParser::RuleLOrExp;
}


std::any HelloParser::LOrExpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<HelloVisitor*>(visitor))
    return parserVisitor->visitLOrExp(this);
  else
    return visitor->visitChildren(this);
}


HelloParser::LOrExpContext* HelloParser::lOrExp() {
   return lOrExp(0);
}

HelloParser::LOrExpContext* HelloParser::lOrExp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  HelloParser::LOrExpContext *_localctx = _tracker.createInstance<LOrExpContext>(_ctx, parentState);
  HelloParser::LOrExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 58;
  enterRecursionRule(_localctx, 58, HelloParser::RuleLOrExp, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(323);
    lAndExp(0);
    _ctx->stop = _input->LT(-1);
    setState(330);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LOrExpContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLOrExp);
        setState(325);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(326);
        match(HelloParser::OR);
        setState(327);
        lAndExp(0); 
      }
      setState(332);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool HelloParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 24: return mulExpSempred(antlrcpp::downCast<MulExpContext *>(context), predicateIndex);
    case 25: return addExpSempred(antlrcpp::downCast<AddExpContext *>(context), predicateIndex);
    case 26: return relExpSempred(antlrcpp::downCast<RelExpContext *>(context), predicateIndex);
    case 27: return eqExpSempred(antlrcpp::downCast<EqExpContext *>(context), predicateIndex);
    case 28: return lAndExpSempred(antlrcpp::downCast<LAndExpContext *>(context), predicateIndex);
    case 29: return lOrExpSempred(antlrcpp::downCast<LOrExpContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool HelloParser::mulExpSempred(MulExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::addExpSempred(AddExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::relExpSempred(RelExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::eqExpSempred(EqExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::lAndExpSempred(LAndExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool HelloParser::lOrExpSempred(LOrExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void HelloParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  helloParserInitialize();
#else
  ::antlr4::internal::call_once(helloParserOnceFlag, helloParserInitialize);
#endif
}
