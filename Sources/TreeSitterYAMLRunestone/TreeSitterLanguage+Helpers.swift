import Runestone
import TreeSitterYAML
import TreeSitterYAMLQueries

public extension TreeSitterLanguage {
    static var yaml: TreeSitterLanguage {
        let foldsQuery = TreeSitterYAMLQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterYAMLQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_yaml(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
