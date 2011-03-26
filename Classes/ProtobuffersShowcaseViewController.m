//
//  ProtobuffersShowcaseViewController.m
//  ProtobuffersShowcase
//
//  Created by Kostia Dombrovsky on 12.02.11.
//  Copyright 2011 DriversEd.com. All rights reserved.
//

#import "ProtobuffersShowcaseViewController.h"

//==================================================================================================
@interface ProtobuffersShowcaseViewController()
    @property (nonatomic, retain) NSMutableArray* ciklumOffices;
@end

//==================================================================================================
@implementation ProtobuffersShowcaseViewController

@synthesize tableView;
@synthesize ciklumOffices;

//==================================================================================================
- (void) dealloc
{
    self.tableView = nil;
    [super dealloc];
}

//==================================================================================================
- (void) viewDidLoad
{
    [super viewDidLoad];
    
}

@end
