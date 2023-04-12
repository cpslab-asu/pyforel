
// Generated from /home/andersonjwan/Projects/pyforel/build/antlr/grammars/PyforelParser.g4 by ANTLR 4.12.0


#include "PyforelParserVisitor.h"

#include "PyforelParser.h"


using namespace antlrcpp;
using namespace gen;

using namespace antlr4;

namespace {

struct PyforelParserStaticData final {
  PyforelParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PyforelParserStaticData(const PyforelParserStaticData&) = delete;
  PyforelParserStaticData(PyforelParserStaticData&&) = delete;
  PyforelParserStaticData& operator=(const PyforelParserStaticData&) = delete;
  PyforelParserStaticData& operator=(PyforelParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag pyforelparserParserOnceFlag;
PyforelParserStaticData *pyforelparserParserStaticData = nullptr;

void pyforelparserParserInitialize() {
  assert(pyforelparserParserStaticData == nullptr);
  auto staticData = std::make_unique<PyforelParserStaticData>(
    std::vector<std::string>{
      "start", "program", "statement", "simpleStatement", "functionCallStatement", 
      "argList", "compoundStatement", "ifStatement", "elifStatement", "elseStatement", 
      "clauseStatement", "functionDefinitionStatement", "paramList", "parameter", 
      "temporalStatement", "bounds", "freezeTimeStatement", "objectQualifierStatement", 
      "newScope"
    },
    std::vector<std::string>{
      "", "", "", "", "'if'", "'elif'", "'else'", "'not'", "'and'", "'or'", 
      "'fn'", "'eventually'", "'always'", "'next'", "'within'", "'with'", 
      "'keep'", "'upto'", "'release'", "'in'", "'from'", "'to'", "'true'", 
      "'false'", "'exists'", "'forall'", "'at'", "'@'", "'&'", "'''", "'*'", 
      "'|'", "'^'", "':'", "','", "'$'", "'.'", "'='", "'!'", "'`'", "'#'", 
      "'-'", "'%'", "'+'", "'\\u003F'", "'\"'", "';'", "'~'", "'_'", "'/'", 
      "'\\'", "'{'", "'}'", "'['", "']'", "'<'", "'>'", "'('", "')'", "", 
      "", "'inf'"
    },
    std::vector<std::string>{
      "", "Indent", "Dedent", "Newline", "If", "ElseIf", "Else", "Not", 
      "And", "Or", "Fn", "Eventually", "Always", "Next", "Within", "With", 
      "Keep", "Upto", "Release", "In", "From", "To", "True", "False", "Exists", 
      "Forall", "AtWord", "At", "Ampersand", "Apostrophe", "Asterick", "Bar", 
      "Caret", "Colon", "Comma", "DollarSign", "Dot", "Equal", "ExclamationMark", 
      "GraveAccent", "Hash", "Minus", "PercentSign", "Plus", "QuestionMark", 
      "QuotationMark", "Semicolon", "Tilde", "Underscore", "Slash", "Backslash", 
      "LeftBrace", "RightBrace", "LeftBracket", "RightBracket", "LeftChevron", 
      "RightChevron", "LeftParenthesis", "RightParenthesis", "BlockComment", 
      "LineComment", "Infinity", "Scalar", "Integer", "DecimalInteger", 
      "BinaryInteger", "OctalInteger", "HexInteger", "Floating", "PointFloat", 
      "ExponentFloat", "Identifier", "Whitespace"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,72,225,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,1,1,5,1,43,8,1,
  	10,1,12,1,46,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,55,8,2,10,2,12,2,58,
  	9,2,1,2,3,2,61,8,2,1,2,1,2,1,2,3,2,66,8,2,1,3,1,3,1,3,1,3,3,3,72,8,3,
  	1,4,1,4,1,4,3,4,77,8,4,1,4,1,4,1,5,1,5,1,5,1,5,3,5,85,8,5,1,6,1,6,1,6,
  	1,6,1,6,3,6,92,8,6,1,7,1,7,1,7,1,7,1,7,5,7,99,8,7,10,7,12,7,102,9,7,1,
  	7,3,7,105,8,7,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,3,10,123,8,10,1,10,1,10,1,10,1,10,1,10,1,10,5,10,131,8,
  	10,10,10,12,10,134,9,10,1,11,1,11,1,11,1,11,3,11,140,8,11,1,11,1,11,1,
  	11,1,11,1,12,1,12,1,12,1,12,1,12,3,12,151,8,12,1,13,1,13,1,13,3,13,156,
  	8,13,1,14,1,14,3,14,160,8,14,1,14,1,14,1,14,1,14,3,14,166,8,14,1,14,1,
  	14,1,14,1,14,3,14,172,8,14,1,14,1,14,3,14,176,8,14,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,194,
  	8,15,1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,
  	1,17,1,17,3,17,211,8,17,1,18,1,18,1,18,1,18,4,18,217,8,18,11,18,12,18,
  	218,1,18,1,18,3,18,223,8,18,1,18,0,1,20,19,0,2,4,6,8,10,12,14,16,18,20,
  	22,24,26,28,30,32,34,36,0,0,239,0,38,1,0,0,0,2,44,1,0,0,0,4,65,1,0,0,
  	0,6,71,1,0,0,0,8,73,1,0,0,0,10,84,1,0,0,0,12,91,1,0,0,0,14,93,1,0,0,0,
  	16,106,1,0,0,0,18,110,1,0,0,0,20,122,1,0,0,0,22,135,1,0,0,0,24,150,1,
  	0,0,0,26,152,1,0,0,0,28,175,1,0,0,0,30,193,1,0,0,0,32,195,1,0,0,0,34,
  	210,1,0,0,0,36,222,1,0,0,0,38,39,3,2,1,0,39,40,5,0,0,1,40,1,1,0,0,0,41,
  	43,3,4,2,0,42,41,1,0,0,0,43,46,1,0,0,0,44,42,1,0,0,0,44,45,1,0,0,0,45,
  	3,1,0,0,0,46,44,1,0,0,0,47,48,5,57,0,0,48,49,3,4,2,0,49,50,5,58,0,0,50,
  	66,1,0,0,0,51,56,3,6,3,0,52,53,5,46,0,0,53,55,3,6,3,0,54,52,1,0,0,0,55,
  	58,1,0,0,0,56,54,1,0,0,0,56,57,1,0,0,0,57,60,1,0,0,0,58,56,1,0,0,0,59,
  	61,5,46,0,0,60,59,1,0,0,0,60,61,1,0,0,0,61,62,1,0,0,0,62,63,5,3,0,0,63,
  	66,1,0,0,0,64,66,3,12,6,0,65,47,1,0,0,0,65,51,1,0,0,0,65,64,1,0,0,0,66,
  	5,1,0,0,0,67,72,3,8,4,0,68,72,5,22,0,0,69,72,5,23,0,0,70,72,5,71,0,0,
  	71,67,1,0,0,0,71,68,1,0,0,0,71,69,1,0,0,0,71,70,1,0,0,0,72,7,1,0,0,0,
  	73,74,5,71,0,0,74,76,5,57,0,0,75,77,3,10,5,0,76,75,1,0,0,0,76,77,1,0,
  	0,0,77,78,1,0,0,0,78,79,5,58,0,0,79,9,1,0,0,0,80,81,5,71,0,0,81,82,5,
  	34,0,0,82,85,3,10,5,0,83,85,5,71,0,0,84,80,1,0,0,0,84,83,1,0,0,0,85,11,
  	1,0,0,0,86,92,3,14,7,0,87,92,3,22,11,0,88,92,3,28,14,0,89,92,3,32,16,
  	0,90,92,3,34,17,0,91,86,1,0,0,0,91,87,1,0,0,0,91,88,1,0,0,0,91,89,1,0,
  	0,0,91,90,1,0,0,0,92,13,1,0,0,0,93,94,5,4,0,0,94,95,3,20,10,0,95,96,5,
  	33,0,0,96,100,3,36,18,0,97,99,3,16,8,0,98,97,1,0,0,0,99,102,1,0,0,0,100,
  	98,1,0,0,0,100,101,1,0,0,0,101,104,1,0,0,0,102,100,1,0,0,0,103,105,3,
  	18,9,0,104,103,1,0,0,0,104,105,1,0,0,0,105,15,1,0,0,0,106,107,5,5,0,0,
  	107,108,5,33,0,0,108,109,3,36,18,0,109,17,1,0,0,0,110,111,5,6,0,0,111,
  	112,5,33,0,0,112,113,3,36,18,0,113,19,1,0,0,0,114,115,6,10,-1,0,115,116,
  	5,57,0,0,116,117,3,20,10,0,117,118,5,58,0,0,118,123,1,0,0,0,119,120,5,
  	7,0,0,120,123,3,20,10,4,121,123,3,6,3,0,122,114,1,0,0,0,122,119,1,0,0,
  	0,122,121,1,0,0,0,123,132,1,0,0,0,124,125,10,3,0,0,125,126,5,8,0,0,126,
  	131,3,20,10,4,127,128,10,2,0,0,128,129,5,9,0,0,129,131,3,20,10,3,130,
  	124,1,0,0,0,130,127,1,0,0,0,131,134,1,0,0,0,132,130,1,0,0,0,132,133,1,
  	0,0,0,133,21,1,0,0,0,134,132,1,0,0,0,135,136,5,10,0,0,136,137,5,71,0,
  	0,137,139,5,57,0,0,138,140,3,24,12,0,139,138,1,0,0,0,139,140,1,0,0,0,
  	140,141,1,0,0,0,141,142,5,58,0,0,142,143,5,33,0,0,143,144,3,36,18,0,144,
  	23,1,0,0,0,145,146,3,26,13,0,146,147,5,34,0,0,147,148,3,24,12,0,148,151,
  	1,0,0,0,149,151,3,26,13,0,150,145,1,0,0,0,150,149,1,0,0,0,151,25,1,0,
  	0,0,152,155,5,71,0,0,153,154,5,33,0,0,154,156,5,71,0,0,155,153,1,0,0,
  	0,155,156,1,0,0,0,156,27,1,0,0,0,157,159,5,11,0,0,158,160,3,30,15,0,159,
  	158,1,0,0,0,159,160,1,0,0,0,160,161,1,0,0,0,161,162,5,33,0,0,162,176,
  	3,36,18,0,163,165,5,12,0,0,164,166,3,30,15,0,165,164,1,0,0,0,165,166,
  	1,0,0,0,166,167,1,0,0,0,167,168,5,33,0,0,168,176,3,36,18,0,169,171,5,
  	13,0,0,170,172,3,30,15,0,171,170,1,0,0,0,171,172,1,0,0,0,172,173,1,0,
  	0,0,173,174,5,33,0,0,174,176,3,36,18,0,175,157,1,0,0,0,175,163,1,0,0,
  	0,175,169,1,0,0,0,176,29,1,0,0,0,177,178,5,14,0,0,178,179,5,62,0,0,179,
  	180,5,17,0,0,180,194,5,62,0,0,181,182,5,14,0,0,182,183,5,62,0,0,183,184,
  	5,21,0,0,184,194,5,62,0,0,185,186,5,20,0,0,186,187,5,62,0,0,187,188,5,
  	17,0,0,188,194,5,62,0,0,189,190,5,20,0,0,190,191,5,62,0,0,191,192,5,21,
  	0,0,192,194,5,62,0,0,193,177,1,0,0,0,193,181,1,0,0,0,193,185,1,0,0,0,
  	193,189,1,0,0,0,194,31,1,0,0,0,195,196,5,26,0,0,196,197,5,71,0,0,197,
  	198,5,33,0,0,198,199,3,36,18,0,199,33,1,0,0,0,200,201,5,24,0,0,201,202,
  	3,10,5,0,202,203,5,33,0,0,203,204,3,36,18,0,204,211,1,0,0,0,205,206,5,
  	25,0,0,206,207,3,10,5,0,207,208,5,33,0,0,208,209,3,36,18,0,209,211,1,
  	0,0,0,210,200,1,0,0,0,210,205,1,0,0,0,211,35,1,0,0,0,212,223,3,6,3,0,
  	213,214,5,3,0,0,214,216,5,1,0,0,215,217,3,4,2,0,216,215,1,0,0,0,217,218,
  	1,0,0,0,218,216,1,0,0,0,218,219,1,0,0,0,219,220,1,0,0,0,220,221,5,2,0,
  	0,221,223,1,0,0,0,222,212,1,0,0,0,222,213,1,0,0,0,223,37,1,0,0,0,24,44,
  	56,60,65,71,76,84,91,100,104,122,130,132,139,150,155,159,165,171,175,
  	193,210,218,222
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  pyforelparserParserStaticData = staticData.release();
}

}

PyforelParser::PyforelParser(TokenStream *input) : PyforelParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PyforelParser::PyforelParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PyforelParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *pyforelparserParserStaticData->atn, pyforelparserParserStaticData->decisionToDFA, pyforelparserParserStaticData->sharedContextCache, options);
}

PyforelParser::~PyforelParser() {
  delete _interpreter;
}

const atn::ATN& PyforelParser::getATN() const {
  return *pyforelparserParserStaticData->atn;
}

std::string PyforelParser::getGrammarFileName() const {
  return "PyforelParser.g4";
}

const std::vector<std::string>& PyforelParser::getRuleNames() const {
  return pyforelparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& PyforelParser::getVocabulary() const {
  return pyforelparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PyforelParser::getSerializedATN() const {
  return pyforelparserParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

PyforelParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PyforelParser::ProgramContext* PyforelParser::StartContext::program() {
  return getRuleContext<PyforelParser::ProgramContext>(0);
}

tree::TerminalNode* PyforelParser::StartContext::EOF() {
  return getToken(PyforelParser::EOF, 0);
}


size_t PyforelParser::StartContext::getRuleIndex() const {
  return PyforelParser::RuleStart;
}


std::any PyforelParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::StartContext* PyforelParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, PyforelParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    program();
    setState(39);
    match(PyforelParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

PyforelParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<PyforelParser::StatementContext *> PyforelParser::ProgramContext::statement() {
  return getRuleContexts<PyforelParser::StatementContext>();
}

PyforelParser::StatementContext* PyforelParser::ProgramContext::statement(size_t i) {
  return getRuleContext<PyforelParser::StatementContext>(i);
}


size_t PyforelParser::ProgramContext::getRuleIndex() const {
  return PyforelParser::RuleProgram;
}


std::any PyforelParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::ProgramContext* PyforelParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, PyforelParser::RuleProgram);
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
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 144115188205894672) != 0) || _la == PyforelParser::Identifier) {
      setState(41);
      statement();
      setState(46);
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

//----------------- StatementContext ------------------------------------------------------------------

PyforelParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::StatementContext::LeftParenthesis() {
  return getToken(PyforelParser::LeftParenthesis, 0);
}

PyforelParser::StatementContext* PyforelParser::StatementContext::statement() {
  return getRuleContext<PyforelParser::StatementContext>(0);
}

tree::TerminalNode* PyforelParser::StatementContext::RightParenthesis() {
  return getToken(PyforelParser::RightParenthesis, 0);
}

std::vector<PyforelParser::SimpleStatementContext *> PyforelParser::StatementContext::simpleStatement() {
  return getRuleContexts<PyforelParser::SimpleStatementContext>();
}

PyforelParser::SimpleStatementContext* PyforelParser::StatementContext::simpleStatement(size_t i) {
  return getRuleContext<PyforelParser::SimpleStatementContext>(i);
}

tree::TerminalNode* PyforelParser::StatementContext::Newline() {
  return getToken(PyforelParser::Newline, 0);
}

std::vector<tree::TerminalNode *> PyforelParser::StatementContext::Semicolon() {
  return getTokens(PyforelParser::Semicolon);
}

tree::TerminalNode* PyforelParser::StatementContext::Semicolon(size_t i) {
  return getToken(PyforelParser::Semicolon, i);
}

PyforelParser::CompoundStatementContext* PyforelParser::StatementContext::compoundStatement() {
  return getRuleContext<PyforelParser::CompoundStatementContext>(0);
}


size_t PyforelParser::StatementContext::getRuleIndex() const {
  return PyforelParser::RuleStatement;
}


std::any PyforelParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::StatementContext* PyforelParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, PyforelParser::RuleStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(65);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PyforelParser::LeftParenthesis: {
        enterOuterAlt(_localctx, 1);
        setState(47);
        match(PyforelParser::LeftParenthesis);
        setState(48);
        statement();
        setState(49);
        match(PyforelParser::RightParenthesis);
        break;
      }

      case PyforelParser::True:
      case PyforelParser::False:
      case PyforelParser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(51);
        simpleStatement();
        setState(56);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(52);
            match(PyforelParser::Semicolon);
            setState(53);
            simpleStatement(); 
          }
          setState(58);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        }
        setState(60);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PyforelParser::Semicolon) {
          setState(59);
          match(PyforelParser::Semicolon);
        }
        setState(62);
        match(PyforelParser::Newline);
        break;
      }

      case PyforelParser::If:
      case PyforelParser::Fn:
      case PyforelParser::Eventually:
      case PyforelParser::Always:
      case PyforelParser::Next:
      case PyforelParser::Exists:
      case PyforelParser::Forall:
      case PyforelParser::AtWord: {
        enterOuterAlt(_localctx, 3);
        setState(64);
        compoundStatement();
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

//----------------- SimpleStatementContext ------------------------------------------------------------------

PyforelParser::SimpleStatementContext::SimpleStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PyforelParser::FunctionCallStatementContext* PyforelParser::SimpleStatementContext::functionCallStatement() {
  return getRuleContext<PyforelParser::FunctionCallStatementContext>(0);
}

tree::TerminalNode* PyforelParser::SimpleStatementContext::True() {
  return getToken(PyforelParser::True, 0);
}

tree::TerminalNode* PyforelParser::SimpleStatementContext::False() {
  return getToken(PyforelParser::False, 0);
}

tree::TerminalNode* PyforelParser::SimpleStatementContext::Identifier() {
  return getToken(PyforelParser::Identifier, 0);
}


size_t PyforelParser::SimpleStatementContext::getRuleIndex() const {
  return PyforelParser::RuleSimpleStatement;
}


std::any PyforelParser::SimpleStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitSimpleStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::SimpleStatementContext* PyforelParser::simpleStatement() {
  SimpleStatementContext *_localctx = _tracker.createInstance<SimpleStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, PyforelParser::RuleSimpleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(71);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(67);
      functionCallStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(68);
      match(PyforelParser::True);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(69);
      match(PyforelParser::False);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(70);
      match(PyforelParser::Identifier);
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

//----------------- FunctionCallStatementContext ------------------------------------------------------------------

PyforelParser::FunctionCallStatementContext::FunctionCallStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::FunctionCallStatementContext::Identifier() {
  return getToken(PyforelParser::Identifier, 0);
}

tree::TerminalNode* PyforelParser::FunctionCallStatementContext::LeftParenthesis() {
  return getToken(PyforelParser::LeftParenthesis, 0);
}

tree::TerminalNode* PyforelParser::FunctionCallStatementContext::RightParenthesis() {
  return getToken(PyforelParser::RightParenthesis, 0);
}

PyforelParser::ArgListContext* PyforelParser::FunctionCallStatementContext::argList() {
  return getRuleContext<PyforelParser::ArgListContext>(0);
}


size_t PyforelParser::FunctionCallStatementContext::getRuleIndex() const {
  return PyforelParser::RuleFunctionCallStatement;
}


std::any PyforelParser::FunctionCallStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitFunctionCallStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::FunctionCallStatementContext* PyforelParser::functionCallStatement() {
  FunctionCallStatementContext *_localctx = _tracker.createInstance<FunctionCallStatementContext>(_ctx, getState());
  enterRule(_localctx, 8, PyforelParser::RuleFunctionCallStatement);
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
    setState(73);
    match(PyforelParser::Identifier);
    setState(74);
    match(PyforelParser::LeftParenthesis);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PyforelParser::Identifier) {
      setState(75);
      argList();
    }
    setState(78);
    match(PyforelParser::RightParenthesis);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgListContext ------------------------------------------------------------------

PyforelParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::ArgListContext::Identifier() {
  return getToken(PyforelParser::Identifier, 0);
}

tree::TerminalNode* PyforelParser::ArgListContext::Comma() {
  return getToken(PyforelParser::Comma, 0);
}

PyforelParser::ArgListContext* PyforelParser::ArgListContext::argList() {
  return getRuleContext<PyforelParser::ArgListContext>(0);
}


size_t PyforelParser::ArgListContext::getRuleIndex() const {
  return PyforelParser::RuleArgList;
}


std::any PyforelParser::ArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitArgList(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::ArgListContext* PyforelParser::argList() {
  ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, getState());
  enterRule(_localctx, 10, PyforelParser::RuleArgList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(84);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(80);
      match(PyforelParser::Identifier);
      setState(81);
      match(PyforelParser::Comma);
      setState(82);
      argList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      match(PyforelParser::Identifier);
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

//----------------- CompoundStatementContext ------------------------------------------------------------------

PyforelParser::CompoundStatementContext::CompoundStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PyforelParser::IfStatementContext* PyforelParser::CompoundStatementContext::ifStatement() {
  return getRuleContext<PyforelParser::IfStatementContext>(0);
}

PyforelParser::FunctionDefinitionStatementContext* PyforelParser::CompoundStatementContext::functionDefinitionStatement() {
  return getRuleContext<PyforelParser::FunctionDefinitionStatementContext>(0);
}

PyforelParser::TemporalStatementContext* PyforelParser::CompoundStatementContext::temporalStatement() {
  return getRuleContext<PyforelParser::TemporalStatementContext>(0);
}

PyforelParser::FreezeTimeStatementContext* PyforelParser::CompoundStatementContext::freezeTimeStatement() {
  return getRuleContext<PyforelParser::FreezeTimeStatementContext>(0);
}

PyforelParser::ObjectQualifierStatementContext* PyforelParser::CompoundStatementContext::objectQualifierStatement() {
  return getRuleContext<PyforelParser::ObjectQualifierStatementContext>(0);
}


size_t PyforelParser::CompoundStatementContext::getRuleIndex() const {
  return PyforelParser::RuleCompoundStatement;
}


std::any PyforelParser::CompoundStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitCompoundStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::CompoundStatementContext* PyforelParser::compoundStatement() {
  CompoundStatementContext *_localctx = _tracker.createInstance<CompoundStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, PyforelParser::RuleCompoundStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PyforelParser::If: {
        enterOuterAlt(_localctx, 1);
        setState(86);
        ifStatement();
        break;
      }

      case PyforelParser::Fn: {
        enterOuterAlt(_localctx, 2);
        setState(87);
        functionDefinitionStatement();
        break;
      }

      case PyforelParser::Eventually:
      case PyforelParser::Always:
      case PyforelParser::Next: {
        enterOuterAlt(_localctx, 3);
        setState(88);
        temporalStatement();
        break;
      }

      case PyforelParser::AtWord: {
        enterOuterAlt(_localctx, 4);
        setState(89);
        freezeTimeStatement();
        break;
      }

      case PyforelParser::Exists:
      case PyforelParser::Forall: {
        enterOuterAlt(_localctx, 5);
        setState(90);
        objectQualifierStatement();
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

//----------------- IfStatementContext ------------------------------------------------------------------

PyforelParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::IfStatementContext::If() {
  return getToken(PyforelParser::If, 0);
}

PyforelParser::ClauseStatementContext* PyforelParser::IfStatementContext::clauseStatement() {
  return getRuleContext<PyforelParser::ClauseStatementContext>(0);
}

tree::TerminalNode* PyforelParser::IfStatementContext::Colon() {
  return getToken(PyforelParser::Colon, 0);
}

PyforelParser::NewScopeContext* PyforelParser::IfStatementContext::newScope() {
  return getRuleContext<PyforelParser::NewScopeContext>(0);
}

std::vector<PyforelParser::ElifStatementContext *> PyforelParser::IfStatementContext::elifStatement() {
  return getRuleContexts<PyforelParser::ElifStatementContext>();
}

PyforelParser::ElifStatementContext* PyforelParser::IfStatementContext::elifStatement(size_t i) {
  return getRuleContext<PyforelParser::ElifStatementContext>(i);
}

PyforelParser::ElseStatementContext* PyforelParser::IfStatementContext::elseStatement() {
  return getRuleContext<PyforelParser::ElseStatementContext>(0);
}


size_t PyforelParser::IfStatementContext::getRuleIndex() const {
  return PyforelParser::RuleIfStatement;
}


std::any PyforelParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::IfStatementContext* PyforelParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, PyforelParser::RuleIfStatement);
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
    setState(93);
    match(PyforelParser::If);
    setState(94);
    clauseStatement(0);
    setState(95);
    match(PyforelParser::Colon);
    setState(96);
    newScope();
    setState(100);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == PyforelParser::ElseIf) {
      setState(97);
      elifStatement();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(104);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PyforelParser::Else) {
      setState(103);
      elseStatement();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElifStatementContext ------------------------------------------------------------------

PyforelParser::ElifStatementContext::ElifStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::ElifStatementContext::ElseIf() {
  return getToken(PyforelParser::ElseIf, 0);
}

tree::TerminalNode* PyforelParser::ElifStatementContext::Colon() {
  return getToken(PyforelParser::Colon, 0);
}

PyforelParser::NewScopeContext* PyforelParser::ElifStatementContext::newScope() {
  return getRuleContext<PyforelParser::NewScopeContext>(0);
}


size_t PyforelParser::ElifStatementContext::getRuleIndex() const {
  return PyforelParser::RuleElifStatement;
}


std::any PyforelParser::ElifStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitElifStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::ElifStatementContext* PyforelParser::elifStatement() {
  ElifStatementContext *_localctx = _tracker.createInstance<ElifStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, PyforelParser::RuleElifStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(PyforelParser::ElseIf);
    setState(107);
    match(PyforelParser::Colon);
    setState(108);
    newScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatementContext ------------------------------------------------------------------

PyforelParser::ElseStatementContext::ElseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::ElseStatementContext::Else() {
  return getToken(PyforelParser::Else, 0);
}

tree::TerminalNode* PyforelParser::ElseStatementContext::Colon() {
  return getToken(PyforelParser::Colon, 0);
}

PyforelParser::NewScopeContext* PyforelParser::ElseStatementContext::newScope() {
  return getRuleContext<PyforelParser::NewScopeContext>(0);
}


size_t PyforelParser::ElseStatementContext::getRuleIndex() const {
  return PyforelParser::RuleElseStatement;
}


std::any PyforelParser::ElseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitElseStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::ElseStatementContext* PyforelParser::elseStatement() {
  ElseStatementContext *_localctx = _tracker.createInstance<ElseStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, PyforelParser::RuleElseStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(PyforelParser::Else);
    setState(111);
    match(PyforelParser::Colon);
    setState(112);
    newScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClauseStatementContext ------------------------------------------------------------------

PyforelParser::ClauseStatementContext::ClauseStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::ClauseStatementContext::LeftParenthesis() {
  return getToken(PyforelParser::LeftParenthesis, 0);
}

std::vector<PyforelParser::ClauseStatementContext *> PyforelParser::ClauseStatementContext::clauseStatement() {
  return getRuleContexts<PyforelParser::ClauseStatementContext>();
}

PyforelParser::ClauseStatementContext* PyforelParser::ClauseStatementContext::clauseStatement(size_t i) {
  return getRuleContext<PyforelParser::ClauseStatementContext>(i);
}

tree::TerminalNode* PyforelParser::ClauseStatementContext::RightParenthesis() {
  return getToken(PyforelParser::RightParenthesis, 0);
}

tree::TerminalNode* PyforelParser::ClauseStatementContext::Not() {
  return getToken(PyforelParser::Not, 0);
}

PyforelParser::SimpleStatementContext* PyforelParser::ClauseStatementContext::simpleStatement() {
  return getRuleContext<PyforelParser::SimpleStatementContext>(0);
}

tree::TerminalNode* PyforelParser::ClauseStatementContext::And() {
  return getToken(PyforelParser::And, 0);
}

tree::TerminalNode* PyforelParser::ClauseStatementContext::Or() {
  return getToken(PyforelParser::Or, 0);
}


size_t PyforelParser::ClauseStatementContext::getRuleIndex() const {
  return PyforelParser::RuleClauseStatement;
}


std::any PyforelParser::ClauseStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitClauseStatement(this);
  else
    return visitor->visitChildren(this);
}


PyforelParser::ClauseStatementContext* PyforelParser::clauseStatement() {
   return clauseStatement(0);
}

PyforelParser::ClauseStatementContext* PyforelParser::clauseStatement(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PyforelParser::ClauseStatementContext *_localctx = _tracker.createInstance<ClauseStatementContext>(_ctx, parentState);
  PyforelParser::ClauseStatementContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, PyforelParser::RuleClauseStatement, precedence);

    

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
    setState(122);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PyforelParser::LeftParenthesis: {
        setState(115);
        match(PyforelParser::LeftParenthesis);
        setState(116);
        clauseStatement(0);
        setState(117);
        match(PyforelParser::RightParenthesis);
        break;
      }

      case PyforelParser::Not: {
        setState(119);
        match(PyforelParser::Not);
        setState(120);
        clauseStatement(4);
        break;
      }

      case PyforelParser::True:
      case PyforelParser::False:
      case PyforelParser::Identifier: {
        setState(121);
        simpleStatement();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(132);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(130);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ClauseStatementContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleClauseStatement);
          setState(124);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(125);
          match(PyforelParser::And);
          setState(126);
          clauseStatement(4);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ClauseStatementContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleClauseStatement);
          setState(127);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(128);
          match(PyforelParser::Or);
          setState(129);
          clauseStatement(3);
          break;
        }

        default:
          break;
        } 
      }
      setState(134);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- FunctionDefinitionStatementContext ------------------------------------------------------------------

PyforelParser::FunctionDefinitionStatementContext::FunctionDefinitionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::FunctionDefinitionStatementContext::Fn() {
  return getToken(PyforelParser::Fn, 0);
}

tree::TerminalNode* PyforelParser::FunctionDefinitionStatementContext::Identifier() {
  return getToken(PyforelParser::Identifier, 0);
}

tree::TerminalNode* PyforelParser::FunctionDefinitionStatementContext::LeftParenthesis() {
  return getToken(PyforelParser::LeftParenthesis, 0);
}

tree::TerminalNode* PyforelParser::FunctionDefinitionStatementContext::RightParenthesis() {
  return getToken(PyforelParser::RightParenthesis, 0);
}

tree::TerminalNode* PyforelParser::FunctionDefinitionStatementContext::Colon() {
  return getToken(PyforelParser::Colon, 0);
}

PyforelParser::NewScopeContext* PyforelParser::FunctionDefinitionStatementContext::newScope() {
  return getRuleContext<PyforelParser::NewScopeContext>(0);
}

PyforelParser::ParamListContext* PyforelParser::FunctionDefinitionStatementContext::paramList() {
  return getRuleContext<PyforelParser::ParamListContext>(0);
}


size_t PyforelParser::FunctionDefinitionStatementContext::getRuleIndex() const {
  return PyforelParser::RuleFunctionDefinitionStatement;
}


std::any PyforelParser::FunctionDefinitionStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitFunctionDefinitionStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::FunctionDefinitionStatementContext* PyforelParser::functionDefinitionStatement() {
  FunctionDefinitionStatementContext *_localctx = _tracker.createInstance<FunctionDefinitionStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, PyforelParser::RuleFunctionDefinitionStatement);
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
    setState(135);
    match(PyforelParser::Fn);
    setState(136);
    match(PyforelParser::Identifier);
    setState(137);
    match(PyforelParser::LeftParenthesis);
    setState(139);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PyforelParser::Identifier) {
      setState(138);
      paramList();
    }
    setState(141);
    match(PyforelParser::RightParenthesis);
    setState(142);
    match(PyforelParser::Colon);
    setState(143);
    newScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

PyforelParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PyforelParser::ParameterContext* PyforelParser::ParamListContext::parameter() {
  return getRuleContext<PyforelParser::ParameterContext>(0);
}

tree::TerminalNode* PyforelParser::ParamListContext::Comma() {
  return getToken(PyforelParser::Comma, 0);
}

PyforelParser::ParamListContext* PyforelParser::ParamListContext::paramList() {
  return getRuleContext<PyforelParser::ParamListContext>(0);
}


size_t PyforelParser::ParamListContext::getRuleIndex() const {
  return PyforelParser::RuleParamList;
}


std::any PyforelParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::ParamListContext* PyforelParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 24, PyforelParser::RuleParamList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(145);
      parameter();
      setState(146);
      match(PyforelParser::Comma);
      setState(147);
      paramList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(149);
      parameter();
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

//----------------- ParameterContext ------------------------------------------------------------------

PyforelParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> PyforelParser::ParameterContext::Identifier() {
  return getTokens(PyforelParser::Identifier);
}

tree::TerminalNode* PyforelParser::ParameterContext::Identifier(size_t i) {
  return getToken(PyforelParser::Identifier, i);
}

tree::TerminalNode* PyforelParser::ParameterContext::Colon() {
  return getToken(PyforelParser::Colon, 0);
}


size_t PyforelParser::ParameterContext::getRuleIndex() const {
  return PyforelParser::RuleParameter;
}


std::any PyforelParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::ParameterContext* PyforelParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 26, PyforelParser::RuleParameter);
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
    setState(152);
    match(PyforelParser::Identifier);
    setState(155);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == PyforelParser::Colon) {
      setState(153);
      match(PyforelParser::Colon);
      setState(154);
      match(PyforelParser::Identifier);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TemporalStatementContext ------------------------------------------------------------------

PyforelParser::TemporalStatementContext::TemporalStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::TemporalStatementContext::Eventually() {
  return getToken(PyforelParser::Eventually, 0);
}

tree::TerminalNode* PyforelParser::TemporalStatementContext::Colon() {
  return getToken(PyforelParser::Colon, 0);
}

PyforelParser::NewScopeContext* PyforelParser::TemporalStatementContext::newScope() {
  return getRuleContext<PyforelParser::NewScopeContext>(0);
}

PyforelParser::BoundsContext* PyforelParser::TemporalStatementContext::bounds() {
  return getRuleContext<PyforelParser::BoundsContext>(0);
}

tree::TerminalNode* PyforelParser::TemporalStatementContext::Always() {
  return getToken(PyforelParser::Always, 0);
}

tree::TerminalNode* PyforelParser::TemporalStatementContext::Next() {
  return getToken(PyforelParser::Next, 0);
}


size_t PyforelParser::TemporalStatementContext::getRuleIndex() const {
  return PyforelParser::RuleTemporalStatement;
}


std::any PyforelParser::TemporalStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitTemporalStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::TemporalStatementContext* PyforelParser::temporalStatement() {
  TemporalStatementContext *_localctx = _tracker.createInstance<TemporalStatementContext>(_ctx, getState());
  enterRule(_localctx, 28, PyforelParser::RuleTemporalStatement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(175);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PyforelParser::Eventually: {
        enterOuterAlt(_localctx, 1);
        setState(157);
        match(PyforelParser::Eventually);
        setState(159);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PyforelParser::Within

        || _la == PyforelParser::From) {
          setState(158);
          bounds();
        }
        setState(161);
        match(PyforelParser::Colon);
        setState(162);
        newScope();
        break;
      }

      case PyforelParser::Always: {
        enterOuterAlt(_localctx, 2);
        setState(163);
        match(PyforelParser::Always);
        setState(165);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PyforelParser::Within

        || _la == PyforelParser::From) {
          setState(164);
          bounds();
        }
        setState(167);
        match(PyforelParser::Colon);
        setState(168);
        newScope();
        break;
      }

      case PyforelParser::Next: {
        enterOuterAlt(_localctx, 3);
        setState(169);
        match(PyforelParser::Next);
        setState(171);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == PyforelParser::Within

        || _la == PyforelParser::From) {
          setState(170);
          bounds();
        }
        setState(173);
        match(PyforelParser::Colon);
        setState(174);
        newScope();
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

//----------------- BoundsContext ------------------------------------------------------------------

PyforelParser::BoundsContext::BoundsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::BoundsContext::Within() {
  return getToken(PyforelParser::Within, 0);
}

std::vector<tree::TerminalNode *> PyforelParser::BoundsContext::Scalar() {
  return getTokens(PyforelParser::Scalar);
}

tree::TerminalNode* PyforelParser::BoundsContext::Scalar(size_t i) {
  return getToken(PyforelParser::Scalar, i);
}

tree::TerminalNode* PyforelParser::BoundsContext::Upto() {
  return getToken(PyforelParser::Upto, 0);
}

tree::TerminalNode* PyforelParser::BoundsContext::To() {
  return getToken(PyforelParser::To, 0);
}

tree::TerminalNode* PyforelParser::BoundsContext::From() {
  return getToken(PyforelParser::From, 0);
}


size_t PyforelParser::BoundsContext::getRuleIndex() const {
  return PyforelParser::RuleBounds;
}


std::any PyforelParser::BoundsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitBounds(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::BoundsContext* PyforelParser::bounds() {
  BoundsContext *_localctx = _tracker.createInstance<BoundsContext>(_ctx, getState());
  enterRule(_localctx, 30, PyforelParser::RuleBounds);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(193);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(177);
      match(PyforelParser::Within);
      setState(178);
      match(PyforelParser::Scalar);
      setState(179);
      match(PyforelParser::Upto);
      setState(180);
      match(PyforelParser::Scalar);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(181);
      match(PyforelParser::Within);
      setState(182);
      match(PyforelParser::Scalar);
      setState(183);
      match(PyforelParser::To);
      setState(184);
      match(PyforelParser::Scalar);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(185);
      match(PyforelParser::From);
      setState(186);
      match(PyforelParser::Scalar);
      setState(187);
      match(PyforelParser::Upto);
      setState(188);
      match(PyforelParser::Scalar);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(189);
      match(PyforelParser::From);
      setState(190);
      match(PyforelParser::Scalar);
      setState(191);
      match(PyforelParser::To);
      setState(192);
      match(PyforelParser::Scalar);
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

//----------------- FreezeTimeStatementContext ------------------------------------------------------------------

PyforelParser::FreezeTimeStatementContext::FreezeTimeStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::FreezeTimeStatementContext::AtWord() {
  return getToken(PyforelParser::AtWord, 0);
}

tree::TerminalNode* PyforelParser::FreezeTimeStatementContext::Identifier() {
  return getToken(PyforelParser::Identifier, 0);
}

tree::TerminalNode* PyforelParser::FreezeTimeStatementContext::Colon() {
  return getToken(PyforelParser::Colon, 0);
}

PyforelParser::NewScopeContext* PyforelParser::FreezeTimeStatementContext::newScope() {
  return getRuleContext<PyforelParser::NewScopeContext>(0);
}


size_t PyforelParser::FreezeTimeStatementContext::getRuleIndex() const {
  return PyforelParser::RuleFreezeTimeStatement;
}


std::any PyforelParser::FreezeTimeStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitFreezeTimeStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::FreezeTimeStatementContext* PyforelParser::freezeTimeStatement() {
  FreezeTimeStatementContext *_localctx = _tracker.createInstance<FreezeTimeStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, PyforelParser::RuleFreezeTimeStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    match(PyforelParser::AtWord);
    setState(196);
    match(PyforelParser::Identifier);
    setState(197);
    match(PyforelParser::Colon);
    setState(198);
    newScope();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectQualifierStatementContext ------------------------------------------------------------------

PyforelParser::ObjectQualifierStatementContext::ObjectQualifierStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* PyforelParser::ObjectQualifierStatementContext::Exists() {
  return getToken(PyforelParser::Exists, 0);
}

PyforelParser::ArgListContext* PyforelParser::ObjectQualifierStatementContext::argList() {
  return getRuleContext<PyforelParser::ArgListContext>(0);
}

tree::TerminalNode* PyforelParser::ObjectQualifierStatementContext::Colon() {
  return getToken(PyforelParser::Colon, 0);
}

PyforelParser::NewScopeContext* PyforelParser::ObjectQualifierStatementContext::newScope() {
  return getRuleContext<PyforelParser::NewScopeContext>(0);
}

tree::TerminalNode* PyforelParser::ObjectQualifierStatementContext::Forall() {
  return getToken(PyforelParser::Forall, 0);
}


size_t PyforelParser::ObjectQualifierStatementContext::getRuleIndex() const {
  return PyforelParser::RuleObjectQualifierStatement;
}


std::any PyforelParser::ObjectQualifierStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitObjectQualifierStatement(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::ObjectQualifierStatementContext* PyforelParser::objectQualifierStatement() {
  ObjectQualifierStatementContext *_localctx = _tracker.createInstance<ObjectQualifierStatementContext>(_ctx, getState());
  enterRule(_localctx, 34, PyforelParser::RuleObjectQualifierStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(210);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PyforelParser::Exists: {
        enterOuterAlt(_localctx, 1);
        setState(200);
        match(PyforelParser::Exists);
        setState(201);
        argList();
        setState(202);
        match(PyforelParser::Colon);
        setState(203);
        newScope();
        break;
      }

      case PyforelParser::Forall: {
        enterOuterAlt(_localctx, 2);
        setState(205);
        match(PyforelParser::Forall);
        setState(206);
        argList();
        setState(207);
        match(PyforelParser::Colon);
        setState(208);
        newScope();
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

//----------------- NewScopeContext ------------------------------------------------------------------

PyforelParser::NewScopeContext::NewScopeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

PyforelParser::SimpleStatementContext* PyforelParser::NewScopeContext::simpleStatement() {
  return getRuleContext<PyforelParser::SimpleStatementContext>(0);
}

tree::TerminalNode* PyforelParser::NewScopeContext::Newline() {
  return getToken(PyforelParser::Newline, 0);
}

tree::TerminalNode* PyforelParser::NewScopeContext::Indent() {
  return getToken(PyforelParser::Indent, 0);
}

tree::TerminalNode* PyforelParser::NewScopeContext::Dedent() {
  return getToken(PyforelParser::Dedent, 0);
}

std::vector<PyforelParser::StatementContext *> PyforelParser::NewScopeContext::statement() {
  return getRuleContexts<PyforelParser::StatementContext>();
}

PyforelParser::StatementContext* PyforelParser::NewScopeContext::statement(size_t i) {
  return getRuleContext<PyforelParser::StatementContext>(i);
}


size_t PyforelParser::NewScopeContext::getRuleIndex() const {
  return PyforelParser::RuleNewScope;
}


std::any PyforelParser::NewScopeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PyforelParserVisitor*>(visitor))
    return parserVisitor->visitNewScope(this);
  else
    return visitor->visitChildren(this);
}

PyforelParser::NewScopeContext* PyforelParser::newScope() {
  NewScopeContext *_localctx = _tracker.createInstance<NewScopeContext>(_ctx, getState());
  enterRule(_localctx, 36, PyforelParser::RuleNewScope);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(222);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PyforelParser::True:
      case PyforelParser::False:
      case PyforelParser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(212);
        simpleStatement();
        break;
      }

      case PyforelParser::Newline: {
        enterOuterAlt(_localctx, 2);
        setState(213);
        match(PyforelParser::Newline);
        setState(214);
        match(PyforelParser::Indent);
        setState(216); 
        _errHandler->sync(this);
        _la = _input->LA(1);
        do {
          setState(215);
          statement();
          setState(218); 
          _errHandler->sync(this);
          _la = _input->LA(1);
        } while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 144115188205894672) != 0) || _la == PyforelParser::Identifier);
        setState(220);
        match(PyforelParser::Dedent);
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

bool PyforelParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 10: return clauseStatementSempred(antlrcpp::downCast<ClauseStatementContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PyforelParser::clauseStatementSempred(ClauseStatementContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void PyforelParser::initialize() {
  ::antlr4::internal::call_once(pyforelparserParserOnceFlag, pyforelparserParserInitialize);
}
