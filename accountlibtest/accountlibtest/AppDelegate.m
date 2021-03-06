//
//  AppDelegate.m
//  accountlibtest
//
//  Created by marklei on 2020/5/25.
//  Copyright © 2020 swaiot. All rights reserved.
//

#import "AppDelegate.h"
#import <accountlib/accountlib.h>

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    return YES;
}

-(void) onLoginFailure:(int)code message:(NSString*)failMsg{
    
}

-(void) onLoginSuccess:(TokenInfo*)tokenInfo{
    
}

-(void) onOpenWebViewRequest:(NSString* )url{
    
}

-(void) onQueryInfoFailure:(int)code message:(NSString*)failMsg{
    
}

-(void) onAccountInfo:(UserInfo*)accountInfo{
    
}

-(UIView*) onGetWebViewParentView{
    return nil;
}

#pragma mark - UISceneSession lifecycle


- (UISceneConfiguration *)application:(UIApplication *)application configurationForConnectingSceneSession:(UISceneSession *)connectingSceneSession options:(UISceneConnectionOptions *)options {
    // Called when a new scene session is being created.
    // Use this method to select a configuration to create the new scene with.
    return [[UISceneConfiguration alloc] initWithName:@"Default Configuration" sessionRole:connectingSceneSession.role];
}


- (void)application:(UIApplication *)application didDiscardSceneSessions:(NSSet<UISceneSession *> *)sceneSessions {
    // Called when the user discards a scene session.
    // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
    // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
}


@end
