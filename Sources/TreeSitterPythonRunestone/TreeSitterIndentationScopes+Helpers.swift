import Runestone

public extension TreeSitterIndentationScopes {
    static var python: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(
            indent: [
                "function_definition",
                "for_statement",
                "class_definition",
                "elif_clause",
                "else_clause",
                "except_clause",
                "while_statement",
                "if_statement",
                "try_statement"
            ],
            whitespaceDenotesBlocks: true)
    }
}
