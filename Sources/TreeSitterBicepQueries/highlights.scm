; Adapted for Runestone; provenance and license: ADDITIONAL_LANGUAGES.md

[
  "import"
  "provider"
  "with"
  "as"
  "from"
] @keyword.import


(module_declaration
  (identifier) @namespace)


(primitive_type) @type.builtin

((member_expression
  object: (identifier) @type.builtin)
  (#eq? @type.builtin "sys"))


(call_expression
  function: (identifier) @function.call)

(user_defined_function
  name: (identifier) @function)


(object_property
  (identifier) @property
  ":" @punctuation.delimiter
  (_))

(object_property
  (compatible_identifier) @property
  ":" @punctuation.delimiter
  (_))

(property_identifier) @property


(decorator
  "@" @attribute)

(decorator
  (call_expression
    (identifier) @attribute))

(decorator
  (call_expression
    (member_expression
      object: (identifier) @attribute
      property: (property_identifier) @attribute)))


(type_declaration
  (identifier) @type)

(type_declaration
  (identifier)
  "="
  (identifier) @type)

(type
  (identifier) @type)

(resource_declaration
  (identifier) @type)

(resource_expression
  (identifier) @type)


(parameter_declaration
  (identifier) @variable.parameter
  (_))

(call_expression
  function: (_)
  (arguments
    (identifier) @variable.parameter))

(call_expression
  function: (_)
  (arguments
    (member_expression
      object: (identifier) @variable.parameter)))

(parameter
  .
  (identifier) @variable.parameter)


(variable_declaration
  (identifier) @variable
  (_))

(metadata_declaration
  (identifier) @variable
  (_))

(output_declaration
  (identifier) @variable
  (_))

(object_property
  (_)
  ":"
  (identifier) @variable)

(for_statement
  "for"
  (for_loop_parameters
    (loop_variable) @variable
    (loop_enumerator) @variable))


"if" @keyword.conditional

(ternary_expression
  "?" @keyword.conditional.ternary
  ":" @keyword.conditional.ternary)


(for_statement
  "for" @keyword.repeat
  "in"
  ":" @punctuation.delimiter)


[
  "module"
  "metadata"
  "output"
  "param"
  "resource"
  "existing"
  "targetScope"
  "type"
  "var"
  "using"
  "test"
] @keyword

"func" @keyword.function

"assert" @keyword.exception


[
  "+"
  "-"
  "*"
  "/"
  "%"
  "||"
  "&&"
  "|"
  "=="
  "!="
  "=~"
  "!~"
  ">"
  ">="
  "<="
  "<"
  "??"
  "="
  "!"
  ".?"
] @operator

(subscript_expression
  "?" @operator)

(nullable_type
  "?" @operator)

"in" @keyword.operator


(string) @string

(escape_sequence) @string.escape

(number) @number

(boolean) @constant.builtin

(null) @constant.builtin


(compatible_identifier
  "?" @punctuation.special)

(nullable_return_type) @punctuation.special

[
  "{"
  "}"
] @punctuation.bracket

[
  "["
  "]"
] @punctuation.bracket

[
  "("
  ")"
] @punctuation.bracket

[
  "."
  ":"
  "::"
  "=>"
] @punctuation.delimiter


(interpolation) @none

(interpolation
  "${" @punctuation.special
  "}" @punctuation.special)

(interpolation
  (identifier) @variable)


[
  (comment)
  (diagnostic_comment)
] @comment
