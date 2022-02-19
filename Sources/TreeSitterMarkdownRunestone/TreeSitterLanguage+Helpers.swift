import Runestone
import TreeSitterMarkdown
import TreeSitterMarkdownQueries

public extension TreeSitterLanguage {
    static var markdown: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterMarkdownQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterQuery(contentsOf: TreeSitterMarkdownQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_markdown(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, indentationScopes: nil)
    }
}
