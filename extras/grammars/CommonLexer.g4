/// A lexical grammar to define the set of universally common tokens used in many
/// formal languages.
///
/// Please, feel free to add anything that is not already here. However, do keep
/// in mind that these should be universal tokens (i.e., if your token definition
/// has a specific application, then it should probably be defined in a separate
/// and closer to the application grammar file).
///
/// In addition, if importing this grammar for use, and your application requires
/// more semantically meaningful names, please rename as shown in the following
/// example below:
///
/// # Renaming Token Definitions
///
/// ```antlr4
/// // CommonLexer.g4
/// Slash : '/' ; * lexer rule we want to re-name
///
/// // CustomGrammar.g4
/// Divide : Slash ; // re-naming of import lexer rule
/// ```
///
/// # Skipping Token Definitions
///
/// Also, if you prefer to explicitly ignore and not generate tokens for specific
/// literal constructs, you can do the following:
///
/// ```antlr4
/// // CommonLexer.g4
/// At : '@' ; // token we want to not generate/capture
/// Star : '*' ; // another token we want to not generate/capture
///
/// // CustomGrammar.g4
/// Skip: (At | Star) -> skip ; // send tokens to the `skip` channel
/// ```
lexer grammar CommonLexer;

// Generic, Single Character Tokens
//
// In most cases, these definitions constitute single key-press capable
// captures that are not inherently tied to any particular domain.
At : '@' ;
Ampersand : '&' ;
Apostrophe : '\'';
Asterick : '*' ;
Bar : '|' ;
Caret : '^' ;
Colon : ':' ;
Comma : ',' ;
DollarSign : '$' ;
Dot : '.' ;
Equal : '=' ;
ExclamationMark : '!' ;
GraveAccent : '`' ;
Hash : '#' ;
Minus : '-' ;
PercentSign : '%' ;
Plus : '+' ;
QuestionMark : '?' ;
QuotationMark : '"' ;
Semicolon : ';' ;
Tilde : '~' ;
Underscore : '_' ;
Slash : '/' ;
Backslash : '\\' ;

// Braces, Brackets, Chevrons, and Parentheses Tokens
//
// Loosely speaking, anything that should be "balanced" or has an duality in its
// symbol representation should be defined here.
LeftBrace : '{' ;
RightBrace : '}' ;

LeftBracket : '[' ;
RightBracket : ']' ;

LeftChevron : '<' ;
RightChevron : '>' ;

LeftParenthesis : '(' ;
RightParenthesis : ')' ;

// Line Comments and Block Comment Tokens
//
// The default block and line comments follow the traditional C-style formats for
// simplicity and commonality.
//
// By default, all comments are skipped using the skip directive.
BlockComment : '/*' .*? '*/' -> skip ;
LineComment : '//' .*? '\r'? '\n' -> skip ;

// Infinity Token
//
// This is a symbolic representation of the infinity value.
//
// Examples: `inf`.
Infinity : 'inf' ;

// Scalars Tokens
//
// This includes a complex set of scalar-based tokens including integers,
// floating-point, scientific notation, hexadecimal, etc.
//
// The lexer rules for these were inspired from the C++ and Python grammars which
// can be viewed here:
// https://github.com/antlr/grammars-v4
Scalar : Integer
    | Floating
    ;

/// Integer numerals.
///
/// This includes: (i) decimal-based, (ii) binary-based, (iii) octal-based, and
/// (iv) hexadecimal-based.
Integer : DecimalInteger
    | BinaryInteger
    | OctalInteger
    | HexInteger
    ;

/// Decimal (base-10) numerals.
///
/// Leading zeroes are not permitted as this will conflict with non-base-10 rules
/// specified below (e.g., 0x101).
///
/// Examples: `10`, `12341`, `19`, `0000000`
DecimalInteger : NONZERODIGIT (DIGIT)*
    | '0'+
    ;

/// Binary (base-2) numerals.
///
/// Examples: `0b0101`, `0b1111`, `0B1`
BinaryInteger : '0' [bB] BINDIGIT+ ;

/// Octal (base-8) numerals.
///
/// Examples: `0o1`, `0o1234567`, `0O23`
OctalInteger : '0' [oO] OCTALDIGIT+ ;

/// Hexadecimal (base-16) numerals.
///
/// Examples: `0x12`, `0xFFFF`, `0XAFB123`
HexInteger : '0' [xX] HEXDIGIT+ ;

/// Floating-point numerals.
///
/// This includes: (i) point-based and (ii) exponent-based.
Floating : PointFloat
    | ExponentFloat
    ;

/// Point-float numerals.
///
/// Examples: `123.0101`, `.1232`, `1234.`
PointFloat : (DIGIT+)? FRACTION
    | DIGIT+ '.'
    ;

/// "Scientific-notation"-esque numerals.
///
/// Examples: `1234e10`, `1.2e+1`, `3.4E-7`, `2341E200`
ExponentFloat : (DIGIT+ | PointFloat) EXPONENT ;

/// Identifiers
///
/// Examples: `a`, `asdf1234`, `_jf`, `VariableName`, `example_var1`
Identifier : NONDIGIT+ (NONDIGIT | DIGIT)* ;

fragment LETTER : [a-zA-Z] ;
fragment NONDIGIT : (LETTER | '_') ;

fragment BINDIGIT : [01] ;
fragment HEXDIGIT : [0-9a-fA-F] ;
fragment OCTALDIGIT : [0-7] ;

fragment FRACTION : '.' DIGIT+ ;
fragment EXPONENT : [eE] [+\-]? DIGIT+ ;

fragment NONZERODIGIT : [1-9] ;
fragment DIGIT: [0-9] ;

/// Ignore whitespace by default.
///
/// This includes one or more spaces, tabs, carriage-returns (Windows), and
/// newlines.
Whitespace : [ \t]+ -> skip;
