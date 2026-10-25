; Adapted for Runestone; provenance and license: ADDITIONAL_LANGUAGES.md


[
  "package"
  "import"
] @keyword



(package_identifier) @namespace

(import_spec ["." "_"] @punctuation.special)

[
  (attr_path)
  (package_path)
] @text.uri



(attribute) @attribute



[
  "if"
  "else"
  "otherwise"
  "fallback"
] @keyword.conditional



[
  "for"
] @keyword.repeat

(for_clause "_" @punctuation.special)



[
  "let"
  "try"
] @keyword

"func" @keyword.function

[
  "in"
] @keyword.operator



[
  "+"
  "-"
  "*"
  "/"
  "|"
  "&"
  "||"
  "&&"
  "=="
  "!="
  "<"
  "<="
  ">"
  ">="
  "=~"
  "!~"
  "!"
  "="
  "~"
  "->"
] @operator




(identifier) @variable



(field
  (label
  (identifier) @property))

(selector_expression
  (_)
  (identifier) @property)



(call_expression
  function: (identifier) @function.call)
(call_expression
  function: (selector_expression
  (_)
  (identifier) @function.call))
(call_expression
  function: (builtin_function) @function.call)

(builtin_function) @function.builtin



(parameter
  name: (identifier) @variable.parameter)

(labeled_argument
  label: (identifier) @variable.parameter)



((identifier) @variable.builtin
  (#match? @variable.builtin "^(?:self|__self)$"))

(call_expression
  function: (identifier) @function.builtin
  (#eq? @function.builtin "validator"))



(primitive_type) @type.builtin

((identifier) @type
  (#match? @type "^(#|_#)"))

[
  (slice_type)
  (pointer_type)
] @type



[
  ","
  ":"
] @punctuation.delimiter

[ "{" "}" ] @punctuation.bracket

[ "[" "]" ] @punctuation.bracket

[ "(" ")" ] @punctuation.bracket

[ "<" ">" ] @punctuation.bracket

[
  (ellipsis)
  "?"
  "!"
] @punctuation.special

(list_lit "#" @punctuation.special)

(struct_lit "#" @punctuation.special)

(spread_expression "..." @operator)



(string) @string

[
  (escape_char)
  (escape_unicode)
] @string.escape

(number) @number

(float) @float

(multiplier) @constant

(boolean) @constant.builtin

[
  (null)
  (top)
  (bottom)
] @constant.builtin



(interpolation "\\(" @punctuation.special (_) ")" @punctuation.special) @none

(interpolation "\\(" (identifier) @variable ")")



(comment) @comment



(ERROR) @error
