//
//  FlightAI.h
//  FlightAI
//
//  Created by John Blaine on 10/4/24.
//

#import <Foundation/Foundation.h>

//! Project version number for FlightAI.
FOUNDATION_EXPORT double FlightAIVersionNumber;
FOUNDATION_EXPORT const unsigned char FlightAIVersionString[];


NS_ASSUME_NONNULL_BEGIN

@interface FlightAI : NSObject


- (void)flightsWithAirportCode:(NSString*)code timeZone:(NSString*)zn arrival:(NSString*)arrive freq:(NSInteger)frq response:(void(^)(NSDictionary *d) )cb;
- (void)refresh:(void(^)(NSDictionary *d))cb;
- (void)clear;


//- (void)infoWithAirlineCode:(NSString*)air flightNumber:(NSString*)fight response:(void(^)(NSDictionary *d) )cb;
- (void)infoWithFlightNum:(NSString*)flight response:(void(^)(NSDictionary *d) )cb;
- (void)infoWithFlightID:(NSString*)url response:(void(^)(NSDictionary *d) )cb;

@end

NS_ASSUME_NONNULL_END
