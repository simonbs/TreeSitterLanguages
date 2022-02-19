import Runestone
import TreeSitterCSS
import TreeSitterCSSQueries

public extension TreeSitterLanguage {
    static var css: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterCSSQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_css(), highlightsQuery: highlightsQuery, indentationScopes: .css)
    }
}
