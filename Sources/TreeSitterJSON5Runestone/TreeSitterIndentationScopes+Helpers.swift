import Runestone

public extension TreeSitterIndentationScopes {
    static var json5: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(indent: ["object", "array"], outdent: ["}", "]"])
    }
}
