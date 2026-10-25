import Runestone
import TreeSitterDart
import TreeSitterDartQueries

public extension TreeSitterLanguage {
    static var dart: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterDartQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_dart(), highlightsQuery: highlightsQuery)
    }
}
