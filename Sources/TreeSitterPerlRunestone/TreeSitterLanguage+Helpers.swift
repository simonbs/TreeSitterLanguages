import Runestone
import TreeSitterPerl
import TreeSitterPerlQueries

public extension TreeSitterLanguage {
    static var perl: TreeSitterLanguage {
        let foldsQuery = TreeSitterPerlQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterPerlQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_perl(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
