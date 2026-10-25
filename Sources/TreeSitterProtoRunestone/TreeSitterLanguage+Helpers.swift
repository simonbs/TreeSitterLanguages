import Runestone
import TreeSitterProto
import TreeSitterProtoQueries

public extension TreeSitterLanguage {
    static var proto: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterProtoQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_proto(), highlightsQuery: highlightsQuery)
    }
}
