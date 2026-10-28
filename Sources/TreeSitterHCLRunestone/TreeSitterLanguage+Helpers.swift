import Runestone
import TreeSitterHCL
import TreeSitterHCLQueries

public extension TreeSitterLanguage {
    static var hcl: TreeSitterLanguage {
        let foldsQuery = TreeSitterHCLQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterHCLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_hcl(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
