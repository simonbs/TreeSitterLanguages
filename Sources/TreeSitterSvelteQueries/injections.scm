((script_element (start_tag) @_start (raw_text) @javascript)
 (#not-match? @_start "\\b(lang|type)\\s*="))
((script_element (start_tag (attribute (attribute_name) @_name [(attribute_value) @_value (quoted_attribute_value (attribute_value) @_value)])) (raw_text) @typescript)
 (#eq? @_name "lang") (#match? @_value "^(ts|typescript)$"))
((script_element (start_tag (attribute (attribute_name) @_name [(attribute_value) @_value (quoted_attribute_value (attribute_value) @_value)])) (raw_text) @javascript)
 (#eq? @_name "lang") (#match? @_value "^(js|javascript)$"))
((script_element (start_tag (attribute (attribute_name) @_name [(attribute_value) @_value (quoted_attribute_value (attribute_value) @_value)])) @_start (raw_text) @javascript)
 (#eq? @_name "type") (#match? @_value "^(text/javascript|application/javascript|module)$") (#not-match? @_start "\\blang\\s*="))
((style_element (start_tag) @_start (raw_text) @css)
 (#not-match? @_start "\\b(lang|type)\\s*="))
((style_element (start_tag (attribute (attribute_name) @_name [(attribute_value) @_value (quoted_attribute_value (attribute_value) @_value)])) (raw_text) @css)
 (#eq? @_name "lang") (#match? @_value "^(css)$"))
((style_element (start_tag (attribute (attribute_name) @_name [(attribute_value) @_value (quoted_attribute_value (attribute_value) @_value)])) (raw_text) @scss)
 (#eq? @_name "lang") (#match? @_value "^(scss)$"))

(svelte_raw_text) @typescript

((attribute (attribute_name) @_name (quoted_attribute_value (attribute_value) @css))
 (#eq? @_name "style"))
