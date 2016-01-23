//
//  ProtectedClass.h
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ProtocolDelegateDiscover

- (void)processCompleted;

@end

@protocol ProtocolDelegateHonda

- (void)processCompleted;

@end

@interface ProtectedClass : NSObject
{
    id delegate;
}

- (void) printDetails;
- (void) setDelegate:(id)newDelegate;

@end

@interface Pulsur : NSObject <ProtocolDelegateDiscover,ProtocolDelegateHonda>

@end



