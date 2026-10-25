import Runestone
import TreeSitterPascal
import TreeSitterPascalQueries

public extension TreeSitterLanguage {
    static var pascal: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterPascalQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_pascal(), highlightsQuery: highlightsQuery)
    }
}
