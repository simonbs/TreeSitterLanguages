import Runestone
import TreeSitterPerl
import TreeSitterPerlQueries

public extension TreeSitterLanguage {
    static var perl: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterPerlQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_perl(), highlightsQuery: highlightsQuery)
    }
}
