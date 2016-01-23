//
//  Square.m
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "Square.h"

@implementation Square

- (id)initWithSide:(float)side{
    length = side;
    return self;
}

- (void)calculateArea{
    area = length * length;
}

- (void)printArea
{
    NSLog(@"The area of square is %f", area);
}

@end
