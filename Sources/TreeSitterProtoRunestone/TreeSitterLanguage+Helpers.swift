import Runestone
import TreeSitterProto
import TreeSitterProtoQueries

public extension TreeSitterLanguage {
    static var proto: TreeSitterLanguage {
        let foldsQuery = TreeSitterProtoQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterProtoQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_proto(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
