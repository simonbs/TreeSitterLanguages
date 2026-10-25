(frontmatter
  (frontmatter_js_block) @injection.content
  (#set! injection.language "typescript"))

(attribute_interpolation
  (attribute_js_expr) @injection.content
  (#set! injection.language "typescript"))

; TODO proper queries for html_interpolation highlighting
(html_interpolation
  (permissible_text) @injection.content
  (#set! injection.language "typescript"))

((script_element (start_tag) @_start (raw_text) @typescript)
 (#not-match? @_start "\\b(lang|type)\\s*="))
((style_element (start_tag) @_start (raw_text) @css)
 (#not-match? @_start "\\b(lang|type)\\s*="))
((style_element (start_tag (attribute (attribute_name) @_name [(attribute_value) @_value (quoted_attribute_value (attribute_value) @_value)])) (raw_text) @css)
 (#eq? @_name "lang") (#match? @_value "^(css)$"))
((style_element (start_tag (attribute (attribute_name) @_name [(attribute_value) @_value (quoted_attribute_value (attribute_value) @_value)])) (raw_text) @scss)
 (#eq? @_name "lang") (#match? @_value "^(scss)$"))

((script_element (start_tag (attribute (attribute_name) @_name [(attribute_value) @_lang (quoted_attribute_value (attribute_value) @_lang)])) (raw_text) @typescript)
 (#eq? @_name "lang") (#match? @_lang "^(ts|typescript)$"))
((script_element (start_tag (attribute (attribute_name) @_name [(attribute_value) @_lang (quoted_attribute_value (attribute_value) @_lang)])) (raw_text) @javascript)
 (#eq? @_name "lang") (#match? @_lang "^(js|javascript)$"))
