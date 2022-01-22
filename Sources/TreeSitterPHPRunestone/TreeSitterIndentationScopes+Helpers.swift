import Runestone

public extension TreeSitterIndentationScopes {
    static var php: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(
            indent: [
                "compound_statement",
                "formal_parameters",
                "array_creation_expression"
            ],
            outdent: ["}"])
    }
}
