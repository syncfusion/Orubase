/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  OrubaseClientController.h
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
#import "OrubaseClient.h"

@protocol OrubaseClientControllerDelegate <NSObject>
@optional

-(void)tabBar:(UITabBar *)tabBar didSelectItem:(UITabBarItem *)item;

- (BOOL)OrubaseWebView:(UIWebView *)owebview OrubaseWebViewshouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;

@end

@interface OrubaseClientController : UITabBarController<UITabBarDelegate,OrubaseClientDelegate>
{
    NSMutableArray *Urls;
    BOOL ifselected;
    NSMutableArray *tabItemsViewController;
    NSMutableArray *tabItemsTitle;
    NSMutableArray *tabItemsImageURL;
    NSMutableArray *tabItemsOrubaseURL;
    NSInteger tag;
    OrubaseClient *vc1;

}


@property (assign) id<OrubaseClientControllerDelegate> delegateOB;

@property(nonatomic,strong) OrubaseClient *vc1;
@property(nonatomic,retain) NSMutableArray *tabItemsViewController;
@property(nonatomic,retain) NSMutableArray *tabItemsTitle;
@property(nonatomic,retain) NSMutableArray *tabItemsImageURL;

-(void)addTabBarItem :(NSString *)Title :(NSString *)Image :(NSString *)url;



@end
