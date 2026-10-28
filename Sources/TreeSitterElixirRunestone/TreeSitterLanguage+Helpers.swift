import Runestone
import TreeSitterElixir
import TreeSitterElixirQueries

public extension TreeSitterLanguage {
    static var elixir: TreeSitterLanguage {
        let foldsQuery = TreeSitterElixirQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterElixirQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_elixir(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
