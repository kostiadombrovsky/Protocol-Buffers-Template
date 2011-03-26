//
//  ProtobuffersShowcaseAppDelegate.m
//  ProtobuffersShowcase
//
//  Created by Kostia Dombrovsky on 12.02.11.
//  Copyright 2011 DriversEd.com. All rights reserved.
//

#import "ProtobuffersShowcaseAppDelegate.h"
#import "ProtobuffersShowcaseViewController.h"

@implementation ProtobuffersShowcaseAppDelegate

@synthesize window;
@synthesize viewController;

//==================================================================================================
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [self.window addSubview:viewController.view];
    [self.window makeKeyAndVisible];

    return YES;
}

//==================================================================================================
- (void) dealloc
{
    [viewController release];
    [window release];
    [super dealloc];
}


@end
