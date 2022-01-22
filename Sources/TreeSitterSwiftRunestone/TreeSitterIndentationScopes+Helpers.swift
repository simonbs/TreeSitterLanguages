import Runestone

public extension TreeSitterIndentationScopes {
    static var swift: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(
            indent: [
                "protocol_body",
                "class_body",
                "computed_property",
                "computed_getter",
                "computed_setter",
                "function_body",
                "if_statement",
                "lambda_literal",
                "array_literal",
                "dictionary_literal",
                "switch_entry"
            ],
            outdent: [
                "else",
                "}",
                "]"
            ])
    }
}
