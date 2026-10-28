import Runestone
import TreeSitterLua
import TreeSitterLuaQueries

public extension TreeSitterLanguage {
    static var lua: TreeSitterLanguage {
        let foldsQuery = TreeSitterLuaQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterLuaQueries.Query.highlightsFileURL)
        let injectionsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterLuaQueries.Query.injectionsFileURL)
        return TreeSitterLanguage(tree_sitter_lua(), highlightsQuery: highlightsQuery, injectionsQuery: injectionsQuery, foldsQuery: foldsQuery)
    }
}
