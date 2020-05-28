//
//  AccountManager.h
//  accountlib
//
//  Created by marklei on 2020/5/20.
//  Copyright © 2020 swaiot. All rights reserved.
//

#ifndef AccountManager_h
#define AccountManager_h

#import "TokenInfo.h"
#import "UserInfo.h"
#import "AkAndSk.h"

#import <WebKit/WebKit.h>

typedef void(^onGetWebViewFinished)(UIView * parentView);//类型重定义的block
enum ACCOUNTLIBRET{
    OK = 0,
    LOGIN_FAIL_QUERY_ERR = -1,
    LOGIN_FAIL_AK_NIL = -2,
    LOGIN_CODE_GETAK_ERR = -3,
    GET_USER_INFO_INIT_ERR = -4,
    GET_USER_INFO_ERR = -5,
};

@protocol AccountDelegate <NSObject>
@property (nonatomic,copy)onGetWebViewFinished showWebView;
@required//遵守协议必须实现的方法
-(void) onLoginFailure:(int)code message:(NSString*)failMsg;
-(void) onLoginSuccess:(TokenInfo*)tokenInfo;
-(void) onOpenWebViewRequest:(NSString* )url;
-(void) onQueryInfoFailure:(int)code message:(NSString*)failMsg;
-(void) onAccountInfo:(UserInfo*)accountInfo;
-(void) onGetWebViewParentView;
@optional

@end
@interface AccountManager : NSObject
@property(nonatomic, weak) id<AccountDelegate> accountDelegate;
@property(nonatomic, retain) WKWebView* iWKWebView;
@property(nonatomic, retain) AkAndSk* globalAkAndSk;
@property(nonatomic, retain) NSString* globalAppKey;
@property(nonatomic, retain) NSURL* tmpUrl;
/**
 单例
 */
+ (instancetype)sharedInstance;
-(void) login:(NSString*)appKey salt:(NSString*)appSalt;
-(void) getAccountInfo:(TokenInfo*)tokenInfo;
-(void) logout;
@end
#endif /* AccountManager_h */
