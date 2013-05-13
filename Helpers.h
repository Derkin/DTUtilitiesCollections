//
//  Helpers.h
//  RedCup4
//
//  Created by Ben Gordon on 4/2/13.
//  Copyright (c) 2013 Ben Gordon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Comment.h"

// This color is used in LinkButton
#define kOrangeColor [UIColor colorWithRed:200/255.0f green:97/255.0f blue:41/255.0f alpha:1.0f]

@interface Helpers : NSObject

/*
 @aim 对view添加阴影和圆角
 @params
    @ s : 需要阴影的view
    @ radius : 4个圆角的弧度大小
 */
+(void)makeShadowForView:(UIView *)s withRadius:(float)radius;

/*
 @aim 按照固定时间格式（查看m文件），将nsdate转为nsstring
 @params
 @ date : 需要转化的时间
 */

+(NSString *)postStringFromDate:(NSDate *)date;

/*
 @aim 按照固定时间格式（查看m文件），将nsstring转为nsdate
 @params
 @ string : 需要转化的字符串
 */

+(NSDate *)postDateFromString:(NSString *)string;

/*
 @aim to test，估计 ：将某个时间和当前时间对比，返一个时间对比的字符串
 @params
 @ date : 需要进行对比的时间
 */

+(NSString *)timeAgoStringForDate:(NSDate *)date;

@end
