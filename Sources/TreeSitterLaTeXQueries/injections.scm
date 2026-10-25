(pycode_environment code: (source_code) @python)
(minted_environment
 (begin language: (curly_group_text (text) @injection.language))
 (source_code) @injection.content)

; Asymptote retains the prior C-family fallback, limited to actual source code.
[(asy_environment code: (source_code) @c) (asydef_environment code: (source_code) @c)]
