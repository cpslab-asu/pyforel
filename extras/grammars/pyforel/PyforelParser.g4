parser grammar PyforelParser;

/// The entry point to a PyFoReL program.
start : program EOF ;

/// A PyFoReL program is a sequence of zero or more statements.
program : (statement)* ;

/// A statement is either simple (inline) or compound (multiline).
///
/// Simple statements do not introduce a new scope whereas compound statements
/// do introduce a new scope.
statement : LeftParenthesis statement RightParenthesis
    | simpleStatement (Semicolon simpleStatement)* (Semicolon)? Newline
    | compoundStatement
    ;

/// A simple statement.
///
/// A simple statement is considered any statement that can be written in a single
/// line, accordingly. These statments most commonly reflect operands.
simpleStatement : functionCallStatement
    | True
    | False
    | Identifier
    ;

/// The simple statement, function call.
///
/// Examples: `call()`, `sum(x, y)`, `apply(x, y, z)`.
functionCallStatement : Identifier LeftParenthesis (argList)? RightParenthesis ;

/// A list of arguments.
///
/// Examples: `a, b`, `a , b`, `a,b, c, d`.
argList : Identifier Comma argList
    | Identifier
    ;

/// A compound statement.
///
/// A compound statment is considered any statement that introduces a new scope.
/// I.e., statements that have/use subformulas. These statements most commonly
/// reflect operations.
compoundStatement : ifStatement
    | functionDefinitionStatement
    | temporalStatement
    | freezeTimeStatement
    | objectQualifierStatement
    ;

/// The compound statement, if.
///
/// This statement is reflective of the implication operator.
ifStatement : If clauseStatement Colon newScope (elifStatement)* (elseStatement)? ;

/// The compound statement, elif.
///
/// This statement is reflective of a specialized implication operator.
elifStatement : ElseIf Colon newScope ;

/// The compound statement, else.
///
/// This statement is reflective of a specialized implication operator.
elseStatement : Else Colon newScope ;

clauseStatement : LeftParenthesis clauseStatement RightParenthesis
    | Not clauseStatement
    | clauseStatement And clauseStatement
    | clauseStatement Or clauseStatement

    | simpleStatement
    ;

functionDefinitionStatement : Fn Identifier LeftParenthesis (paramList)?
        RightParenthesis Colon newScope ;

/// A list of parameters.
///
/// Examples: `x: int, y: float, z: Length`, `x: Time, y: Object`.
paramList : parameter Comma paramList
    | parameter
    ;

/// An optionally typed parameters.
///
/// Examples: `x: Time`, `y: Object`.
parameter : Identifier (Colon Identifier)? ;

/// A compound statement, temporal.
///
/// Examples: `eventually within 10`, `eventually in 5`, `eventually from 2 to 2.5`.
temporalStatement : Eventually (bounds)? Colon newScope
    | Always (bounds)? Colon newScope
    | Next (bounds)? Colon newScope
    ;

/// A boundary.
///
/// `within 10`, `in 5`, `from 2 to 3`.
bounds : Within Scalar Upto Scalar
    | Within Scalar To Scalar
    | From Scalar Upto Scalar
    | From Scalar To Scalar
    ;

/// A compound statement, freeze time quantifier.
freezeTimeStatement : AtWord Identifier Colon newScope ;

/// A variable qualifier.
objectQualifierStatement : Exists argList Colon newScope
    | Forall argList Colon newScope
    ;

/// A new scope.
///
/// This statement creates a new scope (i.e., subformula) that any statement can
/// be effectively written.
newScope : simpleStatement
    | Newline Indent statement+ Dedent ;
