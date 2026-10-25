; Adapted for Runestone; provenance and license: ADDITIONAL_LANGUAGES.md


(identifier) @variable



(node name: (identifier) @tag)
(node name: (identifier (string) @tag))



(type) @type
(type name: (identifier) @type)


((type name: (identifier) @type.builtin)
  (#match? @type.builtin "^(?:i8|i16|i32|i64|i128|u8|u16|u32|u64|u128|isize|usize|f32|f64|decimal64|decimal128|date\\-time|time|date|duration|decimal|currency|country\\-2|country\\-3|country\\-subdivision|email|idn\\-email|hostname|idn\\-hostname|ipv4|ipv6|url|url\\-reference|irl|irl\\-reference|url\\-template|uuid|regex|base64|base85)$"))



(prop key: (identifier) @property)



"=" @operator



(string) @string

(multi_line_string) @string

(string_fragment) @string

(escape) @string.escape

(escaped_whitespace) @string.escape

(number) @number

(keyword_number) @number

(number (decimal) @float)
(number (exponent) @float)

(boolean) @constant.builtin

[ "null" "#null" ] @constant.builtin



["{" "}"] @punctuation.bracket

["(" ")"] @punctuation.bracket

[
  ";"
] @punctuation.delimiter



[
  (single_line_comment)
  (multi_line_comment)
  (version)
] @comment

(node_comment) @comment
(node_field_comment) @comment
(node_children_comment) @comment
