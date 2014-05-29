/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  FileTransfer.h
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
#import <UIKit/UIKit.h>

@interface FileTransfer : NSObject



//uploding filer to server
-(void)fileUpload:(NSString *)filePath :(NSString *)serverURL;

//downloading files from server url
-(void)download:(NSString *)downloadURL;

@end
