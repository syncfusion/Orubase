/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  CaptureAudio.h
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
#import <AVFoundation/AVFoundation.h>
#import <CoreAudio/CoreAudioTypes.h>
#import "OrubaseGlobal.h"
#import "NSData+Base64.h"
@interface CaptureAudio : UIViewController<AVAudioRecorderDelegate>
{
    UIWebView *captureWebView;
}

@property(nonatomic,strong) UIWebView *captureWebView;
@property (nonatomic,strong) UIButton * btnStart;
@property (nonatomic,strong) UIButton * btnSave;
@property(nonatomic,strong) NSString *values;
-(void)loadcallback:(NSString *)callback :(NSArray *)components;

@end