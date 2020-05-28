//
//  TokenInfo.h
//  accountlib
//
//  Created by marklei on 2020/5/25.
//  Copyright © 2020 swaiot. All rights reserved.
//

#ifndef TokenInfo_h
#define TokenInfo_h

@interface TokenInfo : NSObject
@property(nonatomic, retain) NSString* accessToken;
@property(nonatomic, retain) NSString* refreshToken;
@property(nonatomic, retain) NSString* tokenType;
@property(nonatomic, retain) NSNumber* expireIn;
@property(nonatomic, retain) NSNumber* startTime;
@property(nonatomic, assign) bool exitFlag;
@end
#endif /* TokenInfo_h */
