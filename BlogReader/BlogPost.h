//
//  BlogPost.h
//  BlogReader
//
//  Created by Halko, Jaayden on 2/9/14.
//  Copyright (c) 2014 PartyTroll. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (strong,nonatomic) NSString *title;
@property (strong,nonatomic) NSString *author;
@property (strong,nonatomic) NSString *thumbnail;
@property (strong,nonatomic) NSString *date;
@property (strong,nonatomic) NSURL *url;

-(id) initWithTitle:(NSString *)title;
+(id) blogPostWithTitle:(NSString *)title;

-(NSURL *) thumbnailURL;
-(NSString *) formattedDate;
@end
