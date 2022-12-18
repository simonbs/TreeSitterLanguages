import Foundation

public enum Query {
    public static var highlightsFileURL: URL {
        return url(named: "highlights")
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
