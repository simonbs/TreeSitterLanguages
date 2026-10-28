import Runestone
import TreeSitterMarkdownInline
import TreeSitterMarkdownInlineQueries

public extension TreeSitterLanguage {
    static var markdownInline: TreeSitterLanguage {
        let foldsQuery = TreeSitterMarkdownInlineQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterMarkdownInlineQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterMarkdownInlineQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_markdown_inline(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, foldsQuery: foldsQuery)
    }
}
