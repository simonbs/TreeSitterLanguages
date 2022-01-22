import Runestone

public extension TreeSitterIndentationScopes {
    static var yaml: TreeSitterIndentationScopes {
        return TreeSitterIndentationScopes(indent: ["block_mapping_pair"], whitespaceDenotesBlocks: true)
    }
}
