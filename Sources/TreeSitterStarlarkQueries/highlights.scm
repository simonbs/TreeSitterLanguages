; Adapted for Runestone; provenance and license: ADDITIONAL_LANGUAGES.md




(identifier) @variable


(interpolation) @none


((identifier) @type
 (#match? @type "^[A-Z].*[a-z]"))
((identifier) @constant
 (#match? @constant "^[A-Z][A-Z_0-9]*$"))

((identifier) @constant.builtin
 (#match? @constant.builtin "^__[a-zA-Z0-9_]*__$"))

((identifier) @constant.builtin
 (#match? @constant.builtin "^(?:NotImplemented|Ellipsis|quit|exit|copyright|credits|license)$"))

((attribute
    attribute: (identifier) @property)
 (#match? @property "^[^A-Z].*$"))

((identifier) @type.builtin
 (#match? @type.builtin "^(?:ArithmeticError|BufferError|LookupError|AssertionError|AttributeError|EOFError|FloatingPointError|ModuleNotFoundError|IndexError|KeyError|KeyboardInterrupt|MemoryError|NameError|NotImplementedError|OSError|OverflowError|RecursionError|ReferenceError|RuntimeError|StopIteration|StopAsyncIteration|SyntaxError|IndentationError|TabError|SystemError|SystemExit|TypeError|UnboundLocalError|UnicodeError|UnicodeEncodeError|UnicodeDecodeError|UnicodeTranslateError|ValueError|ZeroDivisionError|EnvironmentError|IOError|WindowsError|BlockingIOError|ChildProcessError|ConnectionError|BrokenPipeError|ConnectionAbortedError|ConnectionRefusedError|ConnectionResetError|FileExistsError|FileNotFoundError|InterruptedError|IsADirectoryError|NotADirectoryError|PermissionError|ProcessLookupError|TimeoutError|Warning|UserWarning|DeprecationWarning|PendingDeprecationWarning|SyntaxWarning|RuntimeWarning|FutureWarning|UnicodeWarning|BytesWarning|ResourceWarning|bool|int|float|complex|list|tuple|range|str|bytes|bytearray|memoryview|set|frozenset|dict|type)$"))

((assignment
  left: (identifier) @type.definition
  (type (identifier) @_annotation))
 (#eq? @_annotation "TypeAlias"))

((assignment
  left: (identifier) @type.definition
  right: (call
    function: (identifier) @_func))
 (#match? @_func "^(?:TypeVar|NewType)$"))


((decorator "@" @attribute)
 (#set! "priority" 101))

(decorator
  (identifier) @attribute)
(decorator
  (attribute
    attribute: (identifier) @attribute))
(decorator
  (call (identifier) @attribute))
(decorator
  (call (attribute
          attribute: (identifier) @attribute)))

((decorator
  (identifier) @attribute.builtin)
 (#match? @attribute.builtin "^(?:classmethod|property)$"))


((call
  function: (identifier) @function.builtin)
 (#match? @function.builtin "^(?:abs|all|any|ascii|bin|bool|breakpoint|bytearray|bytes|callable|chr|classmethod|compile|complex|delattr|dict|dir|divmod|enumerate|eval|exec|fail|filter|float|format|frozenset|getattr|globals|hasattr|hash|help|hex|id|input|int|isinstance|issubclass|iter|len|list|locals|map|max|memoryview|min|next|object|oct|open|ord|pow|print|property|range|repr|reversed|round|set|setattr|slice|sorted|staticmethod|str|struct|sum|super|tuple|type|vars|zip|__import__)$"))


(function_definition
  name: (identifier) @function)

(type (identifier) @type)
(type
  (subscript
    (identifier) @type))

((call
  function: (identifier) @_isinstance
  arguments: (argument_list
    (_)
    (identifier) @type))
 (#eq? @_isinstance "isinstance"))


(parameters
  (identifier) @variable.parameter)

(lambda_parameters
  (identifier) @variable.parameter)
(lambda_parameters
  (tuple_pattern
    (identifier) @variable.parameter))

(keyword_argument
  name: (identifier) @variable.parameter)

(default_parameter
  name: (identifier) @variable.parameter)
(typed_parameter
  (identifier) @variable.parameter)
(typed_default_parameter
  (identifier) @variable.parameter)

(parameters
  (list_splat_pattern
    (identifier) @variable.parameter))
(parameters
  (dictionary_splat_pattern
    (identifier) @variable.parameter))



(none) @constant.builtin
[(true) (false)] @constant.builtin
((identifier) @variable.builtin
 (#eq? @variable.builtin "self"))
((identifier) @variable.builtin
 (#eq? @variable.builtin "cls"))

(integer) @number
(float) @float

(comment) @comment

((module . (comment) @keyword)
  (#match? @keyword "^#!/"))

(string) @string
[
  (escape_sequence)
  (escape_interpolation)
] @string.escape


(expression_statement (string))



[
  "-"
  "-="
  ":="
  "!="
  "*"
  "**"
  "**="
  "*="
  "/"
  "//"
  "//="
  "/="
  "&"
  "&="
  "%"
  "%="
  "^"
  "^="
  "+"
  "+="
  "<"
  "<<"
  "<<="
  "<="
  "<>"
  "="
  "=="
  ">"
  ">="
  ">>"
  ">>="
  "@"
  "@="
  "|"
  "|="
  "~"
  "->"
] @operator


[
  "and"
  "in"
  "not"
  "or"

  "del"
] @keyword.operator

[
  "def"
  "lambda"
] @keyword.function

[
  "async"
  "exec"
  "pass"
  "print"
  "with"
  "as"
] @keyword

[
  "return"
] @keyword.return

((call
  function: (identifier) @keyword
  arguments: (argument_list
	(string) @string))
  (#eq? @keyword "load"))

["if" "elif" "else" "match" "case"] @keyword.conditional

["for" "while" "break" "continue"] @keyword.repeat

["(" ")" "[" "]" "{" "}"] @punctuation.bracket

(interpolation
  "{" @punctuation.special
  "}" @punctuation.special)

["," "." ":" ";" (ellipsis)] @punctuation.delimiter


(ERROR) @error




(assert_keyword) @keyword

(assert_builtin) @function.builtin


((call
  function: (identifier) @_func
  arguments: (argument_list
    (keyword_argument
	  name: (identifier) @property)))
  (#eq? @_func "struct"))



(call
  function: (identifier) @function.call)

(call
  function: (attribute
              attribute: (identifier) @function.method))

((call
   function: (identifier) @constructor)
 (#match? @constructor "^[A-Z]"))

((call
  function: (attribute
              attribute: (identifier) @constructor))
 (#match? @constructor "^[A-Z]"))
