[
  ":"
  ","
] @punctuation.delimiter

[
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

(pair key: (string) @property)

(pair value: (string) @string)
(pair value: (number) @number)
(pair value: [(true) (false) (null)] @constant.builtin)

(array (string) @string)
(array (number) @number)
(array [(true) (false) (null)] @constant.builtin)
