/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  Signature.h
 *  Copyright Syncfusion Inc. 2001 - 2013. All rights reserved.
 *  Use of this code is subject to the terms of our license.
 *  A copy of the current license can be obtained at any time by e-mailing
 *  licensing@syncfusion.com. Any infringement will be prosecuted under
 *  applicable laws.
 *  </copyright>
 *
 *------------------------------------------------------------------------
 */

#import "OrubaseClientController.h"
#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface Signature : UIViewController<UIPopoverControllerDelegate>
{

UIImageView *newImage;

BOOL bgsignature;
int touchMoved;
CGPoint endPoint;

UIView *signatureView;
UIView *actionView;
    
}

@property(nonatomic,strong) OrubaseClient *OBclientController;
@property(nonatomic,strong) UIWebView *signWebView;
@property(nonatomic,strong) UIPopoverController *popover;
@property(nonatomic,strong) UIView *colorView;
@property(nonatomic,strong) UIView *actionView;
@property(nonatomic,strong) UIView *storkeView;

// Public headers

 -(void)loadsignaturecallback:(NSArray *)callback;

@end