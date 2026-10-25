import Runestone
import TreeSitterGroovy
import TreeSitterGroovyQueries

public extension TreeSitterLanguage {
    static var groovy: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterGroovyQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_groovy(), highlightsQuery: highlightsQuery)
    }
}
