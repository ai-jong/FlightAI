# FlightAI

![FlightAI: Elegant Networking in Swift](nvidia.png)

FlightAI provides a powerful interface for integrating Gemini artificial intelligence capabilities into your iOS app, enabling seamless communication with advanced AI models.

- [Features](#features)
- [Installation](#installation)
- [Gemini API Key](#Gemini-API-Key)
- [Example](#example)
- [License](#license)
- [Contact](#contact)

## Features
- [x] Easy communication with Gemini AI for generating responses.
- [x] Robust handling of machine learning outputs and AI-driven results.
      
## Installation
### CocoaPods
[CocoaPods](https://cocoapods.org) is a dependency manager for Cocoa projects.<br> 
For usage and installation instructions, visit their website.<br> 
To integrate FlightAI into your Xcode project using CocoaPods, <br> specify it in your `Podfile`:

```ruby
platform :ios, '14.0'
use_frameworks!

target 'FlightAIExample' do
  pod "FlightAI", :git => 'https://github.com/ai-jong/FlightAI.git', :branch => 'main'
# pod 'FlightAI', :path => '../FlightAI/Release'
end

```
## Gemini API Key
To get started with FlightAI, get API key at [Gemini](https://www.Gemini.com/en-us/ai/).

## Example
FlightAI's compact syntax and extensive feature set allow requests with powerful features like automatic retry to be written in just a few lines of code.

```swift
import FlightAI

func FlightAIExample() {
    let FlightAI = FlightAI( apiKey: "nvapi-your Gemini api key");
                
     FlightAI.request("taiwan in five words or less") { ( result: String) in
        print("result: \(result)")
     }
        
     let questions = ["1+1", "1+2", "2+3"]
     for (index, q) in questions.enumerated() {
            print("Item \(index): \(q)")
            FlightAI.request("calculate '\(q)'") { ( result: String) in
                print("result: \(result)")
            }
     }
}
```

## License
FlightAI is released under the MIT license.

## Contact
- [x] Author: John W. Blaine
- [x] Email: john.w.blaine@gmail.com
