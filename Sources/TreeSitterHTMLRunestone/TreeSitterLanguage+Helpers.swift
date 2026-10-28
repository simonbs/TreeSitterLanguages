import Runestone
import TreeSitterHTML
import TreeSitterHTMLQueries

public extension TreeSitterLanguage {
    static var html: TreeSitterLanguage {
        let foldsQuery = TreeSitterHTMLQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterHTMLQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterHTMLQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_html(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: .html, foldsQuery: foldsQuery)
    }
}
