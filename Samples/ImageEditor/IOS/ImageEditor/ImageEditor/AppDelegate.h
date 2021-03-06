/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  Contact.h
 *  Copyright Syncfusion Inc. 2001 - 2013. All rights reserved.
 *  Use of this code is subject to the terms of our license.
 *  A copy of the current license can be obtained at any time by e-mailing
 *  licensing@syncfusion.com. Any infringement will be prosecuted under
 *  applicable laws.
 *  </copyright>
 *
 *------------------------------------------------------------------------
 */

#import <UIKit/UIKit.h>
#import "OrubaseClientController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate,OrubaseClientDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) OrubaseClient *viewController;

@property (strong,nonatomic) NSString *ipaddress,*portnumber;

@end
