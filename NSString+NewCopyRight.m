//
//  NSString+NewCopyRight.m
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "NSString+NewCopyRight.h"

@implementation NSString (NewCopyRight)

+ (NSString *)myOwnCopyRight:(NSString *)yourString
{
    NSLog(@"Your new copyright is:%@",yourString);
    return yourString;
}

@end
