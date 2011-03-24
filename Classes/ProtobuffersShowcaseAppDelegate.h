//
//  ProtobuffersShowcaseAppDelegate.h
//  ProtobuffersShowcase
//
//  Created by Kostia Dombrovsky on 12.02.11.
//  Copyright 2011 DriversEd.com. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ProtobuffersShowcaseViewController;

@interface ProtobuffersShowcaseAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ProtobuffersShowcaseViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ProtobuffersShowcaseViewController *viewController;

@end

