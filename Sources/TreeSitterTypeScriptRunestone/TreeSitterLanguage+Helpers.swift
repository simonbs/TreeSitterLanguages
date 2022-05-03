import Foundation
import Runestone
import TreeSitterTypeScript
import TreeSitterTypeScriptQueries
import TreeSitterJavaScriptQueries

public extension TreeSitterLanguage {
    static var typeScript: TreeSitterLanguage {
        let highlightsQuery = combinedQuery(fromFilesAt: [
            TreeSitterJavaScriptQueries.Query.highlightsFileURL,
            TreeSitterTypeScriptQueries.Query.highlightsFileURL
        ])
        return TreeSitterLanguage(tree_sitter_typescript(), highlightsQuery: highlightsQuery, injectionsQuery: nil, indentationScopes: nil)
    }
}

private extension TreeSitterLanguage {
    private static func combinedQuery(fromFilesAt fileURLs: [URL]) -> TreeSitterLanguage.Query? {
        let rawQuery = fileURLs.compactMap { try? String(contentsOf: $0) }.joined(separator: "\n")
        if !rawQuery.isEmpty {
            return TreeSitterLanguage.Query(string: rawQuery)
        } else {
            return nil
        }
    }
}
