; Vendored from https://github.com/gdamore/tree-sitter-d at 64f27931b4e6fdd75af1102c79bacbca68a8dacc
; Adaptations and licensing: Tests/Additional/D.json and Licenses/Additional/D.txt.

; highlights.scm
;
; Highlighting queries for D code for use by Tree-Sitter.
;
; Copyright 2024 Garrett D'Amore
;
; Distributed under the MIT License.
; (See accompanying file LICENSE.txt or https://opensource.org/licenses/MIT)
; SPDX-License-Identifier: MIT

(string_literal) @string
(int_literal) @number
(float_literal) @number
(char_literal) @number
(identifier) @variable
(at_attribute) @property
(htmlentity) @string.special
(escape_sequence) @string.escape

[
	(lazy)
	(align)
	(extern)
	(static)
	(abstract)
	(final)
	(override)
	(synchronized)
	(auto)
	(scope)
	(gshared)
	(ref)
	(deprecated)
	(nothrow)
	(pure)
	(type_ctor)
] @keyword

(parameter_attribute (return) @keyword)
(parameter_attribute (in) @keyword)
(parameter_attribute (out) @keyword)

(function_declaration (identifier) @function)

(call_expression (identifier) @function)
(call_expression (type (template_instance (identifier) @function)))
(template_arguments (identifier) @variable.parameter)

(named_argument (identifier) @variable.parameter)

[
    (abstract)
    (alias)
    (align)
    (asm)
    (assert)
    (auto)
    (cast)
    (class)
    (const)
    (debug)
    (delegate)
    (delete)
    (deprecated)
    (enum)
    (export)
    (extern)
    (final)
    (function)
    (immutable)
    (import)
    (in)
    (inout)
    (interface)
    (invariant)
    (is)
    (lazy)
    ; "macro" - obsolete
    (mixin)
    (module)
    (new)
    (nothrow)
    (out)
    (override)
    (package)
    (pragma)
    (private)
    (protected)
    (public)
    (pure)
    (ref)
    (scope)
    (shared)
    (static)
    (struct)
    (super)
    (synchronized)
    (template)
    (this)
    (throw)
    (typeid)
    (typeof)
    (union)
    (unittest)
    (version)
    (with)
    (gshared)
    (traits)
    (vector)
    (parameters_)
] @keyword

[
    (break)
    (case)
    (catch)
    (continue)
    (do)
    (default)
    (finally)
    (else)
    (for)
    (foreach)
    (foreach_reverse)
    (goto)
    (if)
    (switch)
    (try)
    (return)
    (while)
] @keyword

[
    (not_in)
    (not_is)
    "/="
    "/"
    ".."
    "..."
    "&"
    "&="
    "&&"
    "|"
    "|="
    "||"
    "-"
    "-="
    "--"
    "+"
    "+="
    "++"
    "<"
    "<="
    "<<"
    "<<="
    ">"
    ">="
    ">>="
    ">>>="
    ">>"
    ">>>"
    "!"
    "!="
    "?"
    "$"
    "="
    "=="
    "*"
    "*="
    "%"
    "%="
    "^"
    "^="
    "^^"
    "^^="
    "~"
    "~="
    "@"
    "=>"
] @operator

[
    ";"
    "."
    ":"
    ","
] @punctuation.delimiter

[
    "("
    ")"
    "["
    "]"
    "{"
    "}"
] @punctuation.bracket

; The delimiters of an interpolation expression inside an interpolated string.
; Listed after the bracket rule above so the closing ")" is captured here rather
; than as a plain bracket; this keeps the opening "$(" and closing ")" the same
; color instead of the opener inheriting the surrounding string color.
(interpolation_expression
    "$(" @punctuation.special
    ")" @punctuation.special)

[
    (null)
    (true)
    (false)
] @constant.builtin

(special_keyword) @constant.builtin

(directive) @keyword
(shebang) @keyword

(comment) @comment

[
    (void)
    (bool)
    (byte)
    (ubyte)
    (char)
    (short)
    (ushort)
    (wchar)
    (dchar)
    (int)
    (uint)
    (long)
    (ulong)
    (real)
    (double)
    (float)
    (size_t)
    (ptrdiff_t)
    (string)
    (cstring)
    (wstring)
    (noreturn)
] @type.builtin

[
    (cent)
    (ucent)
    (ireal)
    (idouble)
    (ifloat)
    (creal)
    (double)
    (cfloat)
] @type

(label (identifier) @label)
(goto_statement (goto) @keyword (identifier) @label)

; this covers other cases where the identifier can only
; be a type (such as in an is-expression on a constraint)
(type (identifier) @type)

; these are listed last, because they override keyword queries
(identity_expression (in) @operator)
(identity_expression (is) @operator)

; everything after __EOF_ is plain text
(end_file) @none
