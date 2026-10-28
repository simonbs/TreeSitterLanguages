import Runestone
import TreeSitterBash
import TreeSitterBashQueries

public extension TreeSitterLanguage {
    static var bash: TreeSitterLanguage {
        let foldsQuery = TreeSitterBashQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterBashQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_bash(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: .bash, foldsQuery: foldsQuery)
    }
}
