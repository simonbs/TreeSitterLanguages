import Runestone
import TreeSitterBash
import TreeSitterBashQueries

public extension TreeSitterLanguage {
    static var elixir: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterElixirQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_elixir(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: .elixir)
    }
}
