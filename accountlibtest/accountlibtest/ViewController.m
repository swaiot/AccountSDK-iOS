//
//  ViewController.m
//  accountlibtest
//
//  Created by marklei on 2020/5/25.
//  Copyright © 2020 swaiot. All rights reserved.
//

#import "ViewController.h"
#import <accountlib/accountlib.h>
#import "WebViewController.h"

@interface ViewController ()<AccountDelegate>

@end

@implementation ViewController
@synthesize showWebView;
@synthesize webViewController;
@synthesize tokenInfo;

-(void) onLoginFailure:(int)code message:(NSString*)failMsg{
   if(nil == webViewController){
             //获取当前的Storyboard
      UIStoryboard* sb=[UIStoryboard storyboardWithName:@"Main" bundle:nil];
      //在Storyboard中获取vc1
      [self setWebViewController:[sb instantiateViewControllerWithIdentifier:@"ID_WebView"]];
     }
    if(webViewController.isViewLoaded){
        [webViewController.presentingViewController dismissViewControllerAnimated:TRUE completion:nil];
    }
}

-(void) onLoginSuccess:(TokenInfo*)tokenInfo{
    NSLog(@"onLoginSuccess tokenInfo accessToken = %@ ", [tokenInfo accessToken] );
    
    [self setTokenInfo:tokenInfo];
    if(nil == webViewController){
        //获取当前的Storyboard
         UIStoryboard* sb=[UIStoryboard storyboardWithName:@"Main" bundle:nil];
         //在Storyboard中获取vc1
         [self setWebViewController:[sb instantiateViewControllerWithIdentifier:@"ID_WebView"]];
    }
    if(webViewController.isViewLoaded){
        [webViewController.presentingViewController dismissViewControllerAnimated:TRUE completion:nil];
    }
    
}
-(void) onOpenWebViewRequest:(NSString* )url{
    
}
-(void) onQueryInfoFailure:(int)code message:(NSString*)failMsg{
    
}
-(void) onAccountInfo:(UserInfo*)accountInfo{
    NSLog(@"getAccountInfo success: openId = %@",[accountInfo openId]);
    
}
-(void) onGetWebViewParentView{
    
    if(nil == webViewController){
        //获取当前的Storyboard
         UIStoryboard* sb=[UIStoryboard storyboardWithName:@"Main" bundle:nil];
         //在Storyboard中获取vc1
         [self setWebViewController:[sb instantiateViewControllerWithIdentifier:@"ID_WebView"]];
    }
    //呈现出vc1
    [self presentViewController:webViewController animated:YES completion:^{
        self.showWebView([self.webViewController view]);
    }];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
}

- (IBAction)onLoginBtnPressed:(id)sender {
    [[AccountManager sharedInstance] setAccountDelegate:self];
    // 此处填入开放平台分配的ak和sk
    [[AccountManager sharedInstance] login:@"" salt:@""];
}
- (IBAction)onGetAccountBtnPressed:(id)sender {
    if(nil!=tokenInfo){
        [[AccountManager sharedInstance] getAccountInfo:tokenInfo];
    }
}

@end
