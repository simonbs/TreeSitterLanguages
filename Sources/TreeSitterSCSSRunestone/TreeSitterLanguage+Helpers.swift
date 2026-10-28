import Runestone
import TreeSitterSCSS
import TreeSitterSCSSQueries

public extension TreeSitterLanguage {
    static var scss: TreeSitterLanguage {
        let foldsQuery = TreeSitterSCSSQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterSCSSQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_scss(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
