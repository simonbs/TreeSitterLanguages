; Vendored from https://github.com/tree-sitter-grammars/tree-sitter-zig at 6479aa13f32f701c383083d8b28360ebd682fb7d
; Adaptations and licensing: Tests/Additional/Zig.json and Licenses/Additional/Zig.txt.

; Variables
(identifier) @variable

; Parameters
(parameter
  name: (identifier) @variable.parameter)

(payload
  (identifier) @variable.parameter)

; Types
(parameter
  type: (identifier) @type)

((identifier) @type
  (#match? @type "^[A-Z_][a-zA-Z0-9_]*"))

(variable_declaration
  (identifier) @type
  "="
  [
    (struct_declaration)
    (enum_declaration)
    (union_declaration)
    (opaque_declaration)
  ])

[
  (builtin_type)
  "anyframe"
] @type.builtin

; Constants
((identifier) @constant
  (#match? @constant "^[A-Z][A-Z_0-9]+$"))

[
  "null"
  "unreachable"
  "undefined"
] @constant.builtin

(field_expression
  .
  member: (identifier) @constant)

(enum_declaration
  (container_field
    type: (identifier) @constant))

; Labels
(block_label
  (identifier) @label)

(break_label
  (identifier) @label)

; Fields
(field_initializer
  .
  (identifier) @property)

(field_expression
  (_)
  member: (identifier) @property)

(container_field
  name: (identifier) @property)

(initializer_list
  (assignment_expression
    left: (field_expression
      .
      member: (identifier) @property)))

; Functions
(builtin_identifier) @function.builtin

(call_expression
  function: (identifier) @function)

(call_expression
  function: (field_expression
    member: (identifier) @function))

(function_declaration
  name: (identifier) @function)

; Modules
(variable_declaration
  (identifier) @namespace
  (builtin_function
    (builtin_identifier) @keyword
    (#match? @keyword "^(@import|@cImport)$")))

; Builtins
[
  "c"
  "..."
] @variable.builtin

((identifier) @variable.builtin
  (#eq? @variable.builtin "_"))

(calling_convention
  (identifier) @variable.builtin)

; Keywords
[
  "asm"
  "defer"
  "errdefer"
  "test"
  "error"
  "const"
  "var"
] @keyword

[
  "struct"
  "union"
  "enum"
  "opaque"
] @keyword

[
  "async"
  "await"
  "suspend"
  "nosuspend"
  "resume"
] @keyword

"fn" @keyword

[
  "and"
  "or"
  "orelse"
] @keyword

"return" @keyword

[
  "if"
  "else"
  "switch"
] @keyword

[
  "for"
  "while"
  "break"
  "continue"
] @keyword

[
  "usingnamespace"
  "export"
] @keyword

[
  "try"
  "catch"
] @keyword

[
  "volatile"
  "allowzero"
  "noalias"
  "addrspace"
  "align"
  "callconv"
  "linksection"
  "pub"
  "inline"
  "noinline"
  "extern"
  "comptime"
  "packed"
  "threadlocal"
] @keyword

; Operator
[
  "="
  "*="
  "*%="
  "*|="
  "/="
  "%="
  "+="
  "+%="
  "+|="
  "-="
  "-%="
  "-|="
  "<<="
  "<<|="
  ">>="
  "&="
  "^="
  "|="
  "!"
  "~"
  "-"
  "-%"
  "&"
  "=="
  "!="
  ">"
  ">="
  "<="
  "<"
  "&"
  "^"
  "|"
  "<<"
  ">>"
  "<<|"
  "+"
  "++"
  "+%"
  "-%"
  "+|"
  "-|"
  "*"
  "/"
  "%"
  "**"
  "*%"
  "*|"
  "||"
  ".*"
  ".?"
  "?"
  ".."
] @operator

; Literals
(character) @string

([
  (string)
  (multiline_string)
] @string
  (#set! "priority" "95"))

(integer) @number

(float) @number

(boolean) @constant.builtin

(escape_sequence) @string.escape

; Punctuation
[
  "["
  "]"
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  ";"
  "."
  ","
  ":"
  "=>"
  "->"
] @punctuation.delimiter

(payload
  "|" @punctuation.bracket)

; Comments
(comment) @comment

((comment) @comment
  (#match? @comment "^//!"))
