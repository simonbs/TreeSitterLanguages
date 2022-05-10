import Runestone
import TreeSitterLaTeX
import TreeSitterLaTeXQueries

public extension TreeSitterLanguage {
    static var latex: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterLaTeXQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterLaTeXQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_latex(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery)
    }
}
