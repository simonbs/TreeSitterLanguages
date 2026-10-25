; Adapted for Runestone; see Tests/Additional for pinned source and changes.
[(double_quote_string) (single_quote_string)] @string
(escape_sequence) @string.escape

(comment) @comment

[(integer) (float)] @number

[
  "&&"
  "||"
  "|"
  "&|"
  "2>|"
  "&"
  ".."
  (direction)
  (stream_redirect)
] @operator

; match operators of test command
(command
  name: (word) @function (#match? @function "^test$")
  argument: (word) @operator (#match? @operator "^(!?=|-[a-zA-Z]+)$"))

; match operators of [ command
(command
  name: (word) @punctuation.bracket (#match? @punctuation.bracket "^\\[$")
  argument: (word) @operator (#match? @operator "^(!?=|-[a-zA-Z]+)$"))

(variable_expansion) @constant

(command_substitution "$" @punctuation.special)
(command_substitution ["(" ")"] @punctuation.bracket)
(list_element_access  ["[" "]"] @punctuation.bracket)
(brace_expansion      ["{" "}"] @punctuation.bracket)
(begin_statement      ["{" "}"] @punctuation.bracket)

"," @punctuation.delimiter

(function_definition name: [(word) (concatenation)] @function)
(function_definition option: (word) @constant (#match? @constant "^-."))
(function_definition option: (concatenation . (word) @constant (#match? @constant "^-.")))
(command name: (word) @function)
(command argument: (word) @constant (#match? @constant "^-."))
(command argument: (concatenation . (word) @constant (#match? @constant "^-.")))
(command_substitution) @embedded

[
 "switch"
 "case"
 "in"
 "begin"
 "function"
 "if"
 "else"
 "end"
 "while"
 "for"
 "not"
 "!"
 "and"
 "or"
 "return"
 (break)
 (continue)
] @keyword
