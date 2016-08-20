Pod::Spec.new do |s|
  s.name             = "NHFTouchTableView"
  s.version          = "1.0.1"
  s.summary          = "为UITableView上边加上Touch的响应事件"
  s.homepage         = "https://github.com/nhfc99/NHFTouchTableView"  
  s.license          = 'MIT'
  s.author           = {"牛宏飞"=>"nhfc99@163.com"}  
  s.source           = {:git => "https://github.com/nhfc99/NHFTouchTableView.git",:tag => s.version.to_s}

  s.platform     = :ios, '8.0'
  s.ios.deployment_target = '8.0'
  # s.osx.deployment_target = '10.7'
  s.requires_arc = true
  s.source_files = 'TouchTableView/*.{h,m}'  
  s.frameworks = 'Foundation', 'CoreGraphics', 'UIKit'

end
