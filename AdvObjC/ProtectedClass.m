//
//  ProtectedClass.m
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "ProtectedClass.h"
#import "NSString+ReverseString.h"

@implementation ProtectedClass

- (void)printDetails
{
    NSLog(@"Printing Details");
    [delegate processCompleted];
    
    NSString *string = [[NSString alloc]init];
    [string reverseString:@"Kumar"];
    [string substringFromIndex:1];
    
}

- (void) setDelegate:(id)newDelegate
{
    delegate = newDelegate;
}




@end
