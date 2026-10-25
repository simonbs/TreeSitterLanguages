import Runestone
import TreeSitterKotlin
import TreeSitterKotlinQueries

public extension TreeSitterLanguage {
    static var kotlin: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterKotlinQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_kotlin(), highlightsQuery: highlightsQuery)
    }
}
