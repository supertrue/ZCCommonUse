//
//  NSData+HashValue.h
//  CodeLibary
//
//  Created by zichaochu on 16/9/2.
//  Copyright © 2016年 linxun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>

@interface NSData (HashValue)

- (NSData *)MD5Data;
- (NSString *)MD5String;

- (NSData *)SHA1Data;
- (NSString *)SHA1String;

@end
