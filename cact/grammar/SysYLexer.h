
    #include <vector>


// Generated from ./SysY.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  SysYLexer : public antlr4::Lexer {
public:
  enum {
    CONST = 1, INT = 2, FLOAT = 3, CHAR = 4, VOID = 5, IF = 6, ELSE = 7, 
    WHILE = 8, BREAK = 9, CONTINUE = 10, RETURN = 11, Ident = 12, NewLine = 13, 
    WhiteSpace = 14, LineComment = 15, BlockComment = 16, IntConst = 17, 
    FloatConst = 18, CharConst = 19, SEMI = 20, COMMA = 21, LPAREN = 22, 
    RPAREN = 23, LBRACK = 24, RBRACK = 25, LBRACE = 26, RBRACE = 27, ASSIGN = 28, 
    PLUS = 29, MINUS = 30, MUL = 31, DIV = 32, MOD = 33, EQ = 34, NE = 35, 
    LT = 36, GT = 37, LE = 38, GE = 39, AND = 40, OR = 41, NOT = 42
  };

  explicit SysYLexer(antlr4::CharStream *input);

  ~SysYLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

