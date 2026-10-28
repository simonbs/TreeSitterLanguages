import Foundation

public enum Query {
    /// Optional folding rules; languages without a suitable source return nil.
    public static var foldsFileURL: URL? {
        return Bundle.module.url(forResource: "folds", withExtension: "scm")
    }

    public static var highlightsJSXFileURL: URL {
        return url(named: "highlights-jsx")
    }

    public static var highlightsParamsFileURL: URL {
        return url(named: "highlights-params")
    }

    public static var highlightsFileURL: URL {
        return url(named: "highlights")
    }

    public static var injectionsFileURL: URL {
        return url(named: "injections")
    }

    public static var localsFileURL: URL {
        return url(named: "locals")
    }

    public static var tagsFileURL: URL {
        return url(named: "tags")
    }
}

private extension Query {
    static func url(named filename: String) -> URL {
        return Bundle.module.url(forResource: filename, withExtension: "scm")!
    }
}
