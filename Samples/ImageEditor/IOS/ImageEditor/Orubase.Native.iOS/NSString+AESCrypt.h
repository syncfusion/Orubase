/*
 *------------------------------------------------------------------------
 *
 *  <copyright>
 *  NSString+AESCrypt.h
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

#import "NSData+AESCrypt.h"

#import "NSData+Base64.h"


@interface NSString (AESCrypt)


- (NSString *)AES256EncryptWithKey:(NSString *)key;
- (NSString *)AES256DecryptWithKey:(NSString *)key;


@end