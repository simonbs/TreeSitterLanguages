import Runestone
import TreeSitterOCaml
import TreeSitterOCamlQueries

public extension TreeSitterLanguage {
    static var ocaml: TreeSitterLanguage {
        let highlightsQuery = TreeSitterQuery(contentsOf: TreeSitterOCamlQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_ocaml(), highlightsQuery: highlightsQuery, indentationScopes: nil)
    }
}
