// swift-tools-version:5.5
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "Anymo",
    platforms: [
        .iOS(.v11)
    ],
    products: [
        .library(
            name: "Anymo",
            type: .dynamic,
            targets: ["Anymo"]),
    ],
    dependencies: [
        .package(url: "https://github.com/kean/Nuke.git", from: "10.0.0"),
    ],
    targets: [
        .target(
            name: "Anymo",
            dependencies: [
                "AnymoCore",
                "Nuke"
            ]),
        .binaryTarget(name: "AnymoCore", path: "AnymoCore/release/AnymoCore.xcframework")
    ]
)
