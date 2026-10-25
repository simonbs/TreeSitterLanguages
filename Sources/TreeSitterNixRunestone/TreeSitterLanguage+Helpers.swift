import Runestone
import TreeSitterNix
import TreeSitterNixQueries

public extension TreeSitterLanguage {
    static var nix: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterNixQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_nix(), highlightsQuery: highlightsQuery)
    }
}
