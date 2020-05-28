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

@protocol AccountDelegate <NSObject>
@required//遵守协议必须实现的方法
-(void) onLoginFailure:(int)code message:(NSString*)failMsg;
-(void) onLoginSuccess:(TokenInfo*)tokenInfo;
-(void) onOpenWebViewRequest:(NSString* )url;
-(void) onQueryInfoFailure:(int)code message:(NSString*)failMsg;
-(void) onAccountInfo:(UserInfo*)accountInfo;
@optional

@end

@interface AccountManager : NSObject
@property(nonatomic, weak) id<AccountDelegate> accountDelegate;
/**
 单例
 */
+ (instancetype)sharedInstance;
-(void) login:(NSString*)appKey salt:(NSString*)appSalt;
-(void) getAccountInfo:(TokenInfo*)tokenInfo;
-(void) logout;

@end
#endif /* AccountManager_h */
