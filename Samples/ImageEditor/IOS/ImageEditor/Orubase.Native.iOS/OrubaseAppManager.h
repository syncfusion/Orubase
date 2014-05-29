/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  OrubaseAppManager.h
 *  Copyright Syncfusion Inc. 2001 - 2013. All rights reserved.
 *  Use of this code is subject to the terms of our license.
 *  A copy of the current license can be obtained at any time by e-mailing
 *  licensing@syncfusion.com. Any infringement will be prosecuted under
 *  applicable laws.
 *  </copyright>
 *
 *------------------------------------------------------------------------
 */

#import <Foundation/Foundation.h>
#import "OrubaseClientController.h"
#import "OrubaseGlobal.h"

@protocol OrubaseAppManagerDelegate <NSObject>
@optional
- (void)displayAuthorizationUI;
- (void)displayApplicationUI;
- (BOOL)OrubaseWebView:(UIWebView *)owebview OrubaseWebViewshouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;
@end
@interface OrubaseAppManager : NSObject <OrubaseClientControllerDelegate,UITabBarControllerDelegate,OrubaseClientDelegate,UIAccelerometerDelegate,UITabBarDelegate>
{
    UIAccelerometer *accelerometer;
}


@property(nonatomic, strong) NSString *authorizationText;
@property(nonatomic, strong) NSString *unauthorizationText;

@property(nonatomic, strong) NSString *authorizationURL;
@property(nonatomic, strong) NSString *unauthorizationURL;
@property(nonatomic, strong) UIWindow *window;
@property(assign) id<OrubaseAppManagerDelegate> delegate;

- (id)initWithAuthorizationUrl :(NSString *)authURL :(NSString *)unAuthURL;

- (BOOL)requiresAuthorization;

- (BOOL)handleApplicationInitialization;

- (OrubaseClient *)getAuthorizationUI;

- (OrubaseClientController *)getApplicationUI;

@end