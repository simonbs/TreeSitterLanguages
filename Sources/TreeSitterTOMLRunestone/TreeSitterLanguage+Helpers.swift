import Runestone
import TreeSitterTOML
import TreeSitterTOMLQueries

public extension TreeSitterLanguage {
    static var toml: TreeSitterLanguage {
        let foldsQuery = TreeSitterTOMLQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterTOMLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_toml(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
