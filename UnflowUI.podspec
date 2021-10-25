Pod::Spec.new do |s|
    s.name                  = 'Unflow'
    s.version               = '0.0.6'
    s.summary               = 'A no-code tool for marketers to ship screen quickly'
    s.source                = { :git => "git@github.com:monaru-inc/tmp-anymo-swift-package.git", :branch => "main" }
    s.homepage              = 'https://www.unflow.com'
    s.license               = { :type => "Commercial", :text => "Copyright 2021 Letkit Inc." }
    s.author                = { 'Unflow' => 'team@monaru.io' }

    s.platform              = :ios
    s.swift_version         = '5.5'
    s.ios.deployment_target = '11.0'
    s.vendored_frameworks   = 'Unflow.xcframework'

    # Remove these once we have added arm64 simulator slices to our XCFramework
    s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end