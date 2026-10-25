; Adapted for Runestone; pinned provenance and licenses: Tests/Updates/Perl.json
((source_file . (comment) @keyword.directive)
  (#match? @keyword.directive "^#!/"))

[ "use" "no" "require" ] @keyword.import

[ "if" "elsif" "unless" "else" ] @keyword.conditional

(conditional_expression [ "?" ":" ] @keyword.conditional.ternary)

[ "while" "until" "for" "foreach" ] @keyword.repeat
("continue" @keyword.repeat (block))

[ "try" "catch" "finally" ] @keyword.exception

"return" @keyword.return

[ "sub" "method" "async" "extended" ] @keyword.function

[ "map" "grep" "sort" ] @function.builtin

[ "package" "class" "role" ] @keyword.import

[
  "defer"
  "do" "eval"
  "my" "our" "local" "dynamically" "state" "field"
  "last" "next" "redo" "goto"
  "undef" "await"
] @keyword

(yadayada) @keyword.exception

(phaser_statement phase: _ @keyword.phaser)
(class_phaser_statement phase: _ @keyword.phaser)



(_ operator: _ @operator)
"\\" @operator

[
  "or" "xor" "and" "not"
  "eq" "ne" "cmp" "lt" "le" "ge" "gt"
  "isa"
] @keyword.operator

(eof_marker) @keyword.directive
(data_section) @comment

(pod) @comment

[
  (number)
  (version)
] @number

[
  (string_literal)
  (interpolated_string_literal)
  (quoted_word_list)
  (command_string)
  (heredoc_content)
  (replacement)
  (transliteration_content)
] @string

[
  (heredoc_token)
  (command_heredoc_token)
  (heredoc_end)
] @string.special

[(escape_sequence) (escaped_delimiter)] @string.escape

(_ modifiers: _ @constant.character)
[
 (quoted_regexp)
 (match_regexp)
 (regexp_content)
] @string.regex

(autoquoted_bareword) @string.special

(use_statement (package) @type)
(package_statement (package) @type)
(class_statement (package) @type)
(require_expression (bareword) @type)

(subroutine_declaration_statement name: (bareword) @function)
(method_declaration_statement name: (bareword) @function.method)
(attribute_name) @attribute
(attribute_value) @string

(label) @string.special

(statement_label label: _ @string.special)

(relational_expression operator: "isa" right: (bareword) @type)

(function) @function

(function_call_expression (function) @function)
(method_call_expression (method) @function.method)
(method_call_expression invocant: (bareword) @type)

(func0op_call_expression function: _ @function.builtin)
(func1op_call_expression function: _ @function.builtin)

([(function)(expression_statement (bareword))] @function.builtin
 (#match? @function.builtin
   "^(accept|atan2|bind|binmode|bless|crypt|chmod|chown|connect|die|dbmopen|exec|fcntl|flock|getpriority|getprotobynumber|gethostbyaddr|getnetbyaddr|getservbyname|getservbyport|getsockopt|glob|index|ioctl|join|kill|link|listen|mkdir|msgctl|msgget|msgrcv|msgsend|opendir|print|printf|push|pack|pipe|return|rename|rindex|read|recv|reverse|say|select|seek|semctl|semget|semop|send|setpgrp|setpriority|seekdir|setsockopt|shmctl|shmread|shmwrite|shutdown|socket|socketpair|split|sprintf|splice|substr|system|symlink|syscall|sysopen|sysseek|sysread|syswrite|tie|truncate|unlink|unpack|utime|unshift|vec|warn|waitpid|formline|open|sort)$"
))

(ERROR) @error

(
  [(varname) (filehandle)] @variable.builtin
  (#match? @variable.builtin "^((ENV|ARGV|INC|ARGVOUT|SIG|STDIN|STDOUT|STDERR)|[_ab]|\\W|\\d+|\\^.*)$")
)
(filehandle (varname)) @variable

[(array) (arraylen)] @variable.array
(glob) @variable.builtin
(scalar) @variable.scalar
(hash) @variable.hash
(amper_deref_expression [ "&" "*" ] @function)

(glob_deref_expression "*" @variable.builtin)
(glob_slot_expression "*" @variable.builtin)
(scalar_deref_expression [ "$" "*"] @variable.scalar)

; gotta be SUPER GENERIC so we can hit up string interp
(_
  [
   array: (_) @variable.array
   hash: (_) @variable.hash
  ])
(array_deref_expression [ "@" "*"] @variable.array)
(arraylen_deref_expression [ "$#" "*"] @variable.array)
(hash_deref_expression [ "%" "*"] @variable.hash)
(array_element_expression array:(_) @variable.array)
(slice_expression array:(_) @variable.array)



(comment) @comment

([ "=>" "," ";" "->" ] @punctuation.delimiter)

(
  [ "[" "]" "{" "}" "(" ")" ] @punctuation.bracket
)

(_
  "{" @punctuation.special
  (varname)
  "}" @punctuation.special)

(varname
  (block
    "{" @punctuation.special
    "}" @punctuation.special))

((_
    (autoquoted_bareword)
    (bareword) @constant)
)
