//
//  NSString+AES256.h
//  AES加密
//
//  Created by 小飞鸟 on 16/4/13.
//  Copyright © 2016年 小飞鸟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (AES256)


///加密
-(NSString *)aes256_encrypt:(NSString *)key;

///解密

-(NSString *)aes256_decrypt:(NSString *)key;


@end
