//
//  ViewController.h
//  accountlibtest
//
//  Created by marklei on 2020/5/25.
//  Copyright © 2020 swaiot. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WebViewController.h"
#import <accountlib/accountlib.h>

@interface ViewController : UIViewController
@property(nonatomic,retain) WebViewController* webViewController;
@property(nonatomic,retain) TokenInfo* tokenInfo;
@end

