import Runestone
import TreeSitterHTML
import TreeSitterHTMLQueries

@available(iOS 14.0, *)
public extension TreeSitterLanguage {
    static var html: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterHTMLQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterHTMLQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_html(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .html)
    }
}
