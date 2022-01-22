import Runestone
import TreeSitterCSS
import TreeSitterCSSQueries

public extension TreeSitterLanguage {
    static var css: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterCSSQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_css(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: .css)
    }
}
