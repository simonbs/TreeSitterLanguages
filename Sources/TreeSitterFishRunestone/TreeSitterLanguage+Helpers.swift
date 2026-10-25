import Runestone
import TreeSitterFish
import TreeSitterFishQueries

public extension TreeSitterLanguage {
    static var fish: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterFishQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_fish(), highlightsQuery: highlightsQuery)
    }
}
