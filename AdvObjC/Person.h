//
//  Person.h
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "ViewController.h"
#import "ProtectedAdopt.h"


@interface Person : UIViewController <ProtocolDelegateHonda>
{
    NSString *personName;
    NSInteger personAge;
}
@property (nonatomic,strong) NSString *name;


- (id)initWithName:(NSString *)name andAge:(NSInteger)age;
- (void)print;


@end
