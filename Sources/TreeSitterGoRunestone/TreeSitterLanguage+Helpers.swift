import Runestone
import TreeSitterGo
import TreeSitterGoQueries

public extension TreeSitterLanguage {
    static var go: TreeSitterLanguage {
        let foldsQuery = TreeSitterGoQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterGoQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_go(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
