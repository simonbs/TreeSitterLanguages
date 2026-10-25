import Runestone
import TreeSitterFortran
import TreeSitterFortranQueries

public extension TreeSitterLanguage {
    static var fortran: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterFortranQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_fortran(), highlightsQuery: highlightsQuery)
    }
}
