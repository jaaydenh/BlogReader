//
//  BlogPost.m
//  BlogReader
//
//  Created by Halko, Jaayden on 2/9/14.
//  Copyright (c) 2014 PartyTroll. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

-(id) initWithTitle:(NSString *)title {
    self = [super init];
    
    if (self) {
        _title = title;
        _author = nil;
        _thumbnail = nil;
    }
    
    return self;
}

+(id) blogPostWithTitle:(NSString *)title {
    return [[self alloc] initWithTitle:title];
}

-(NSURL *) thumbnailURL {
    return [NSURL URLWithString:self.thumbnail];
}

-(NSString *) formattedDate {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSDate *tempDate = [dateFormatter dateFromString:self.date];
    [dateFormatter setDateFormat:@"EE MMM, dd"];
    return [dateFormatter stringFromDate:tempDate];
}

@end
