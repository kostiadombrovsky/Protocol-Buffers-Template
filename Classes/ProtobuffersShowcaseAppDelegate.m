//
//  ProtobuffersShowcaseAppDelegate.m
//  ProtobuffersShowcase
//
//  Created by Kostia Dombrovsky on 12.02.11.
//  Copyright 2011 DriversEd.com. All rights reserved.
//

#import "ProtobuffersShowcaseAppDelegate.h"
#import "ProtobuffersShowcaseViewController.h"

#import "Shop.pb.h"

@implementation ProtobuffersShowcaseAppDelegate

@synthesize window;
@synthesize viewController;

//==================================================================================================
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
	Product_Builder* builder = [Product builder];
	[builder setId: 0];
	[builder setName: @"BMW M5"];
	[builder setStatus: Product_OrderStatusShipped];
	
	Product_ProductReview_Builder* reviewBuilder = [Product_ProductReview builder];
	[reviewBuilder setId: 0];
	[reviewBuilder setReviewer: @"Kostia Dombrovsky"];
	[reviewBuilder setRating: 5];
	[reviewBuilder setReview: @"Every BMW rocks!"];
	[builder addReviews: [reviewBuilder build]];
	
	Product* product = [builder build];
	
	NSData* serializedData = [product data];
	product = [Product parseFromData: serializedData];
		
	NSFileManager* fileManager = [NSFileManager defaultManager];
	
	CFShow(NSHomeDirectory());
	
	[serializedData writeToFile: [NSHomeDirectory() stringByAppendingFormat: @"/dump"] atomically: YES];
	    
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
