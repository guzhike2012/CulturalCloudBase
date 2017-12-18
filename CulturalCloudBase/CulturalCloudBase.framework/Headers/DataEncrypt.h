//
//  ServiceObject.h
//  ServiceObject
//
//  Created by Work on 9/22/14.
//  Copyright (c) 2014 CDTV. All rights reserved.
//  2014-9-24
//

#import <Foundation/Foundation.h>

@interface DataEncrypt : NSObject

+(void) setEncryptkey:(NSString *)encryptKey;

+(void) setFunKey:(NSString *)funKey;

+(NSString *)encryptKey;

+(NSString *)funKey;

+ (NSMutableString *)stringReverse:(NSString *)str;

+ (NSString *)String2Encrypt:(NSString *)str;

+ (NSString *)toStringWithFunKey:(NSDictionary *)dic;

+(NSString *)urlEncodeValue:(NSString *)str;


+(NSString *)urlDecodeValue:(NSString*)str;

@end
