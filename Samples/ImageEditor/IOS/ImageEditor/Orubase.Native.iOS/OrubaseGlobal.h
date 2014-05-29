/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  OrubaseGlobal.h
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
#import "CustomEncryptionDecryption.h"

@interface OrubaseGlobal : NSObject

{
    NSString *networkError;
    NSString *networkAlert;
    NSString *notification;
}

@property (nonatomic) BOOL DenieAccessToLocationService;
@property (nonatomic) BOOL DenieGeoLocationUpdate;
@property (nonatomic) BOOL InternetNotifier;
@property (nonatomic) BOOL BackgroundListener;
@property (nonatomic) BOOL ForegroundListener;
@property (nonatomic) BOOL ActiveListener;
@property (nonatomic) BOOL ResignActiveListener;
@property (nonatomic) BOOL isKeyboardVisible;
@property (strong,nonatomic) NSString *networkError;
@property (strong,nonatomic) NSString *networkAlert;
@property (strong,nonatomic) NSString *notification;
@property (strong,nonatomic) NSString *authText;
@property (strong,nonatomic) NSString *unauthText;
//App Settings Properties
@property (strong,nonatomic) NSString *tabSelectionIndicatorImage;
@property (strong,nonatomic) NSString *tabBarColor;
@property (strong,nonatomic) NSString *tabBarSelectedImageColor;
@property (strong,nonatomic) NSString *tabBarBackgroundColor;
@property (nonatomic) BOOL StatusBarHidden;
@property (nonatomic) BOOL webviewdataDetectorTypes;
//Capture audio customization properties
@property (strong,nonatomic) NSString *CaptureAudioBackGroundImage_ipod;
@property (strong,nonatomic) NSString *CaptureAudioBackGroundImage_ipadLandscape;
@property (strong,nonatomic) NSString *CaptureAudioBackGroundImage_ipadPortrait;
@property (strong,nonatomic) NSString *CaptureAudioRecordButtonImage;
@property (strong,nonatomic) NSString *CaptureAudioStopButtonImage;
@property (strong,nonatomic) NSString *CaptureAudioSaveButtonImage;
@property (strong,nonatomic) NSString *CaptureAudioCancelButtonImage;

@property (strong,nonatomic) UITabBar *tabBar;

@property (strong,nonatomic) UIWebView *webview;
@property (strong,nonatomic) NSString *callback;
@property (strong , nonatomic) NSArray *component;

@property(strong,nonatomic) CustomEncryptionDecryption *type;

+(void) set:(CustomEncryptionDecryption *)input;
+(CustomEncryptionDecryption *)get;
+(OrubaseGlobal *)SharedInstance;
+ (UIColor *)colorFromHexString:(NSString *)hexString;

@end
