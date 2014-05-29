/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  Orubase.NativeAPI.IOS.h
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
#import <AddressBook/AddressBook.h>
#import <UIKit/UIKit.h>
#import <CoreMotion/CoreMotion.h>
#import <CoreLocation/CoreLocation.h>
#import <AudioToolbox/AudioToolbox.h>
#include "Reachability.h"
#include <ifaddrs.h>
#include <arpa/inet.h>
#import "CaptureAudio.h"
#import "CustomEncryptionDecryption.h"
#import "OrubaseGlobal.h"
#import <MessageUI/MessageUI.h>

@interface Orubase :UIViewController <UIWebViewDelegate,UIApplicationDelegate,UIAccelerometerDelegate,CLLocationManagerDelegate,UIAlertViewDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate,AVAudioPlayerDelegate,UIPopoverControllerDelegate,UIActionSheetDelegate,MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate>
{
    UIWebView *clientWebView;
    UIAccelerometer *clientAccelerometer;
    UIAcceleration *clientAcceleration;
    CLLocation *cllocation;
    CLLocationManager *cllocationmanager;
    Reachability *internetReachable;
    Reachability *hostReachable;
    UIAlertView *alertView;
    UIImagePickerController *imagePickerController;
    UIViewController *clientViewController;
    NSString *callBack;
    NSString *jsCommand;
    NSString *errormsg;
    NSArray *paths;
    NSString *dirpath;
    
    /******** AVAudioPlayer ********/
    AVAudioPlayer *player;
}

@property(nonatomic,strong) UIWebView *clientWebView;
@property(nonatomic,strong) UIViewController *clientViewController;
@property (retain) UIPopoverController* popoverController; 
@property(strong) Reachability* internetReachable;

-(BOOL)CallFromJavaScript:(NSString*)requestString;
-(void)ClassInit:(UIWebView*)webView :(UIAccelerometer*)accelerometer :(UIImagePickerController*)imagePicker;
-(NetworkStatus) checkNetwork;

@end