import Runestone
import TreeSitterCMake
import TreeSitterCMakeQueries

public extension TreeSitterLanguage {
    static var cmake: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterCMakeQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_cmake(), highlightsQuery: highlightsQuery)
    }
}
