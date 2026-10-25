; Adapted for Runestone; see Tests/Additional for pinned source and changes.
(tag_name) @tag

; (erroneous_end_tag_name) @error ; we do not lint syntax errors
(comment) @comment

(attribute_name) @attribute

(attribute_value)

((attribute
  (quoted_attribute_value) @string)
  (#set! priority 99))

(text) @none

((element
  (start_tag
    (tag_name) @_tag)
  (text) @text.title)
  (#eq? @_tag "title"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @markup.heading.1)
  (#eq? @_tag "h1"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @markup.heading.2)
  (#eq? @_tag "h2"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @markup.heading.3)
  (#eq? @_tag "h3"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @markup.heading.4)
  (#eq? @_tag "h4"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @markup.heading.5)
  (#eq? @_tag "h5"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @markup.heading.6)
  (#eq? @_tag "h6"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @text.strong)
  (#match? @_tag "^(strong|b)$"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @text.emphasis)
  (#match? @_tag "^(em|i)$"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @text.strike)
  (#match? @_tag "^(s|del)$"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @text.underline)
  (#eq? @_tag "u"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @text.literal)
  (#match? @_tag "^(code|kbd)$"))

((element
  (start_tag
    (tag_name) @_tag)
  (text) @text.uri)
  (#eq? @_tag "a"))

((attribute
  (attribute_name) @_attr
  (quoted_attribute_value
    (attribute_value) @text.uri))
  (#match? @_attr "^(href|src)$"))

[
  "<"
  ">"
  "</"
  "/>"
] @punctuation.bracket

"=" @operator


[
  "["
  "]"
] @punctuation.bracket

[
  ":"
  "."
] @character.special

[
  (interpolation)
  "@"
] @punctuation.special

(interpolation
  (raw_text) @none)

(dynamic_directive_inner_value) @variable

(directive_name) @attribute

; Accessing a component object's field
(":"
  .
  (directive_value) @property)

("."
  .
  (directive_value) @property)

; @click is like onclick for HTML
("@"
  .
  (directive_value) @method)

; Used in v-slot, declaring position the element should be put in
("#"
  .
  (directive_value) @variable)

(directive_attribute
  (quoted_attribute_value) @punctuation.special)

(directive_attribute
  (quoted_attribute_value
    (attribute_value) @none))

(directive_modifier) @method
