//
//  Employee.h
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "Person.h"

@interface Employee : Person
{
        NSString *employeeEducation;
}
- (id)initWithName:(NSString *)name andAge:(NSInteger)age
      andEducation:(NSString *)education;
- (void)print;
@end
