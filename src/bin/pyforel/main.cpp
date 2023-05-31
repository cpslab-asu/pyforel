#include <any>
#include <fstream>
#include <iostream>
#include <string>

#include "ANTLRInputStream.h"
#include "CommonTokenStream.h"
#include "parser/gen/PyforelLexer.h"
#include "parser/gen/PyforelParser.h"
#include "parser/gen/PyforelParserBaseVisitor.h"
#include "translator.hpp"

auto main(int argc, char** argv) -> int {
    antlr4::ANTLRInputStream input;

    if (argc == 2) {
        std::ifstream source;
        source.open(argv[1]);

        input.load(source);
        source.close();
    } else {
        input.load(std::cin);
    }

    // Perform lexical analysis on the input.
    //
    // This includes creating a custom lexer and generating the set of
    // tokens from the target lexer.
    auto lexer = gen::PyforelLexer(&input);
    auto tokens = antlr4::CommonTokenStream(&lexer);

    // Parse the stream of tokens.
    //
    // The stream of tokens is passed to initialize the custom parser. From
    // this, the start rule is invoked. This call returns the context rule
    // to use in the visitor and walk.
    auto parser = gen::PyforelParser(&tokens);

    // Begin parsing from the `start` grammar rule.
    gen::PyforelParser::StartContext* root = parser.start();

    // Visit the parse tree.
    //
    // This last step traverses the parse tree to build the intermediate
    // representation using a custom visitor derived from the
    // ANTLR-generated visitor interface.
    auto translator = pyforel::Translator();
    auto translation = std::any_cast<std::string>(translator.visitStart(root));

    std::cout << "TRANSLATION: " << translation << "\n";
    return 0;
}
