; Org highlighting using Runestone's standard theme captures.
(headline (stars) @punctuation.special (item) @text.title)
(item . (expr) @keyword (#match? @keyword "^(TODO|DONE)$"))
(tag_list (tag) @property)
(property name: (expr) @property (value)? @string)
(timestamp) @number
(directive name: (expr) @keyword (value)? @string)
(comment) @comment
(drawer name: (expr) @keyword)
(block name: (expr) @keyword (contents)? @text.literal)
(dynamic_block name: (expr) @keyword)
(bullet) @punctuation.special
(checkbox) @punctuation.special
