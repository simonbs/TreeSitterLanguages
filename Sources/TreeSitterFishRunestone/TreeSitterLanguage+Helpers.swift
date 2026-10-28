import Runestone
import TreeSitterFish
import TreeSitterFishQueries

public extension TreeSitterLanguage {
    static var fish: TreeSitterLanguage {
        let foldsQuery = TreeSitterFishQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterFishQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_fish(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
