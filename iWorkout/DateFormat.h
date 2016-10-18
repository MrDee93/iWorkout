//
//  DateFormat.h
//  Pullup Challenge
//
//  Created by Dayan Yonnatan on 01/06/2016.
//  Copyright © 2016 Dayan Yonnatan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DateFormat : NSObject

+(NSArray*)getAvailableDates;
+(NSString *)getSuffixForDate:(NSDate*)theDate;
+(NSString*)getDateStringFromDate:(NSDate*)date;
+(NSString*)getDateStringFromDate:(NSDate*)date withIndex:(int)index;

+(NSString*)dateToString:(NSDate*)date;
+(NSDate*)getStartDate:(NSString*)dateString;
+(NSDate*)getEndDate:(NSString*)dateString;
+(int)getDaysPassed:(NSDate*)dateCreated;

@end
