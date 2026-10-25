; Adapted for Runestone; provenance and license: ADDITIONAL_LANGUAGES.md



(enum_variant) @constant
(struct_entry (identifier) @property)
(struct_entry (enum_variant (identifier) @constant))
(struct_name (identifier)) @type

(unit_struct) @type.builtin





(string) @string
(boolean) @constant.builtin
(integer) @number
(float) @float
(char) @string





[
  (line_comment)
  (block_comment)
] @comment





["{" "}"] @punctuation.bracket

["(" ")"] @punctuation.bracket

["[" "]"] @punctuation.bracket

[
  ","
  ":"
] @punctuation.delimiter

[
  "-"
] @operator




(escape_sequence) @string.escape
(ERROR) @error
