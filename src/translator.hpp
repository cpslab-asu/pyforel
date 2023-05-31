#ifndef PYFOREL_TRANSLATOR_HPP
#define PYFOREL_TRANSLATOR_HPP

#include <any>
#include <string>

#include "parser/gen/PyforelParserVisitor.h"

namespace pyforel {
class Translator : public gen::PyforelParserVisitor {
   public:
    auto visitStart(gen::PyforelParser::StartContext *ctx)
        -> std::any override {
        return visit(ctx->program());
    }

    auto visitProgram(gen::PyforelParser::ProgramContext *ctx)
        -> std::any override {
        std::string translation;

        for (const auto s : ctx->statement()) {
            if (translation.empty()) {
                translation = std::any_cast<std::string>(visit(s));
            } else {
                translation = this->land(translation,
                                         std::any_cast<std::string>(visit(s)));
            }
        }

        return translation;
    }

    auto visitStatement(gen::PyforelParser::StatementContext *ctx)
        -> std::any override {
        if (ctx->statement()) {
            return visit(ctx->statement());
        } else if (ctx->simpleStatement(0)) {
            std::string translation;

            for (const auto s : ctx->simpleStatement()) {
                if (translation.empty()) {
                    translation = std::any_cast<std::string>(visit(s));
                } else {
                    translation = this->land(
                        translation, std::any_cast<std::string>(visit(s)));
                }
            }

            return translation;
        } else if (ctx->compoundStatement()) {
            return visit(ctx->compoundStatement());
        } else {
            return std::string();
        }
    }

    auto visitSimpleStatement(gen::PyforelParser::SimpleStatementContext *ctx)
        -> std::any override {
        if (ctx->functionCallStatement()) {
            return visit(ctx->functionCallStatement());
        } else if (ctx->True()) {
            return std::string("true");
        } else if (ctx->False()) {
            return std::string("false");
        } else if (ctx->Identifier()) {
            return ctx->Identifier()->getText();
        } else {
            return std::string();
        }
    }

    auto visitFunctionCallStatement(
        gen::PyforelParser::FunctionCallStatementContext *ctx)
        -> std::any override {
        return std::string();
    }

    auto visitArgList(gen::PyforelParser::ArgListContext *ctx)
        -> std::any override {
        std::string translation;

        translation.append(ctx->Identifier()->getText());

        if (ctx->argList()) {
            translation.append(
                ", " + std::any_cast<std::string>(visit(ctx->argList())));
        }

        return translation;
    }

    auto visitCompoundStatement(
        gen::PyforelParser::CompoundStatementContext *ctx)
        -> std::any override {
        if (ctx->ifStatement()) {
            return visit(ctx->ifStatement());
        } else if (ctx->functionDefinitionStatement()) {
            return visit(ctx->functionDefinitionStatement());
        } else if (ctx->temporalStatement()) {
            return visit(ctx->temporalStatement());
        } else if (ctx->freezeTimeStatement()) {
            return visit(ctx->freezeTimeStatement());
        } else if (ctx->objectQualifierStatement()) {
            return visit(ctx->objectQualifierStatement());
        } else {
            return std::string();
        }
    }

    auto visitIfStatement(gen::PyforelParser::IfStatementContext *ctx)
        -> std::any override {
        return std::string();
    }

    auto visitElifStatement(gen::PyforelParser::ElifStatementContext *ctx)
        -> std::any override {
        return std::string();
    }

    auto visitElseStatement(gen::PyforelParser::ElseStatementContext *ctx)
        -> std::any override {
        return std::string();
    }

    auto visitClauseStatement(gen::PyforelParser::ClauseStatementContext *ctx)
        -> std::any override {
        return std::string();
    }

    auto visitFunctionDefinitionStatement(
        gen::PyforelParser::FunctionDefinitionStatementContext *ctx)
        -> std::any override {
        return std::string();
    }

    auto visitParamList(gen::PyforelParser::ParamListContext *ctx)
        -> std::any override {
        return std::string();
    }

    auto visitParameter(gen::PyforelParser::ParameterContext *ctx)
        -> std::any override {
        return std::string();
    }

    auto visitTemporalStatement(
        gen::PyforelParser::TemporalStatementContext *ctx)
        -> std::any override {
        std::string interval;
        if (ctx->bounds()) {
            interval = std::any_cast<std::string>(visit(ctx->bounds()));
        }

        if (ctx->Eventually()) {
            auto subformula =
                std::any_cast<std::string>(visit(ctx->newScope()));

            return "F" + interval + " (" + subformula + ")";
        } else if (ctx->Always()) {
            auto subformula =
                std::any_cast<std::string>(visit(ctx->newScope()));

            return "G" + interval + " (" + subformula + ")";
        } else if (ctx->Next()) {
            auto subformula =
                std::any_cast<std::string>(visit(ctx->newScope()));

            return "X" + interval + " (" + subformula + ")";
        } else {
            return std::string();
        }
    }

    auto visitBounds(gen::PyforelParser::BoundsContext *ctx)
        -> std::any override {
        std::string interval;

        if (ctx->Within()) {
            interval.append("(");
        } else {
            interval.append("[");
        }

        interval.append(ctx->Scalar(0)->getText());
        interval.append(", ");
        interval.append(ctx->Scalar(1)->getText());

        if (ctx->Upto()) {
            interval.append(")");
        } else {
            interval.append("]");
        }

        return interval;
    }

    auto visitFreezeTimeStatement(
        gen::PyforelParser::FreezeTimeStatementContext *ctx)
        -> std::any override {
        return std::string();
    }

    auto visitObjectQualifierStatement(
        gen::PyforelParser::ObjectQualifierStatementContext *ctx)
        -> std::any override {
        std::string translation;

        auto args = std::any_cast<std::string>(visit(ctx->argList()));
        auto subformula = std::any_cast<std::string>(visit(ctx->newScope()));

        if (ctx->Exists()) {
            translation.append("E(");
        } else {
            translation.append("A(");
        }

        translation.append(args);
        translation.append(")");

        translation.append(" (" + subformula + ")");
        return translation;
    }

    auto visitNewScope(gen::PyforelParser::NewScopeContext *ctx)
        -> std::any override {
        std::string translation;

        for (const auto s : ctx->statement()) {
            if (translation.empty()) {
                translation = std::any_cast<std::string>(visit(s));
            } else {
                translation = this->land(translation,
                                         std::any_cast<std::string>(visit(s)));
            }
        }

        return translation;
    }

   private:
    auto land(const std::string &lhs, const std::string &rhs) -> std::string {
        return lhs + " && " + rhs;
    }
};
}  // namespace pyforel

#endif
