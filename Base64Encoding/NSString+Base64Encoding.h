//
//  NSString+Base64Encoding.h
//  CodeLibary
//
//  Created by zichaochu on 16/9/2.
//  Copyright © 2016年 linxun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Base64Encoding)

+ (instancetype)stringWithBase64EncodedString:(NSString *)base64String options:(NSDataBase64DecodingOptions)options;
- (NSString *)base64DecodedStringWithOptions:(NSDataBase64DecodingOptions)options;
- (NSString *)base64EncodedStringWithOptions:(NSDataBase64EncodingOptions)options;

+ (instancetype)stringWithBase64EncodedData:(NSData *)base64Data options:(NSDataBase64DecodingOptions)options;
- (NSData *)base64DecodedDataWithOptions:(NSDataBase64DecodingOptions)options;
- (NSData *)base64EncodedDataWithOptions:(NSDataBase64EncodingOptions)options;

@end
