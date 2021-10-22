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
            targets: ["Anymo"]),
    ],
    targets: [
        .target(
          name: "Anymo",
          dependencies: [
            .target(name: AnymoTarget)
          ]
        )
        .target(
            name: "AnymoTarget",
            dependencies: [
                "AnymoCore",
                "AnymoUI"
            ]),
        .binaryTarget(name: "AnymoUI", path: "Anymo.xcframework"),
        .binaryTarget(name: "AnymoCore", path: "AnymoCore.xcframework")
    ]
)
