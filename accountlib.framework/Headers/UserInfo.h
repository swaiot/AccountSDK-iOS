//
//  UserInfo.h
//  accountlib
//
//  Created by marklei on 2020/5/25.
//  Copyright © 2020 swaiot. All rights reserved.
//

#ifndef UserInfo_h
#define UserInfo_h

@interface UserInfo : NSObject
@property(nonatomic, retain) NSString* openId;
@property(nonatomic, retain) NSString* skyId;
@property(nonatomic, retain) NSString* nickName;
@property(nonatomic, retain) NSString* email;
@property(nonatomic, retain) NSString* avatar;
@property(nonatomic, retain) NSString* slogan;
@property(nonatomic, assign) NSInteger gander;

@end

#endif /* UserInfo_h */
