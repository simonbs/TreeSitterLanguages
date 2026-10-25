import Runestone
import TreeSitterPowerShell
import TreeSitterPowerShellQueries

public extension TreeSitterLanguage {
    static var powerShell: TreeSitterLanguage {
        let highlightsQuery = TreeSitterLanguage.Query(contentsOf: TreeSitterPowerShellQueries.Query.highlightsFileURL)
        return TreeSitterLanguage(tree_sitter_powershell(), highlightsQuery: highlightsQuery)
    }
}
