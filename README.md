# FlightAI

![FlightAI: Elegant Networking in Swift](nvidia.png)

In today's fast-paced world, having real-time access to flight status is essential for travelers, airlines, and app developers. FlightAI offers an advanced solution for tracking flight information in iOS applications with ease. In this guide, we'll cover the basics of integrating FlightAI into your iOS project, with practical examples and key features that will help you get up and running quickly.

- [Features](#features)
- [Installation](#installation)
- [Example](#example)
- [License](#license)
- [Contact](#contact)

## Features
- [x] Real-time flight status is crucial for modern travel apps.
- [x] FlightAI provides a robust, AI-powered solution for tracking and monitoring flights.
- [x] Installing and integrating FlightAI is quick and straightforward.
      
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

## Example
FlightAI's compact syntax and extensive feature set allow requests with powerful features like automatic retry to be written in just a few lines of code.

```swift
import FlightAI

func getFlightStatus() {
  let flightAI = FlightAI()
  
  flightAI.getStatus(forFlight: "AA123", date: "2024-10-04") { status in
    print("Flight Status: \(status)")
  }
}
```

## License
FlightAI is released under the MIT license.

## Contact
- [x] Author: John W. Blaine
- [x] Email: john.w.blaine@gmail.com
