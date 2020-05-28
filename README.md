#### Swaiot开放平台下帐号SDK库

##### iOS-SDK及demo下载地址
https://github.com/swaiot/AccountSDK-iOS.git

##### 安装方式
- 1 在开放平台上获得分配到的Swaiot开发者appkey和saltkey;
- 2 在工程的Frameworks目录中拖入SSELib.framework（合并了真机和虚拟机的framework） ;
- 3 AccountManager的业务接口都为异步实现；
- 4 实现<AccountDelegate>的委托监听．
~~~objective-c
/**
	调用login接口返回错误 
*/
-(void) onLoginFailure:(int)code message:(NSString*)failMsg;
~~~
~~~objective-c
/**
	调用login接口成功并返回了token
*/
-(void) onLoginSuccess:(TokenInfo*)tokenInfo;
~~~
~~~objective-c
/**
	请求打开登陆授权的页面，此处请参考test，需要跳转打开webview
*/
-(void) onOpenWebViewRequest:(NSString* )url;
~~~
~~~objective-c
/**
	获取用户账号错误
*/
-(void) onQueryInfoFailure:(int)code message:(NSString*)failMsg;
~~~
~~~objective-c
/**
	获取用户账号信息成功
*/
-(void) onAccountInfo:(UserInfo*)accountInfo;
~~~
详细可见下载地址中的accountlibtest工程的配置及代码说明.

##### API说明

###### AccountManager 类API
~~~objective-c
/**
 单例
 */
+ (instancetype)sharedInstance;
~~~
~~~objective-c
/**
 	登陆接口，传入swaiot开放平台的ak和sk
 */
-(void) login:(NSString*)appKey salt:(NSString*)appSalt;
~~~
~~~objective-c
/**
	获取用户账号信息接口
*/
-(void) getAccountInfo:(TokenInfo*)tokenInfo;
~~~
~~~objective-c
/**
	登出接口
*/
-(void) logout;
~~~