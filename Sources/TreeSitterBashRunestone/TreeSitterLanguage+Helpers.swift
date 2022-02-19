import Runestone
import TreeSitterBash
import TreeSitterBashQueries

public extension TreeSitterLanguage {
    static var bash: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterBashQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_bash(), highlightsQuery: highlightsQuery, indentationScopes: .bash)
    }
}
