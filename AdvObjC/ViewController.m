//
//  ViewController.m
//  AdvObjC
//
//  Created by Pavankumar Arepu on 23/09/15.
//  Copyright (c) 2015 PPAM. All rights reserved.
//

#import "ViewController.h"
#import "NSString+ReverseString.h"


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    NSString *stringLiteral = @"Pavankumar";
    
    NSString *revereseString = [stringLiteral reverseString:stringLiteral];
    
    NSLog(@"Reverese String :%@",revereseString);
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
