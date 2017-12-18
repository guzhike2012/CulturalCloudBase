#
#  Be sure to run `pod spec lint OMTLibs.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = "CulturalCloudBase"
  s.version      = "0.0.1"
  s.summary      = "CulturalCloudBase ios private libs"
  s.description  = "private libs create by OMT"
  s.homepage     = "https://github.com/liuf1986/CulturalCloudBase"
  s.license      = "MIT"
  s.author             = { "liuf" => "zglf1986@126.com" }
  s.platform     = :ios
  s.platform     = :ios, "9.0"
  s.ios.deployment_target = "9.0"
  s.source       = { :git => "https://github.com/liuf1986/CulturalCloudBase.git", :tag => s.version}
  s.ios.vendored_frameworks = "CulturalCloudBase/*.{framework}"
#s.resources = "CulturalCloudBase/*.{bundle}"
#s.source_files  = "CulturalCloudBase/*.{h}"
#s.public_header_files = "CulturalCloudBase/*.{h}"
#s.libraries =  "z","sqlite3"
  s.frameworks = "CoreLocation"
  s.requires_arc = true
  s.dependency "OMTLibs"
end
