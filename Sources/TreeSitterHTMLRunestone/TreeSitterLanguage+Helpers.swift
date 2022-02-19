import Runestone
import TreeSitterHTML
import TreeSitterHTMLQueries

public extension TreeSitterLanguage {
    static var html: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterHTMLQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterQuery(contentsOf: TreeSitterHTMLQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_html(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .html)
    }
}
