//
//  AppDelegate.h
//  SimpleBreakout
//
//  Created by Marc Bodmer on 12-02-10.
//  Copyright University of Guelph 2012. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
