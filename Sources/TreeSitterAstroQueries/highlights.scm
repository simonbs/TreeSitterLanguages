(tag_name) @tag
(erroneous_end_tag_name) @tag.error
(doctype) @constant
(attribute_name) @attribute
(attribute_value) @string
(comment) @comment

[
  "<"
  ">"
  "</"
] @punctuation.bracket

["{" "}" "/>" "---"] @punctuation.bracket

(attribute_backtick_string) @string
