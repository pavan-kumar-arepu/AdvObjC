//
//  Triangle.h
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "Shape.h"

@interface Rectangle : Shape
{
    float length;
    float breadth;
}

- (id)initWithLength:(float)rLength andBreadth:(float)rBreadth;

@end
