import Foundation
import Runestone
import TreeSitterTypeScript
import TreeSitterTypeScriptQueries

public extension TreeSitterLanguage {
    static var typeScript: TreeSitterLanguage {
        let highlightsQuery = combinedQuery(fromFilesAt: [TreeSitterTypeScriptQueries.Query.highlightsFileURL, TreeSitterTypeScriptQueries.Query.highlightsFileURL])
        return TreeSitterLanguage(tree_sitter_typescript(), highlightsQuery: highlightsQuery, indentationScopes: nil)
    }
}

private extension TreeSitterLanguage {
    private static func combinedQuery(fromFilesAt fileURLs: [URL]) -> TreeSitterQuery? {
        let rawQuery = fileURLs.compactMap { try? String(contentsOf: $0) }.joined(separator: "\n")
        if !rawQuery.isEmpty {
            return TreeSitterQuery(string: rawQuery)
        } else {
            return nil
        }
    }
}
