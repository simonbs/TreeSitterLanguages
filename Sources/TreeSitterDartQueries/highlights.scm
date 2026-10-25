; Vendored from https://github.com/UserNobody14/tree-sitter-dart at 0038280b774b65c1b89ba7fec50624d8baed9fe1
; Adaptations and licensing: Tests/Additional/Dart.json and Licenses/Additional/Dart.txt.

; Variable
(identifier) @variable

; Keywords
; --------------------
[
    (assert_builtin)
    (break_builtin)
    (const_builtin)
    (part_of_builtin)
    (rethrow_builtin)
    (void_type)
    "abstract"
    "as"
    "async"
    "async*"
    "await"
    "base"
    "case"
    "catch"
    "class"
    "continue"
    "covariant"
    "default"
    "deferred"
    "do"
    "else"
    "enum"
    "export"
    "extends"
    "extension"
    "external"
    "factory"
    "final"
    "finally"
    "for"
    "Function"
    "hide"
    "if"
    "implements"
    "import"
    "in"
    "interface"
    "is"
    "late"
    "library"
    "mixin"
    "new"
    "on"
    "part"
    "required"
    "return"
    "sealed"
    "show"
    "static"
    "super"
    "switch"
    "sync*"
    "throw"
    "try"
    "typedef"
    "var"
    "when"
    "while"
    "with"
    "yield"
] @keyword

; Methods
; --------------------

; NOTE: This query is a bit of a work around for the fact that the dart grammar doesn't
; specifically identify a node as a function call
(((identifier) @function.call (#match? @function.call "^_?[a-z]"))
 . (selector . (argument_part))) @function.call

; Operators and Tokens
; --------------------
(template_substitution
  "$" @punctuation.special
  "{" @punctuation.special
  "}" @punctuation.special
) @none

(template_substitution
  "$" @punctuation.special
  (identifier_dollar_escaped) @variable
) @none

(escape_sequence) @string.escape

[
 "@"
 "=>"
 ".."
 "??"
 "=="
 "?"
 ":"
 "&&"
 "%"
 "<"
 ">"
 "="
 ">="
 "<="
 "||"
 "~/"
 (increment_operator)
 (is_operator)
 (prefix_operator)
 (equality_operator)
 (additive_operator)
] @operator

(type_arguments
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

(type_parameters
  "<" @punctuation.bracket
  ">" @punctuation.bracket)

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket

; Delimiters
; --------------------
[
  ";"
  "."
  ","
] @punctuation.delimiter

; Types
; --------------------
(type_identifier) @type
((type_identifier) @type.builtin
  (#match? @type.builtin "^(int|double|String|bool|List|Set|Map|Runes|Symbol)$"))
(class_definition
  name: (identifier) @type)
(constructor_signature
  name: (identifier) @type)
(primary_constructor
  name: (identifier) @type)
(scoped_identifier
  scope: (identifier) @type)
(function_signature
  name: (identifier) @function.definition)
(getter_signature
  "get" @keyword
  (identifier) @function.definition)
(setter_signature
  "set" @keyword
  name: (identifier) @function.definition)
(operator_signature
  "operator" @keyword)

((scoped_identifier
  scope: (identifier) @type
  name: (identifier) @type)
 (#match? @type "^[a-zA-Z]"))

; Enums
; -------------------
(enum_declaration
  name: (identifier) @type)
(enum_constant
  name: (identifier) @constant)

; Variables
; --------------------
; var keyword
(inferred_type) @keyword

((identifier) @type
 (#match? @type "^_?[A-Z].*[a-z]"))

("Function" @type)

(this) @variable.builtin

; properties

(unconditional_assignable_selector
  (identifier) @property)

(conditional_assignable_selector
  (identifier) @property)

(cascade_section
  (cascade_selector
    (identifier) @property))

((selector
  (unconditional_assignable_selector (identifier) @function.call))
  (selector (argument_part (arguments)))
)

(cascade_section
  (cascade_selector (identifier) @function.call)
  (argument_part (arguments))
)

; assignments
(assignment_expression
  left: (assignable_expression) @variable)

(this) @variable.builtin

; Parameters
; --------------------
(formal_parameter
    name: (identifier) @variable.parameter)

(named_argument
  (label (identifier) @variable.parameter))

; Literals
; --------------------
[
    (hex_integer_literal)
    (decimal_integer_literal)
    (decimal_floating_point_literal)
    ; TODO: inaccessbile nodes
    ; (octal_integer_literal)
    ; (hex_floating_point_literal)
] @number

(string_literal) @string
(symbol_literal (identifier) @constant) @constant
(true) @constant.builtin
(false) @constant.builtin
(null_literal) @constant.builtin

(documentation_comment) @comment
(comment) @comment

; Annotations
; --------------------
(annotation
  "@" @attribute
  name: (identifier) @attribute)

; Modern Dart 3+ Features
; --------------------

; Extension Types
(extension_type_declaration
  "type" @keyword)

(extension_type_declaration
  name: (identifier) @type)

(representation_declaration
  name: (identifier) @property)

; Switch Guards ("when")
(switch_expression_case
  "when" @keyword)

(switch_statement_case
  "when" @keyword)

; Patterns & Pattern Matching
(object_pattern
  (identifier) @property)

(record_pattern
  (identifier) @property)

; Record Types
(record_type_field
  (identifier) @variable)
