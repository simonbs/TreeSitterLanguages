import Runestone
import TreeSitterNix
import TreeSitterNixQueries

public extension TreeSitterLanguage {
    static var nix: TreeSitterLanguage {
        let foldsQuery = TreeSitterNixQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterNixQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_nix(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
