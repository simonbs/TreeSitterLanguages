import Runestone
import TreeSitterCSharp
import TreeSitterCSharpQueries

public extension TreeSitterLanguage {
    static var cSharp: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterCSharpQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_c_sharp(), highlightsQuery: highlightsQuery, indentationScopes: nil)
    }
}
