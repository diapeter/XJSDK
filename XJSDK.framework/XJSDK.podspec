Pod::Spec.new do |s|
  s.name             = "XJSDK.podspec"
  s.version          = "1.0.0"
  s.summary          = "A marquee view used on iOS."
  s.description      = <<-DESC
                       It is a marquee view used on iOS, which implement by Objective-C.
                       DESC
  s.homepage         = "https://github.com/diapeter/XJSDK"
  s.license          = 'MIT'
  s.author           = { "liangyi" => "15901839273@163.com" }
  s.source           = { :git => "https://github.com/diapeter/XJSDK.git", :tag => "1.0.0" }

  s.platform     = :ios
  # s.ios.deployment_target = '5.0'
  # s.osx.deployment_target = '10.7'
  s.requires_arc = true

  s.vendored_frameworks = 'Framework.framework'
  s.frameworks = 'Foundation'

end
