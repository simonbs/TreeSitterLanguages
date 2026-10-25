; Adapted for Runestone; see Tests/Additional for pinned source and changes.
; Base identifier styling also used by upstream jinja_inline.
(identifier) @variable

[
  "{{"
  "{{-"
  "{{+"
  "+}}"
  "-}}"
  "}}"
  "{%"
  "{%-"
  "{%+"
  "+%}"
  "-%}"
  "%}"
] @keyword

(string_literal) @string

(number_literal) @number

(float_literal) @float

(boolean_literal) @boolean

(null_literal) @constant

"defined" @constant

(comment) @comment

[
  ","
  "."
  ":"
] @punctuation.delimiter

[
  (attribute_ignore)
  (attribute_context)
  "recursive"
] @attribute.builtin

[
  "("
  ")"
  "["
  "]"
  "<"
  ">"
] @punctuation.bracket

(binary_operator) @operator

[
  "block"
  "with"
  "filter"
  "macro"
  "set"
  "trans"
  "pluralize"
  "autoescape"
  "required"
] @keyword

[
  (endtrans_statement)
  (endblock_statement)
  (endwith_statement)
  (endfilter_statement)
  (endmacro_statement)
  (endcall_statement)
  (endset_statement)
  (endtrans_statement)
  (endautoescape_statement)
] @keyword

(do_statement
  "do" @keyword)

[
  "include"
  "import"
  "from"
  "extends"
  "as"
] @include

(import_statement
  (identifier) @variable)

(import_as
  (identifier) @variable)

[
  "if"
  (else_statement)
  (endif_statement)
  (elif_block)
] @conditional

[
  "for"
  "in"
  "continue"
  "break"
  (endfor_statement)
] @repeat

"call" @function

(function_call
  (identifier) @function)

(arg
  (identifier) @parameter)

(arg
  (expression
    (binary_expression
      (unary_expression
        (primary_expression
          (identifier) @parameter)))))

(expression
  "."
  (expression)+ @property)

(assignment_expression
  "."
  (identifier)+ @property)

(inline_trans
  "_" @function.builtin)

"debug" @function.builtin

; TODO: only match raw
(raw_start) @keyword

(raw_end) @keyword

(raw_body) @text.literal

(builtin_test
  [
    "boolean"
    "even"
    "in"
    "mapping"
    "sequence"
    "callable"
    "integer"
    "ne"
    "string"
    "defined"
    "filter"
    "iterable"
    "none"
    "test"
    "divisibleby"
    "float"
    "le"
    "number"
    "eq"
    "ge"
    "lower"
    "odd"
    "undefined"
    "escaped"
    "gt"
    "lt"
    "sameas"
    "upper"
  ] @operator)
