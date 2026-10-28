; Adapted for Runestone; provenance and license: LANGUAGE_SOURCES.md
(package
  (full_ident
    (identifier) @namespace))

(extend
  (full_ident
    (identifier) @type))

(constant
  (full_ident
    (identifier) @constant))

(field
  (identifier) @property)

(map_field
  (identifier) @property)

(oneof
  (identifier) @type)

(oneof_field
  (identifier) @property)

(field_option
  (identifier) @property)

(enum_value_option
  (identifier) @property)

(block_lit
  (identifier) @property)



(extension_name
  name: (full_ident
    (identifier) @variable))

(extension_name
  type: (full_ident
    (identifier) @type))



[
  (option
    (full_ident
      (identifier) @variable))
  (field_option
    (full_ident
      (identifier) @variable))
  (enum_value_option
    (full_ident
      (identifier) @variable))
]

[
  (option
    (full_ident
      (identifier)
      (identifier) @property))
  (field_option
    (full_ident
      (identifier)
      (identifier) @property))
  (enum_value_option
    (full_ident
      (identifier)
      (identifier) @property))
]






(option
  (identifier) @property)

[
  "option"
  "syntax"
  "edition"
] @keyword.directive

[
  "reserved"
  "to"
  "max"
] @keyword

[
  "enum"
  "extend"
  "extensions"
  "group"
  "message"
  "map"
  "oneof"
  "service"
] @keyword.type

"rpc" @keyword.function

"returns" @keyword.return

[
  "export"
  "local"
  "optional"
  "repeated"
  "required"
  "stream"
  "weak"
  "public"
] @keyword.modifier

[
  "package"
  "import"
] @keyword.import

[
  (key_type)
  (type)
] @type.builtin

[
  (message_name)
  (enum_name)
  (service_name)
  (message_or_enum_type)
] @type

(rpc_name) @function.method

(enum_field
  (identifier) @constant)

(string) @string



(reserved_identifier) @string

(import
  path: (string) @string.special.path)

(syntax
  version: (string) @string.special.symbol)

(escape_sequence) @string.escape

(int_lit) @number

(float_lit) @float

[
  (true)
  (false)
] @constant.builtin

(comment)

(comment) @comment

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  "<"
  ">"
] @punctuation.bracket

[
  ";"
  ","
  "."
  ":"
] @punctuation.delimiter

[
  "="
  "-"
  "+"
] @operator
