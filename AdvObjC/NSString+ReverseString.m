//
//  NSString+ReverseString.m
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "NSString+ReverseString.h"

@implementation NSString (ReverseString)

-(NSString *) reverseString:(NSString *)yourString
{
    NSMutableString *reversedStr = [NSMutableString stringWithCapacity:[yourString length]];
    
    [yourString enumerateSubstringsInRange:NSMakeRange(0,[yourString length])
                                   options:(NSStringEnumerationReverse | NSStringEnumerationByComposedCharacterSequences)
                                usingBlock:^(NSString *substring, NSRange substringRange, NSRange enclosingRange, BOOL *stop)
     {
         [reversedStr appendString:substring];
     }];
    return reversedStr;
}

@end
