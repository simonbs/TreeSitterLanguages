import Runestone
import TreeSitterMarkdownInline
import TreeSitterMarkdownInlineQueries

public extension TreeSitterLanguage {
    static var markdownInline: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterMarkdownInlineQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterMarkdownInlineQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_markdown_inline(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
