import Runestone
import TreeSitterAWK
import TreeSitterAWKQueries

public extension TreeSitterLanguage {
    static var awk: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterAWKQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_awk(), highlightsQuery: highlightsQuery)
    }
}
