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
            targets: ["Anymo"]
        ),
    ],
    targets:
        .target(
            name: "Anymo",
            dependencies: [
                "AnymoCore",
                "Anymo"
            ]
        ),
        .binaryTarget(name: "Anymo", path: "Anymo.xcframework"),
        .binaryTarget(name: "AnymoCore", path: "AnymoCore.xcframework")
    ]
)
