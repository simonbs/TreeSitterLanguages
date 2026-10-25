import Runestone
import TreeSitterRON
import TreeSitterRONQueries

public extension TreeSitterLanguage {
    static var ron: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterRONQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_ron(), highlightsQuery: highlightsQuery)
    }
}
