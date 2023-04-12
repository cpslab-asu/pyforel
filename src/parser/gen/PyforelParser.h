
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PyforelParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  PyforelParser : public antlr4::Parser {
public:
  enum {
    Indent = 1, Dedent = 2, Newline = 3, If = 4, ElseIf = 5, Else = 6, Not = 7, 
    And = 8, Or = 9, Fn = 10, Eventually = 11, Always = 12, Next = 13, Within = 14, 
    With = 15, Keep = 16, Upto = 17, Release = 18, In = 19, From = 20, To = 21, 
    True = 22, False = 23, Exists = 24, Forall = 25, AtWord = 26, At = 27, 
    Ampersand = 28, Apostrophe = 29, Asterick = 30, Bar = 31, Caret = 32, 
    Colon = 33, Comma = 34, DollarSign = 35, Dot = 36, Equal = 37, ExclamationMark = 38, 
    GraveAccent = 39, Hash = 40, Minus = 41, PercentSign = 42, Plus = 43, 
    QuestionMark = 44, QuotationMark = 45, Semicolon = 46, Tilde = 47, Underscore = 48, 
    Slash = 49, Backslash = 50, LeftBrace = 51, RightBrace = 52, LeftBracket = 53, 
    RightBracket = 54, LeftChevron = 55, RightChevron = 56, LeftParenthesis = 57, 
    RightParenthesis = 58, BlockComment = 59, LineComment = 60, Infinity = 61, 
    Scalar = 62, Integer = 63, DecimalInteger = 64, BinaryInteger = 65, 
    OctalInteger = 66, HexInteger = 67, Floating = 68, PointFloat = 69, 
    ExponentFloat = 70, Identifier = 71, Whitespace = 72
  };

  enum {
    RuleStart = 0, RuleProgram = 1, RuleStatement = 2, RuleSimpleStatement = 3, 
    RuleFunctionCallStatement = 4, RuleArgList = 5, RuleCompoundStatement = 6, 
    RuleIfStatement = 7, RuleElifStatement = 8, RuleElseStatement = 9, RuleClauseStatement = 10, 
    RuleFunctionDefinitionStatement = 11, RuleParamList = 12, RuleParameter = 13, 
    RuleTemporalStatement = 14, RuleBounds = 15, RuleFreezeTimeStatement = 16, 
    RuleObjectQualifierStatement = 17, RuleNewScope = 18
  };

  explicit PyforelParser(antlr4::TokenStream *input);

  PyforelParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~PyforelParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class ProgramContext;
  class StatementContext;
  class SimpleStatementContext;
  class FunctionCallStatementContext;
  class ArgListContext;
  class CompoundStatementContext;
  class IfStatementContext;
  class ElifStatementContext;
  class ElseStatementContext;
  class ClauseStatementContext;
  class FunctionDefinitionStatementContext;
  class ParamListContext;
  class ParameterContext;
  class TemporalStatementContext;
  class BoundsContext;
  class FreezeTimeStatementContext;
  class ObjectQualifierStatementContext;
  class NewScopeContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ProgramContext *program();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StartContext* start();

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    StatementContext *statement();
    antlr4::tree::TerminalNode *RightParenthesis();
    std::vector<SimpleStatementContext *> simpleStatement();
    SimpleStatementContext* simpleStatement(size_t i);
    antlr4::tree::TerminalNode *Newline();
    std::vector<antlr4::tree::TerminalNode *> Semicolon();
    antlr4::tree::TerminalNode* Semicolon(size_t i);
    CompoundStatementContext *compoundStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  SimpleStatementContext : public antlr4::ParserRuleContext {
  public:
    SimpleStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FunctionCallStatementContext *functionCallStatement();
    antlr4::tree::TerminalNode *True();
    antlr4::tree::TerminalNode *False();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleStatementContext* simpleStatement();

  class  FunctionCallStatementContext : public antlr4::ParserRuleContext {
  public:
    FunctionCallStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    ArgListContext *argList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionCallStatementContext* functionCallStatement();

  class  ArgListContext : public antlr4::ParserRuleContext {
  public:
    ArgListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Comma();
    ArgListContext *argList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgListContext* argList();

  class  CompoundStatementContext : public antlr4::ParserRuleContext {
  public:
    CompoundStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IfStatementContext *ifStatement();
    FunctionDefinitionStatementContext *functionDefinitionStatement();
    TemporalStatementContext *temporalStatement();
    FreezeTimeStatementContext *freezeTimeStatement();
    ObjectQualifierStatementContext *objectQualifierStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompoundStatementContext* compoundStatement();

  class  IfStatementContext : public antlr4::ParserRuleContext {
  public:
    IfStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *If();
    ClauseStatementContext *clauseStatement();
    antlr4::tree::TerminalNode *Colon();
    NewScopeContext *newScope();
    std::vector<ElifStatementContext *> elifStatement();
    ElifStatementContext* elifStatement(size_t i);
    ElseStatementContext *elseStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfStatementContext* ifStatement();

  class  ElifStatementContext : public antlr4::ParserRuleContext {
  public:
    ElifStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ElseIf();
    antlr4::tree::TerminalNode *Colon();
    NewScopeContext *newScope();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElifStatementContext* elifStatement();

  class  ElseStatementContext : public antlr4::ParserRuleContext {
  public:
    ElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Else();
    antlr4::tree::TerminalNode *Colon();
    NewScopeContext *newScope();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElseStatementContext* elseStatement();

  class  ClauseStatementContext : public antlr4::ParserRuleContext {
  public:
    ClauseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParenthesis();
    std::vector<ClauseStatementContext *> clauseStatement();
    ClauseStatementContext* clauseStatement(size_t i);
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *Not();
    SimpleStatementContext *simpleStatement();
    antlr4::tree::TerminalNode *And();
    antlr4::tree::TerminalNode *Or();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClauseStatementContext* clauseStatement();
  ClauseStatementContext* clauseStatement(int precedence);
  class  FunctionDefinitionStatementContext : public antlr4::ParserRuleContext {
  public:
    FunctionDefinitionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Fn();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LeftParenthesis();
    antlr4::tree::TerminalNode *RightParenthesis();
    antlr4::tree::TerminalNode *Colon();
    NewScopeContext *newScope();
    ParamListContext *paramList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FunctionDefinitionStatementContext* functionDefinitionStatement();

  class  ParamListContext : public antlr4::ParserRuleContext {
  public:
    ParamListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ParameterContext *parameter();
    antlr4::tree::TerminalNode *Comma();
    ParamListContext *paramList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParamListContext* paramList();

  class  ParameterContext : public antlr4::ParserRuleContext {
  public:
    ParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *Colon();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParameterContext* parameter();

  class  TemporalStatementContext : public antlr4::ParserRuleContext {
  public:
    TemporalStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Eventually();
    antlr4::tree::TerminalNode *Colon();
    NewScopeContext *newScope();
    BoundsContext *bounds();
    antlr4::tree::TerminalNode *Always();
    antlr4::tree::TerminalNode *Next();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TemporalStatementContext* temporalStatement();

  class  BoundsContext : public antlr4::ParserRuleContext {
  public:
    BoundsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Within();
    std::vector<antlr4::tree::TerminalNode *> Scalar();
    antlr4::tree::TerminalNode* Scalar(size_t i);
    antlr4::tree::TerminalNode *Upto();
    antlr4::tree::TerminalNode *To();
    antlr4::tree::TerminalNode *From();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BoundsContext* bounds();

  class  FreezeTimeStatementContext : public antlr4::ParserRuleContext {
  public:
    FreezeTimeStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AtWord();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    NewScopeContext *newScope();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FreezeTimeStatementContext* freezeTimeStatement();

  class  ObjectQualifierStatementContext : public antlr4::ParserRuleContext {
  public:
    ObjectQualifierStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Exists();
    ArgListContext *argList();
    antlr4::tree::TerminalNode *Colon();
    NewScopeContext *newScope();
    antlr4::tree::TerminalNode *Forall();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectQualifierStatementContext* objectQualifierStatement();

  class  NewScopeContext : public antlr4::ParserRuleContext {
  public:
    NewScopeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleStatementContext *simpleStatement();
    antlr4::tree::TerminalNode *Newline();
    antlr4::tree::TerminalNode *Indent();
    antlr4::tree::TerminalNode *Dedent();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NewScopeContext* newScope();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool clauseStatementSempred(ClauseStatementContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

}  // namespace gen
