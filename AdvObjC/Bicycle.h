//
//  Bicycle.h
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "StreetRulesProtocol.h"


@interface Bicycle : NSObject<StreetRulesProtocol>
- (void)startPedaling;
- (void)removeFrontWheel;
- (void)lockToStructure:(id)theStructure;
@end
