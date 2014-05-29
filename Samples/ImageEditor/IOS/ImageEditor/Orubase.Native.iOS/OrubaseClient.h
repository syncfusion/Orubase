/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  OrubaseClient.h
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
#import "Reachability.h"
#import "Orubase.NativeAPI.IOS.h"
#import <objc/message.h>

@protocol OrubaseClientDelegate <NSObject>

@optional
- (BOOL)OrubaseWebView:(UIWebView *)owebview OrubaseWebViewshouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;
@end


@interface OrubaseClient : UIViewController <UIWebViewDelegate>
{
    UIWebView *webView;
    UIAccelerometer *accelerometer;
    UIImagePickerController *imagepicker;
    Orubase *nativeAPI;
    Reachability *Reach;
    Reachability  *internetReachable;
    Reachability   *hostReachable;
}

@property (retain, nonatomic) NSURLConnection *connection;
@property (assign) id<OrubaseClientDelegate> delegate;
@property (retain,strong)  UIWebView *webView;
@property(nonatomic,strong) UIActivityIndicatorView *activityIndicator;
@property(nonatomic,strong) CMMotionManager *motionManager;
@property(nonatomic,strong) UIAccelerometer *accelerometer;

// Public Methods

-(void)reload;
- (id)initWithUrl:(NSURL*)loadURL;
- (id)initimage:(NSString*)networkErrorImage;
@end
