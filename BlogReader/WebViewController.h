//
//  WebViewController.h
//  BlogReader
//
//  Created by Halko, Jaayden on 2/16/14.
//  Copyright (c) 2014 PartyTroll. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) NSURL *blogPostURL;
@property (strong, nonatomic) IBOutlet UIWebView *webView;

@end
