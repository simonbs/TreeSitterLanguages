; Vendored from https://github.com/murtaza64/tree-sitter-groovy at 2a6ddd558b6aa39c5b77d8db9fe9baf817486b2c
; Adaptations and licensing: Tests/Additional/Groovy.json and Licenses/Additional/Groovy.txt.

[
  "!instanceof"
  "assert"
  "extends"
  "instanceof"
  "package"
] @keyword

[
  "class"
  "interface"
] @keyword

[
  "!in"
  "as"
  "in"
  "new"
] @keyword

[
  "case"
  "default"
  "else"
  "if"
  "switch"
] @keyword

[
  "catch"
  "finally"
  "try"
] @keyword

"def" @keyword

"import" @keyword

[
  "do"
  "for"
  "while"
  (break)
  (continue)
] @keyword

"return" @keyword

[
  "true"
  "false"
] @constant.builtin

(null) @constant.builtin

"this" @variable.builtin

[
  "int"
  "char"
  "short"
  "long"
  "boolean"
  "float"
  "double"
  "void"
] @type.builtin

[
  "final"
  "private"
  "protected"
  "public"
  "static"
  "synchronized"
] @keyword

(comment) @comment

(shebang) @keyword

(string) @string

(string
  (escape_sequence) @string.escape)

(string
  (interpolation
    "$" @punctuation.special))

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[
  ":"
  ","
  "."
  ";"
] @punctuation.delimiter

(number_literal) @number

(identifier) @variable

(declaration
  "_" @variable)

(access_op
  [
    "?."
    "*."
    ".@"
  ]
  (identifier) @property .)

((identifier) @constant
  (#match? @constant "^[A-Z][A-Z_0-9]+$"))

[
  "%"
  "*"
  "**"
  "/"
  "+"
  "-"
  "->"
  "<<"
  ">>"
  ">>>"
  ".."
  "..<"
  "<..<"
  "<.."
  "<"
  "<="
  ">"
  ">="
  "=="
  "!="
  "<=>"
  "==="
  "!=="
  "=~"
  "==~"
  "&"
  "^"
  "|"
  "&&"
  "||"
  "?:"
  ".&"
  ".@"
  "?."
  "*."
  "*:"
  "++"
  "--"
  "!"
  "~"
] @operator

(wildcard_import) @string.special

(string
  "/" @string)

(ternary_op
  ([
    "?"
    ":"
  ]) @keyword)

(map
  (map_item
    key: (identifier) @variable.parameter))

(parameter
  type: (identifier) @type)

(parameter
  name: (identifier) @variable.parameter)

(generic_param
  name: (identifier) @type)

(declaration
  type: (identifier) @type)

(function_definition
  type: (identifier) @type)

(function_declaration
  type: (identifier) @type)

(class_definition
  name: (identifier) @type)

(class_definition
  superclass: (identifier) @type)

(generic_param
  superclass: (identifier) @type)

(array_type
  (identifier) @type)

(array_type
  "[]" @punctuation.bracket)

(type_with_generics
  (identifier) @type)

(type_with_generics
  (generics
    (identifier) @type))

(generics
  [
    "<"
    ">"
  ] @punctuation.bracket)

(generic_parameters
  [
    "<"
    ">"
  ] @punctuation.bracket)

; TODO: Class literals with PascalCase
(parameter
  "=" @operator)

(declaration
  "=" @operator)

(assignment
  [
    "="
    "**="
    "*="
    "/="
    "%="
    "+="
    "-="
    "<<="
    ">>="
    ">>>="
    "&="
    "^="
    "|="
    "?="
  ] @operator)

(access_op
  ".&"
  (identifier) @function .)

(function_call
  function: (identifier) @function)

(function_call
  function: (dotted_identifier
    (identifier) @function .))

(function_call
  (argument_list
    (map_item
      key: (identifier) @variable.parameter)))

(juxt_function_call
  function: (identifier) @function)

(juxt_function_call
  function: (dotted_identifier
    (identifier) @function .))

(juxt_function_call
  (argument_list
    (map_item
      key: (identifier) @variable.parameter)))

(function_definition
  function: (identifier) @function)

(function_declaration
  function: (identifier) @function)

(annotation) @function.macro

(annotation
  (identifier) @function.macro)

"@interface" @function.macro

"pipeline" @keyword

(groovy_doc) @comment

(groovy_doc
  [
    (groovy_doc_param)
    (groovy_doc_throws)
    (groovy_doc_tag)
  ] @string.special )

(groovy_doc
  (groovy_doc_param
    (identifier) @variable.parameter) )

(groovy_doc
  (groovy_doc_throws
    (identifier) @type ))
