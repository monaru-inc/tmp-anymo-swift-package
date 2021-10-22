#
#  Be sure to run `pod spec lint Anymo.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|
    s.name                  = 'Anymo'
    s.version               = '0.0.6'
    s.summary               = 'A no-code tool for marketers to ship screen quickly'
    s.source                = { :git => "git@github.com:monaru-inc/ci-playground.git", :branch => "main" }
    s.homepage              = 'https://www.unflow.com'
    s.license               = { :file => 'LICENSE.md' }
    s.author                = { 'Anymo' => 'team@monaru.com' }

    s.swift_version         = "5.5"

    s.platform              = :ios
    s.ios.deployment_target = '13.0'
    s.vendored_frameworks   = 'Anymo.xcframework'
    s.vendored_frameworks   = 'AnymoCore.xcframework'

    # Remove these once we have added arm64 simulator slices to our XCFramework
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

    # Maybe we can also remove this if it's in the vendored Anymo framework
    s.dependency 'Nuke'
end
