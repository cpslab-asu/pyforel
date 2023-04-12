
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PyforelParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "PyforelParserVisitor.h"


namespace gen {

/**
 * This class provides an empty implementation of PyforelParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PyforelParserBaseVisitor : public PyforelParserVisitor {
public:

  virtual std::any visitStart(PyforelParser::StartContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitProgram(PyforelParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(PyforelParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleStatement(PyforelParser::SimpleStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCallStatement(PyforelParser::FunctionCallStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgList(PyforelParser::ArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompoundStatement(PyforelParser::CompoundStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStatement(PyforelParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElifStatement(PyforelParser::ElifStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElseStatement(PyforelParser::ElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClauseStatement(PyforelParser::ClauseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionDefinitionStatement(PyforelParser::FunctionDefinitionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamList(PyforelParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(PyforelParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTemporalStatement(PyforelParser::TemporalStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBounds(PyforelParser::BoundsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFreezeTimeStatement(PyforelParser::FreezeTimeStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitObjectQualifierStatement(PyforelParser::ObjectQualifierStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNewScope(PyforelParser::NewScopeContext *ctx) override {
    return visitChildren(ctx);
  }


};

}  // namespace gen
