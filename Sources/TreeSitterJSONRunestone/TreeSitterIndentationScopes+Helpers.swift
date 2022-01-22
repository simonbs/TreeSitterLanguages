import Runestone

public extension TreeSitterIndentationScopes {
    static var json: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(indent: ["object", "array"], outdent: ["}", "]"])
    }
}
