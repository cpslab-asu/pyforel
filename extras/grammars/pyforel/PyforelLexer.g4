lexer grammar PyforelLexer;

import CommonLexer;

/// The custom set of tokens used to control the balance of indentation and
/// dedentation, accurately.
tokens { Indent, Dedent }

/// The `PyforelLexer` needs to include the `PyforelParser` to access the
/// token types directly.
@lexer::header {
  #include "PyforelParser.h"
} 

/// Within this section, additional definitions for the `PyforelLexer` are
/// provided. These are helper functions to manage the indentation level
/// and count, accordingly.
///
/// The indentation/dedentation management logic is sourced from a pre-existing
/// ANTLR implementation of the Python grammar and can be found below:
///
/// https://github.com/antlr/grammars-v4/blob/master/python/python3-cpp/Python3.g4#L36-L143
@lexer::members {
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
}

/// The token definition for a newline.
///
/// This definition used embedded actions from ANTLR to push/pop the indentation
/// stack accordingly.
///
/// The indentation/dedentation management logic is sourced from a pre-existing
/// ANTLR implementation of the Python grammar and can be found below:
///
/// https://github.com/antlr/grammars-v4/blob/master/python/python3-cpp/Python3.g4#L347-L395
Newline
    : ( {atStartOfInput()}?   Whitespace
        | ( '\r'? '\n' | '\r' | '\f' ) Whitespace?
        )
        {
            {	 
                std::string newLine, spaces;
                std::string text = getText();
                for(char c : text)
                    {
                        if ((c == '\r') || (c == '\n') || (c == '\f'))
                            newLine.push_back(c);
                        else
                            spaces.push_back(c);
                    }


                // Strip newlines inside open clauses except if we are near EOF. We keep Newlines near EOF to
                // satisfy the final newline needed by the single_put rule used by the REPL.
                int next = _input->LA(1);
                int nextnext = _input->LA(2);
                if (m_opened > 0 || (nextnext != -1 && (next == '\r' || next == '\n' || next == '\f' || next == '#'))) {
                    // If we're inside a list or on a blank line, ignore all indents, 
                    // dedents and line breaks.
                    skip();
                }
                else {
                    emit(commonToken(Newline, newLine));
                    int indent = getIndentationCount(spaces);
                    int previous = m_indents.empty() ? 0 : m_indents.top();
                    if (indent == previous) {
                        // skip indents of the same size as the present indent-size
                        skip();
                    }
                    else if (indent > previous) {
                        m_indents.push(indent);
                        emit(commonToken(PyforelParser::Indent, spaces));
                    }
                    else {
                        // Possibly emit more than 1 Dedent token.
                        while(!m_indents.empty() && m_indents.top() > indent) {
                            emit(createDedent());
                            m_indents.pop();
                        }
                    }
                }
            }
        }
    ;

If : 'if' ;
ElseIf : 'elif' ;
Else : 'else' ;
Not : 'not' ;
And : 'and' ;
Or : 'or' ;
Fn : 'fn' ;
Eventually : 'eventually' ;
Always : 'always' ;
Next : 'next' ;
Within : 'within' ;
With : 'with';
Keep: 'keep' ;
Upto : 'upto' ;
Release : 'release' ;
In : 'in' ;
From : 'from' ;
To : 'to' ;
True : 'true' ;
False : 'false' ;
Exists : 'exists' ;
Forall : 'forall' ;
AtWord : 'at';
