import Runestone
import TreeSitterOCaml
import TreeSitterOCamlQueries

public extension TreeSitterLanguage {
    static var ocaml: TreeSitterLanguage {
        let foldsQuery = TreeSitterOCamlQueries.Query.foldsFileURL.flatMap { TreeSitterLanguage.Query(contentsOf: $0) }
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterOCamlQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_ocaml(), highlightsQuery: highlightsQuery, foldsQuery: foldsQuery)
    }
}
