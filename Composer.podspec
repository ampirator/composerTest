Pod::Spec.new do |s|
  s.name         = "Composer"
  s.version      = "0.0.1"
  s.summary      = "Composer of piano.io."
  s.description  = <<-DESC
                    Mobile composer of piano.io
                   DESC

  s.homepage     = "http://vx.piano.io/products#composer"
  s.license      = { :type => "Apache License, Version 2.0", :file => "LICENSE" }
  s.author       = { "sergey.bayborodov" => "sergey.bayborodov@piano.io" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/ampirator/composerTest.git", :tag => "#{s.version}" }

  #s.source_files  = 
  #s.exclude_files = "Classes/Exclude"
  # s.public_header_files = "Classes/**/*.h"
  # s.source_files = "LICENSE", "README", "Composer.framework/Headers/*.h", "Login.framework/Headers/*.h"
  # s.public_header_files = "Composer.framework/Headers/*.h", "Login.framework/Headers/*.h"
  # s.resource  = "icon.png"
  # s.resources = "Composer.framework", "Login.framework"
  # s.preserve_paths = "FilesToSave", "MoreFilesToSave"

  # s.framework  = "SomeFramework"
  # s.frameworks = "Composer", "Login"

  # s.library   = "iconv"
  # s.libraries = "iconv", "xml2"

  # s.requires_arc = true
  # s.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  # s.dependency "JSONKit", "~> 1.4"
  s.ios.vendored_frameworks = "Composer.framework", "Login.framework"
end
