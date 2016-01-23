//
//  Triangle.m
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "Rectangle.h"

@implementation Rectangle

- (id)initWithLength:(float)rLength andBreadth:(float)rBreadth
{
    length = rLength;
    breadth = rBreadth;
    return self;
}

- (void)calculateArea
{
    area = length * breadth;
}
@end
