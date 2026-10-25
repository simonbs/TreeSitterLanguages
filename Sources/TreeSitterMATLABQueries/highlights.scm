; Vendored from https://github.com/acristoffers/tree-sitter-matlab at f03d0347acd8bb05d4edd8c845ac1718729e1fad
; Adaptations and licensing: Tests/Additional/MATLAB.json and Licenses/Additional/MATLAB.txt.

; Constants

(events (identifier) @constant)
(attribute (identifier) @constant)

"~" @constant.builtin

; Fields/Properties

(superclass "." (identifier) @property)
(property_name "." (identifier) @property)
(property name: (identifier) @property)

; Types

(class_definition name: (identifier) @keyword)
(attributes (identifier) @constant)
(enum . (identifier) @constant)

; Functions

(function_definition
  "function" @keyword
  name: (identifier) @function
  [ "end" "endfunction" ]? @keyword)

(function_signature name: (identifier) @function)
(function_call name: (identifier) @function)
(handle_operator (identifier) @function)
(validation_functions (identifier) @function)
(command (command_name) @function.macro)
(command_argument) @string
(return_statement) @keyword

; Assignments

(assignment left: (_) @variable)
(multioutput_variable (_) @variable)

; Parameters

(function_arguments (identifier) @variable.parameter)

; Conditionals

(if_statement [ "if" "end" ] @keyword)
(elseif_clause "elseif" @keyword)
(else_clause "else" @keyword)
(switch_statement [ "switch" "end" ] @keyword)
(case_clause "case" @keyword)
(otherwise_clause "otherwise" @keyword)
(break_statement) @keyword

; Repeats

(for_statement [ "for" "parfor" "end" ] @keyword)
(while_statement [ "while" "end" ] @keyword)
(continue_statement) @keyword

; Exceptions

(try_statement [ "try" "end" ] @keyword)
(catch_clause "catch" @keyword)

; Punctuation

[ ";" "," "." ] @punctuation.delimiter
[ "(" ")" "[" "]" "{" "}" ] @punctuation.bracket

; Literals

(escape_sequence) @string.escape
(formatting_sequence) @string.escape
(string) @string
(number) @number
(unary_operator ["+" "-"] @number)

; Comments

[ (comment) (line_continuation) ] @comment

; Operators

[
  "+"
  ".+"
  "-"
  ".*"
  "*"
  ".*"
  "/"
  "./"
  "\\"
  ".\\"
  "^"
  ".^"
  "'"
  ".'"
  "|"
  "&"
  "?"
  "@"
  "<"
  "<="
  ">"
  ">="
  "=="
  "~="
  "="
  "&&"
  "||"
  ":"
] @operator

; Keywords

"classdef" @keyword
[
  "arguments"
  "end"
  "enumeration"
  "events"
  "global"
  "methods"
  "persistent"
  "properties"
] @keyword
