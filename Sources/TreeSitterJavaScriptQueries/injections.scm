; Adapted from upstream injections: each fragment is paired with its tag.
(call_expression
 function: [(identifier) @injection.language (member_expression property: (property_identifier) @injection.language)]
 arguments: (template_string (string_fragment) @injection.content))
(regex_pattern) @regex
((comment) @jsdoc (#match? @jsdoc "^/\\*\\*"))
