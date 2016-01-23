//
//  Square.h
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "Shape.h"

@interface Square : Shape
{
    float length;
}

- (id)initWithSide:(float)side;

- (void)calculateArea;


@end
