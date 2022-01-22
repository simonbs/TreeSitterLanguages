import Runestone

public extension TreeSitterIndentationScopes {
    static var bash: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(
            indent: [
                "if_statement",
                "else",
                "while_statement",
                "for_statement",
                "function_definition",
                "do_group"
            ],
            outdent: [
                "fi",
                "done"
            ])
    }
}
