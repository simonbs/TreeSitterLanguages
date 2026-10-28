import Runestone
import TreeSitterLaTeX
import TreeSitterLaTeXQueries

public extension TreeSitterLanguage {
    static var latex: TreeSitterLanguage {
        let foldsQuery = TreeSitterLaTeXQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterLaTeXQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterLaTeXQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_latex(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, foldsQuery: foldsQuery)
    }
}
