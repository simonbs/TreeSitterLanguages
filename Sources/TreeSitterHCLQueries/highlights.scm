; Adapted for Runestone; provenance and license: ADDITIONAL_LANGUAGES.md

[
  "!"
  "*"
  "/"
  "%"
  "+"
  "-"
  ">"
  ">="
  "<"
  "<="
  "=="
  "!="
  "&&"
  "||"
] @operator

[
  "{"
  "}"
  "["
  "]"
  "("
  ")"
] @punctuation.bracket

[
  "."
  ".*"
  ","
  "[*]"
] @punctuation.delimiter

[
  (ellipsis)
  "?"
  "=>"
] @punctuation.special

[
  ":"
  "="
] @none

[
  "for"
  "endfor"
  "in"
] @keyword.repeat

[
  "if"
  "else"
  "endif"
] @keyword.conditional

[
  (quoted_template_start)
  (quoted_template_end)
  (template_literal)
] @string

[
  (heredoc_identifier)
  (heredoc_start)
] @punctuation.delimiter

[
  (template_interpolation_start)
  (template_interpolation_end)
  (template_directive_start)
  (template_directive_end)
  (strip_marker)
] @punctuation.special

(numeric_lit) @number

(bool_lit) @constant.builtin

(null_lit) @constant

(comment) @comment

(identifier) @variable

(body
  (block
    (identifier) @keyword))

(body
  (block
    (body
      (block
        (identifier) @type))))

(function_call
  (identifier) @function.call)

(attribute
  (identifier) @property)




(object_elem
  key: (expression
    (variable_expr
      (identifier) @property)))




(expression
  (variable_expr
    (identifier) @variable.builtin)
  (get_attr
    (identifier) @property))
