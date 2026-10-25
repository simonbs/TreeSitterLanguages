; Preserve the exact ffi.cdef predicate; inject string contents without delimiters.
((function_call
 name: [(identifier) @_cdef_identifier (_ _ (identifier) @_cdef_identifier)]
 arguments: (arguments (string content: _ @c)))
 (#eq? @_cdef_identifier "cdef"))
