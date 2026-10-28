import Runestone
import TreeSitterPascal
import TreeSitterPascalQueries

public extension TreeSitterLanguage {
    static var pascal: TreeSitterLanguage {
        let foldsQuery = TreeSitterPascalQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterPascalQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_pascal(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
