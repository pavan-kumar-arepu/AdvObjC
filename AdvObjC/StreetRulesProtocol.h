//
//  StreetRulesProtocol.h
//  
//
//  Created by Pavankumar Arepu on 23/01/2016.
//
//

#import <Foundation/Foundation.h>

@protocol StreetRulesProtocol <NSObject>
@required
- (void)signalStop;
- (void)signalLeftTurn;
- (void)signalRightTurn;
- (void)driveSlow;
@optional
-(void)dummyMethod;

@end
