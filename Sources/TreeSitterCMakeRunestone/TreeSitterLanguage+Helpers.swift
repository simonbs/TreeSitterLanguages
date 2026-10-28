import Runestone
import TreeSitterCMake
import TreeSitterCMakeQueries

public extension TreeSitterLanguage {
    static var cmake: TreeSitterLanguage {
        let foldsQuery = TreeSitterCMakeQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterCMakeQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_cmake(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
