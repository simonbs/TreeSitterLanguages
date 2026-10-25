; Vendored from https://github.com/tree-sitter/tree-sitter-scala at c76bab0092b622e34df4916d80b117436683d16e
; Adaptations and licensing: Tests/Additional/Scala.json and Licenses/Additional/Scala.txt.

; CREDITS @stumash (stuart.mashaal@gmail.com)

(field_expression field: (identifier) @property)
(field_expression value: (identifier) @type
 (#match? @type "^[A-Z]"))

(type_identifier) @type

(class_definition
  name: (identifier) @type)

(enum_definition
  name: (identifier) @type)

(object_definition
  name: (identifier) @type)

(trait_definition
  name: (identifier) @type)

(full_enum_case
  name: (identifier) @type)

(simple_enum_case
  name: (identifier) @type)

;; variables

(class_parameter
  name: (identifier) @variable.parameter)

(self_type (identifier) @variable.parameter)

(interpolation (identifier) @none)
(interpolation (block) @none)

;; types

(type_definition
  name: (type_identifier) @type)

;; val/var definitions/declarations

(val_definition
  pattern: (identifier) @variable)

(var_definition
  pattern: (identifier) @variable)

(val_declaration
  name: (identifier) @variable)

(var_declaration
  name: (identifier) @variable)

; imports/exports

(import_declaration
  path: (identifier) @namespace)
((stable_identifier (identifier) @namespace))

((import_declaration
  path: (identifier) @type) (#match? @type "^[A-Z]"))
((stable_identifier (identifier) @type) (#match? @type "^[A-Z]"))

(export_declaration
  path: (identifier) @namespace)
((stable_identifier (identifier) @namespace))

((export_declaration
  path: (identifier) @type) (#match? @type "^[A-Z]"))
((stable_identifier (identifier) @type) (#match? @type "^[A-Z]"))

((namespace_selectors (identifier) @type) (#match? @type "^[A-Z]"))

; method invocation

(call_expression
  function: (identifier) @function)

(call_expression
  function: (operator_identifier) @function)

(call_expression
  function: (field_expression
    field: (identifier) @function.method))

((call_expression
   function: (identifier) @constructor)
 (#match? @constructor "^[A-Z]"))

(generic_function
  function: (identifier) @function)

(interpolated_string_expression
  interpolator: (identifier) @function)

; function definitions

(function_definition
  name: (identifier) @function)

(parameter
  name: (identifier) @variable.parameter)

(binding
  name: (identifier) @variable.parameter)

; method definition

(function_declaration
      name: (identifier) @function.method)

(function_definition
      name: (identifier) @function.method)

; expressions

(infix_expression operator: (identifier) @operator)
(infix_expression operator: (operator_identifier) @operator)
; An operator taking a colon argument parses as a postfix expression call.
(call_expression
  function: (postfix_expression (identifier) @operator .)
  arguments: (colon_argument))
(infix_type operator: (operator_identifier) @operator)
(infix_type operator: (operator_identifier) @operator)

; literals

(boolean_literal) @constant.builtin
(integer_literal) @number
(floating_point_literal) @number

[
  (string)
  (character_literal)
  (interpolated_string_expression)
] @string

(interpolation "$" @punctuation.special)

;; keywords

(opaque_modifier) @type
(infix_modifier) @keyword
(transparent_modifier) @type
(open_modifier) @type

[
  "case"
  "class"
  "enum"
  "extends"
  "derives"
  "finally"
  "forSome"
;; `macro` not implemented yet
  "object"
  "override"
  "package"
  "trait"
  "type"
  "val"
  "var"
  "with"
  "given"
  "using"
  "implicit"
  "with"
] @keyword

; `end` is scanner-lexed, so the marker node is the only thing to match.
(end_marker) @keyword

; `extension` is a soft keyword. Highlight it only where it starts an
; extension definition, not when used as a plain identifier.
(extension_definition "extension" @keyword)

[
  "abstract"
  "final"
  "lazy"
  "sealed"
  "private"
  "protected"
] @type

(inline_modifier) @keyword

(null_literal) @constant.builtin

(wildcard) @variable.parameter

(annotation) @attribute

;; special keywords

"new" @keyword

[
  "else"
  "if"
  "match"
  "then"
] @keyword

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
]  @punctuation.bracket

[
 "."
 ","
] @punctuation.delimiter

[
  "do"
  "for"
  "while"
  "yield"
] @keyword

"def" @keyword

[
 "=>"
 "<-"
 "@"
] @operator

["import" "export"] @keyword

[
  "try"
  "catch"
  "throw"
] @keyword

"return" @keyword

(comment)  @comment
(block_comment)  @comment

;; `case` is a conditional keyword in case_block

(case_block
  (case_clause ("case") @keyword))
(indented_cases
  (case_clause ("case") @keyword))

(operator_identifier) @operator

((identifier) @type (#match? @type "^[A-Z]"))
((identifier) @variable.builtin
 (#match? @variable.builtin "^this$"))

(
  (identifier) @function.builtin
  (#match? @function.builtin "^super$")
)

;; Scala CLI using directives
(using_directive_key) @variable.parameter
(using_directive_value) @string

;; XML literals
(xml_name) @tag
(xml_attribute key: (xml_name) @tag.attribute)
(xml_string) @string
(xml_text)
(xml_comment)  @comment
(xml_cdata) @string
(xml_processing_instruction) @keyword
