import Runestone

public extension TreeSitterIndentationScopes {
    static var css: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(indent: ["block"], outdent: ["}"])
    }
}
