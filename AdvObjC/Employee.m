//
//  Employee.m
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "Employee.h"

@interface Employee ()

@end

@implementation Employee

- (id)initWithName:(NSString *)name andAge:(NSInteger)age
      andEducation: (NSString *)education
{
    personName = name;
    personAge = age;
    employeeEducation = education;
    return self;
}

- (void)print
{
    NSLog(@"Name: %@", personName);
    NSLog(@"Age: %ld", personAge);
    NSLog(@"Education: %@", employeeEducation);
}

-(void)viewWillAppear:(BOOL)animated
{
    
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    Person *person = [[Person alloc]initWithName:@"Raj" andAge:5];
    [person print];
    
    Employee *employee = [[Employee alloc]initWithName:@"Raj"
                                                andAge:5 andEducation:@"MBA"];
    [employee print];

    // Do any additional setup after loading the view.
}




- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
