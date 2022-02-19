import Runestone
import TreeSitterC
import TreeSitterCQueries

public extension TreeSitterLanguage {
    static var c: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterCQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_c(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: .c)
    }
}
