; Adapted for Runestone; see Tests/Additional for pinned source and changes.
; Tags that start with a capital letter are components
((tag_name) @constructor
  (#match? @constructor "^[A-Z]"))

; === Tag Names ===
; Tags that start with a lower case letter are HTML tags
; We'll also use this highlighting for named blocks (which start with `:`)
((tag_name) @tag
  (#match? @tag "^:?[a-z]"))

(attribute_name) @attribute

(string_literal) @string

(number_literal) @number

(boolean_literal) @boolean

(concat_statement) @string

; === Block Statements ===
; Highlight the brackets
(block_statement_start) @punctuation.bracket

(block_statement_end) @punctuation.bracket

; Highlight `if`/`each`/`let`
(block_statement_start
  path: (identifier) @keyword)

(block_statement_end
  path: (identifier) @keyword)

((block_statement_start
  (identifier) @conditional)
  (#eq? @conditional "if"))

((block_statement_end
  (identifier) @conditional)
  (#eq? @conditional "if"))

((mustache_statement
  (identifier) @conditional)
  (#eq? @conditional "else"))

; == Mustache Statements ===
; Highlight the whole statement, to color brackets and separators
(mustache_statement) @punctuation.bracket

; An identifier in a mustache expression is a variable
((mustache_statement
  [
    (path_expression
      (identifier) @variable)
    (identifier) @variable
  ])
  (#not-match? @variable "^(yield|outlet|this|else)$"))

; As are arguments in a block statement
(block_statement_start
  argument: [
    (path_expression
      (identifier) @variable)
    (identifier) @variable
  ])

; As is an identifier in a block param
(block_params
  (identifier) @variable)

; As are helper arguments
((helper_invocation
  argument: [
    (path_expression
      (identifier) @variable)
    (identifier) @variable
  ])
  (#not-eq? @variable "this"))

; `this` should be highlighted as a built-in variable
((identifier) @variable.builtin
  (#eq? @variable.builtin "this"))

; If the identifier is just "yield" or "outlet", it's a keyword
((mustache_statement
  (identifier) @keyword)
  (#match? @keyword "^(yield|outlet)$"))

; Helpers are functions
((helper_invocation
  helper: [
    (path_expression
      (identifier) @function)
    (identifier) @function
  ])
  (#not-match? @function "^(if|yield)$"))

((helper_invocation
  helper: (identifier) @conditional)
  (#eq? @conditional "if"))

((helper_invocation
  helper: (identifier) @keyword)
  (#eq? @keyword "yield"))

(hash_pair
  key: (identifier) @property)

(comment_statement) @comment

(attribute_node
  "=" @operator)

(block_params
  "as" @keyword)

(block_params
  "|" @operator)

[
  "<"
  ">"
  "</"
  "/>"
] @punctuation.bracket
