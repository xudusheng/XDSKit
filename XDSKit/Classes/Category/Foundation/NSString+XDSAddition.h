//
//  NSString+XDSAddition.h
//  XDSKit
//
//  Created by zhengda on 16/11/25.
//  Copyright © 2016年 xudusheng. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (XDSAddition)

 //清空空白字符串之后的字符串
- (NSString *)trimString;

//返回当前字符串对应在沙盒中的完整文件路径
- (NSString *)documentsPath;


+ (NSString *)md5StringFromString:(NSString *)s;
+ (NSString *)md5:(NSString *)value;
+ (NSString *)stringOfAddPercentEscapesWithString:(NSString *)s;

+ (NSString *)base64StringFromData:(NSData *)data;
+ (NSData *) dataFromBase64String:(NSString *)string;


+ (NSString *)timeStringForTime:(NSUInteger)time;//整形时间转化为00:00字符串
+ (NSString *)stringTranslatedFromDate:(NSDate *)date;//NSDate转化为标准格式时间字符串 yy-MM-dd hh-mm-ss
+ (NSString *)stringToHMTranslatedFromDate:(NSDate *)date;//hh-mm
+ (NSString *)stringToYMDHMTranslatedFromDate:(NSDate *)date;//yy-MM-dd hh-mm
+ (NSString *)compareDate:(NSDate *)date;
+ (NSDate *)convertDateFromString:(NSString*)uiDate;//NSString转化为NSDate
+(int)compareOneDay:(NSDate *)oneDay withAnotherDay:(NSDate *)anotherDay;//比较2个日期大小
+ (NSDate *)fetchDateFromDay:(NSInteger)day Hour:(NSInteger)hour minute:(NSInteger)minute second:(NSInteger)second;//获取时间，转化为nsdate

//将一个数字字符串保留指定的位数,string为字符串，digit为保留的位数
+(NSString *)formatStringToSaveWithString:(NSString *)string
                                    digit:(NSInteger)digit
                             decimalStyle:(BOOL)flag;

+(NSString *)decimalwithFormat:(NSString *)format
                        floatV:(float)floatV;//四舍五入方法

//将一个数字字符串转换为百分号显示,保留2位
+(NSString *)formatStringForPercentageWithString:(NSString *)string;
//得到两位随机数
+ (NSString *)twoCharRandom;

//月转换成天
+ (NSString *)monthToDay:(NSString *)dayString;

+ (BOOL)validateIDCardNumber:(NSString *)value;//校验身份证
+ (BOOL)isMobileNumber:(NSString *)mobileNum;//校验手机号

@end
