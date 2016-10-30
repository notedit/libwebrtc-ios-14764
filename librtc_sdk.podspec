Pod::Spec.new do |s|
  s.name         = "WebRTC"
  s.version      = "14764"
  s.summary      = "WebRTC Video Streaming Peer Connection API's. An iOS WebRTC demo application hosted on App Engine. Builds by Pristine.io"
  s.description      = <<-DESC
                       The WebRTC native APIs are implemented based on the following [WebRTC spec.](http://dev.w3.org/2011/webrtc/editor/webrtc.html) 

                       The code that implements WebRTC native APIs (including the Stream and the PeerConnection APIs) are available in [libjingle](https://code.google.com/p/libjingle/source/browse/#svn%2Ftrunk%2Ftalk%2Fapp%2Fwebrtc). A [sample client application](https://code.google.com/p/libjingle/source/browse/#svn%2Ftrunk%2Ftalk%2Fexamples%2Fpeerconnection%2Fclient) is also provided there. 

                       The target audience of this document are those who want to use WebRTC Native APIs to develop native RTC applications.
                       DESC
  s.platform = :ios, '8.0'
  s.public_header_files =  'WebRTC/*.h'
  s.preserve_paths = 'WebRTC/*.h'
  s.vendored_libraries = 'librtc_sdk_objc.a'
  s.framework = 'AVFoundation', 'AudioToolbox', 'CoreGraphics', 'CoreMedia', 'GLKit', 'UIKit', 'VideoToolbox'
  s.libraries = 'c', 'sqlite3', 'stdc++'
  s.requires_arc = true
  s.source   = { :git => 'https://github.com/notedit/libwebrtc-ios-14764.git'}

  s.xcconfig  =  { 'LIBRARY_SEARCH_PATHS' => '"$(PODS_ROOT)/WebRTC/"' }

end
