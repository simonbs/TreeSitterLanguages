; Adapted for Runestone; provenance and license: ADDITIONAL_LANGUAGES.md
(id) @variable

(comment) @comment


(null) @constant.builtin

(string) @string

(number) @number

[
  (true)
  (false)
] @constant.builtin


"for" @keyword.repeat

"in" @keyword.operator

"function" @keyword.function

[
  "if"
  "then"
  "else"
] @keyword.conditional

[
  (local)
  (tailstrict)
  "function"
] @keyword

[
  "assert"
  "error"
] @keyword.exception

[
  (dollar)
  (self)
  (super)
] @variable.builtin

((id) @variable.builtin
  (#eq? @variable.builtin "std"))


[
  (multiplicative)
  (additive)
  (bitshift)
  (comparison)
  (equality)
  (bitand)
  (bitxor)
  (bitor)
  (and)
  (or)
  (unaryop)
] @operator


[
  "["
  "]"
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

[
  "."
  ","
  ";"
  ":"
] @punctuation.delimiter

[
  "::"
  ":::"
] @punctuation.special

(field
  (fieldname)
  "+" @punctuation.special)


[
  (import)
  (importstr)
] @keyword.import


(fieldname
  (id) @property)

(fieldname
  (string
    (string_content) @property))


(field
  function: (fieldname
    (id) @function))

(field
  function: (fieldname
    (string
      (string_content) @function)))

(param
  identifier: (id) @variable.parameter)

(bind
  (id) @variable)

(bind
  function: (id) @function)


(functioncall
  (fieldaccess
    last: (id) @function.call)?
  (fieldaccess_super
    (id) @function.call)?
  (id)? @function.call
  "("
  (args
    (named_argument
      (id) @variable.parameter))?
  ")")
