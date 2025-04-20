grammar Hello;

options {
    language = Cpp;
}

@header {
    #include <vector>
}

/********************
 * Parser 规则
 ********************/
program
    : compUnit
    ;

compUnit
    : (funcDef | decl)+
    ;

decl
    : constDecl
    | varDecl
    ;

constDecl
    : CONST bType constDef (COMMA constDef)* SEMI
    ;

bType
    : INT
    | FLOAT
    | CHAR
    ;

constDef
    : Ident (LBRACK IntConst RBRACK)* ASSIGN constInitVal
    ;

constInitVal
    : constExp
    | LBRACE (constInitVal (COMMA constInitVal)*)? RBRACE
    ;

varDecl
    : bType varDef (COMMA varDef)* SEMI
    ;

varDef
    : Ident (LBRACK IntConst RBRACK)* (ASSIGN constInitVal)?
    ;

funcDef
    : funcType Ident LPAREN (funcFParams)? RPAREN block
    ;

funcType
    : VOID
    | INT
    | FLOAT
    | CHAR
    ;

funcFParams
    : funcFParam (COMMA funcFParam)*
    ;

funcFParam
    : bType Ident (LBRACK IntConst? RBRACK (LBRACK IntConst RBRACK)* )?
    ;

block
    : LBRACE blockItem* RBRACE
    ;

blockItem
    : decl
    | stmt
    ;

stmt
    : lVal ASSIGN exp SEMI                          
    | (exp)? SEMI                                  
    | block                                        
    | RETURN exp? SEMI                             
    | IF LPAREN cond RPAREN stmt (ELSE stmt)?      
    | WHILE LPAREN cond RPAREN stmt                
    | BREAK SEMI                                   
    | CONTINUE SEMI                                
    ;

exp
    : addExp
    ;

constExp
    : addExp    
    ;//#注:使用的Ident必须是常量,失败是因为这个导致07判断错误？


cond
    : lOrExp
    ;

lVal
    : Ident (LBRACK exp RBRACK)*
    ;

number
    : IntConst
    | FloatConst
    | CharConst
    ;

funcRParams
    : exp (COMMA exp)*
    ;

primaryExp
    : LPAREN exp RPAREN
    | lVal
    | number
    ;

unaryExp
    : primaryExp
    | (PLUS | MINUS | NOT) unaryExp
    | Ident LPAREN funcRParams? RPAREN
    ;

mulExp
    : unaryExp
    | mulExp (MUL | DIV | MOD) unaryExp
    ;

addExp
    : mulExp
    | addExp (PLUS | MINUS) mulExp
    ;

relExp
    : addExp
    | relExp (LT | GT | LE | GE) addExp
    ;

eqExp
    : relExp
    | eqExp (EQ | NE) relExp
    ;

lAndExp
    : eqExp
    | lAndExp AND eqExp
    ;

lOrExp
    : lAndExp
    | lOrExp OR lAndExp
    ;

/* 关键字 */
CONST: 'const';
INT: 'int';
FLOAT: 'float';
CHAR: 'char';
VOID: 'void';
IF: 'if';
ELSE: 'else';
WHILE: 'while';
BREAK: 'break';
CONTINUE: 'continue';
RETURN: 'return';

/********************
 * Lexer 规则
 ********************/
/* 标识符 */
Ident: [a-zA-Z_] [a-zA-Z0-9_]*;

/* 换行符 */
NewLine: ('\r' '\n'? | '\n') -> skip;

/* 空白符 */
WhiteSpace: [ \t]+ -> skip;

/* 注释 */
LineComment: '//' ~[\r\n]* -> skip;
BlockComment: '/*' .*? '*/' -> skip;

/* 整型常量 */
IntConst: DecimalConst | OctalConst | HexadecConst;

fragment DecimalConst: NonZeroDigit Digit* | '0';
fragment OctalConst: '0' [0-7]+;
fragment HexadecConst: HexadecimalPrefix HexadecimalDigit+;

/* 浮点常量 */
// FloatConst: 
//     Digit+ '.' Digit* ExponentPart?
//     | '.' Digit+ ExponentPart?
//     | Digit+ ExponentPart;
// 修正后规则（添加f/F后缀支持）
FloatConst
    :   ( [0-9]+ '.' [0-9]*   
        | '.' [0-9]+          
        | [0-9]+ [eE] [+-]? [0-9]+    
        | [0-9]* '.' [0-9]+ [eE] [+-]? [0-9]+  
        ) [fF]?  
    ;


fragment ExponentPart: [eE] [+-]? Digit+;

/* 字符常量 */
CharConst: '\'' Character '\'';
fragment Character: ~['\\\r\n] | EscapeSequence;
fragment EscapeSequence: 
    '\\' [btnfr"'\\]
    | '\\' [0-7] [0-7]? [0-7]?
    | '\\x' HexadecimalDigit+;

/* 数字定义 */
fragment NonZeroDigit: [1-9];
fragment Digit: [0-9];
fragment OctalDigit: [0-7];
fragment HexadecimalPrefix: '0' [xX];
fragment HexadecimalDigit: [0-9a-fA-F];

/* 运算符和分隔符 */
SEMI: ';';
COMMA: ',';
LPAREN: '(';
RPAREN: ')';
LBRACK: '[';
RBRACK: ']';
LBRACE: '{';
RBRACE: '}';

ASSIGN: '=';
PLUS: '+';
MINUS: '-';
MUL: '*';
DIV: '/';
MOD: '%';

EQ: '==';
NE: '!=';
LT: '<';
GT: '>';
LE: '<=';
GE: '>=';

AND: '&&';
OR: '||';
NOT: '!';