
  #include "PyforelParser.h"


// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PyforelLexer.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"


namespace gen {


class  PyforelLexer : public antlr4::Lexer {
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

  explicit PyforelLexer(antlr4::CharStream *input);

  ~PyforelLexer() override;


    private:
    // A queue where extra tokens are pushed on (see the Newline lexer rule).
    std::vector<std::unique_ptr<antlr4::Token>> m_tokens;
    // The stack that keeps track of the indentation level.
    std::stack<int> m_indents;
    // The amount of opened braces, brackets and parenthesis.
    int m_opened = 0;
    // The most recently produced token.
    std::unique_ptr<antlr4::Token> m_pLastToken = nullptr;
    
    public:
    virtual void emit(std::unique_ptr<antlr4::Token> newToken) override {
      m_tokens.push_back(cloneToken(newToken));
      setToken(std::move(newToken));
    }

    std::unique_ptr<antlr4::Token> nextToken() override {
      // Check if the end-of-file is ahead and there are still some Dedents expected.
      if (_input->LA(1) == EOF && !m_indents.empty()) {
        // Remove any trailing EOF tokens from our buffer.
        for (int i = m_tokens.size() - 1; i >= 0; i--) {
          if (m_tokens[i]->getType() == EOF) {
            m_tokens.erase(m_tokens.begin() + i);
          }
        }

        // First emit an extra line break that serves as the end of the statement.
        emit(commonToken(PyforelParser::Newline, "\n"));

        // Now emit as much Dedent tokens as needed.
        while (!m_indents.empty()) {
          emit(createDedent());
          m_indents.pop();
        }

        // Put the EOF back on the token stream.
        emit(commonToken(EOF, "<EOF>"));
      }

      std::unique_ptr<antlr4::Token> next = Lexer::nextToken();

      if (next->getChannel() == antlr4::Token::DEFAULT_CHANNEL) {
        // Keep track of the last token on the default channel.
        m_pLastToken = cloneToken(next);
      }

      if (!m_tokens.empty())
      {
        next = std::move(*m_tokens.begin());
        m_tokens.erase(m_tokens.begin());
      }

      return next;
    }

    private:
    std::unique_ptr<antlr4::Token> createDedent() {
      std::unique_ptr<antlr4::CommonToken> dedent = commonToken(PyforelParser::Dedent, "");
      return dedent;
    }

    std::unique_ptr<antlr4::CommonToken> commonToken(size_t type, const std::string& text) {
      int stop = getCharIndex() - 1;
      int start = text.empty() ? stop : stop - text.size() + 1;
      return _factory->create({ this, _input }, type, text, DEFAULT_TOKEN_CHANNEL, start, stop, m_pLastToken ? m_pLastToken->getLine() : 0, m_pLastToken ? m_pLastToken->getCharPositionInLine() : 0);
    }

    std::unique_ptr<antlr4::CommonToken> cloneToken(const std::unique_ptr<antlr4::Token>& source) {
        return _factory->create({ this, _input }, source->getType(), source->getText(), source->getChannel(), source->getStartIndex(), source->getStopIndex(), source->getLine(), source->getCharPositionInLine());
    }


    // Calculates the indentation of the provided spaces, taking the
    // following rules into account:
    //
    // "Tabs are replaced (from left to right) by one to eight spaces
    //  such that the total number of characters up to and including
    //  the replacement is a multiple of eight [...]"
    //
    //  -- https://docs.python.org/3.1/reference/lexical_analysis.html#indentation
    static int getIndentationCount(const std::string& spaces) {
      int count = 0;
      for (char ch : spaces) {
        switch (ch) {
          case '\t':
            count += 8 - (count % 8);
            break;
          default:
            // A normal space char.
            count++;
        }
      }

      return count;
    }

    bool atStartOfInput() {
      return getCharPositionInLine() == 0 && getLine() == 1;
    }


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex, size_t actionIndex) override;

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.
  void NewlineAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool NewlineSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);

};

}  // namespace gen
