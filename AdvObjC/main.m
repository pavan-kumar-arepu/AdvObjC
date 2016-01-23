//
//  main.m
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "Person.h"
#import "Employee.h"
#import "Square.h"
#import "Rectangle.h"
#import "NSString+CopyRights.h"
#import "NSString+ReverseString.h"
#import "ProtectedClass.h"
#import "ProtectedAdopt.h"
#import "NSString+NewCopyRight.h"

#import "Person.h"
#import "Car.h"



#import "Bicycle.h"

int main(int argc, char * argv[])
{
    @autoreleasepool {
        
        //Inheritance:
//        
//        Person *person = [[Person alloc]initWithName:@"Raj" andAge:5];
//        [person print];
//        
//        Employee *employee = [[Employee alloc]initWithName:@"Raj"
//                                                    andAge:5 andEducation:@"MBA"];
//        [employee print];
        
//        //Polymorphism:
////        
//        Shape *square = [[Square alloc]initWithSide:10.0];
//        
//        [square calculateArea];
//        [square printArea];
//        Shape *rect = [[Rectangle alloc]
//                       initWithLength:10.0 andBreadth:5.0];
//        [rect calculateArea];
//        [rect printArea];
        
        
        NSString *simpleString = @"SimpleString";
        NSLog(@"Simple String: %@",simpleString);
        
        NSString *copyRightString = [NSString myOwnCopyRight:@"ppam"];
        NSLog(@"copyRightString: %@",copyRightString);
        
        
//
//        //Categories:
//        
//        NSString *string = [NSString getCopyRightString];
//        NSLog(@"Copy Right String :%@",string);
//        
//        
//        //Protocols:
//        
//             ProtectedAdopt *protedAdop = [[ProtectedAdopt alloc]init];
//            [protedAdop startAction];
//        
//        Bicycle *bike = [[Bicycle alloc] init];
//        [bike startPedaling];
//        [bike signalLeftTurn];
//        [bike signalStop];
//        [bike lockToStructure:nil];
//
        
 
    
        
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
}
