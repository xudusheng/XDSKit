#
# Be sure to run `pod lib lint XDSKit.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'XDSKit'
  s.version          = '0.1.2'
  s.summary          = '收集常用的框架，便于快捷开发'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: 收集常用的框架，便于快捷开发，后续请继续添加
                       DESC

  s.homepage         = 'https://github.com/xudusheng/XDSKit'
  s.license          = { :type => 'MIT'}
  s.author           = { 'xudusheng' => '597132100@qq.com' }
  s.source           = { :git => 'https://github.com/xudusheng/XDSKit.git', :tag => s.version.to_s }
  
  s.requires_arc = true

  s.ios.deployment_target = '7.0'

  s.source_files = 'XDSKit/Classes/**/*'
  
  # s.resource_bundles = {  
  #   'XDSKit' => ['XDSKit/Assets/*.png']
  # }

  s.public_header_files = 'XDSKit/Classes/**/*.h'
  s.frameworks = 'UIKit'

  # s.dependency 'AFNetworking', '~> 2.3'
end
