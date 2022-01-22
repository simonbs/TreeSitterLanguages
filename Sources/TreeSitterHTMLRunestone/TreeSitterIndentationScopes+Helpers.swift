import Runestone

public extension TreeSitterIndentationScopes {
    static var html: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(indent: ["start_tag", "element"], outdent: ["end_tag"])
    }
}
