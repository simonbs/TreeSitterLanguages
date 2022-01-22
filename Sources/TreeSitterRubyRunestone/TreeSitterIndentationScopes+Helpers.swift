import Runestone

public extension TreeSitterIndentationScopes {
    static var ruby: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(
            indent: [
                "class",
                "method",
                "singleton_method",
                "module",
                "call",
                "if",
                "block",
                "do_block",
                "hash",
                "array",
                "argument_list",
                "case",
                "def",
                "while"
            ],
            inheritIndent: [
                "elsif",
                "else"
            ],
            outdent: [
                "else",
                "elsif"
            ])
    }
}
