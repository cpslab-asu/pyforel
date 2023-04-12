
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PyforelParser.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "PyforelParser.h"


namespace gen {

/**
 * This class defines an abstract visitor for a parse tree
 * produced by PyforelParser.
 */
class  PyforelParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PyforelParser.
   */
    virtual std::any visitStart(PyforelParser::StartContext *context) = 0;

    virtual std::any visitProgram(PyforelParser::ProgramContext *context) = 0;

    virtual std::any visitStatement(PyforelParser::StatementContext *context) = 0;

    virtual std::any visitSimpleStatement(PyforelParser::SimpleStatementContext *context) = 0;

    virtual std::any visitFunctionCallStatement(PyforelParser::FunctionCallStatementContext *context) = 0;

    virtual std::any visitArgList(PyforelParser::ArgListContext *context) = 0;

    virtual std::any visitCompoundStatement(PyforelParser::CompoundStatementContext *context) = 0;

    virtual std::any visitIfStatement(PyforelParser::IfStatementContext *context) = 0;

    virtual std::any visitElifStatement(PyforelParser::ElifStatementContext *context) = 0;

    virtual std::any visitElseStatement(PyforelParser::ElseStatementContext *context) = 0;

    virtual std::any visitClauseStatement(PyforelParser::ClauseStatementContext *context) = 0;

    virtual std::any visitFunctionDefinitionStatement(PyforelParser::FunctionDefinitionStatementContext *context) = 0;

    virtual std::any visitParamList(PyforelParser::ParamListContext *context) = 0;

    virtual std::any visitParameter(PyforelParser::ParameterContext *context) = 0;

    virtual std::any visitTemporalStatement(PyforelParser::TemporalStatementContext *context) = 0;

    virtual std::any visitBounds(PyforelParser::BoundsContext *context) = 0;

    virtual std::any visitFreezeTimeStatement(PyforelParser::FreezeTimeStatementContext *context) = 0;

    virtual std::any visitObjectQualifierStatement(PyforelParser::ObjectQualifierStatementContext *context) = 0;

    virtual std::any visitNewScope(PyforelParser::NewScopeContext *context) = 0;


};

}  // namespace gen
