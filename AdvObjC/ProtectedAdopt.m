//
//  ProtectedAdopt.m
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "ProtectedAdopt.h"

@implementation ProtectedAdopt

- (void)startAction
{
    ProtectedClass *protectedClass = [[ProtectedClass alloc]init];
    [protectedClass setDelegate:self];
    [protectedClass printDetails];
}


-(void)processCompleted
{
    NSLog(@"Printing Process Completed");
}

@end
