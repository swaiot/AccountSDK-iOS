//
//  AkAndSk.h
//  accountlib
//
//  Created by marklei on 2020/5/25.
//  Copyright © 2020 swaiot. All rights reserved.
//

#ifndef AkAndSk_h
#define AkAndSk_h

@interface AkAndSk : NSObject

@property(nonatomic, retain) NSString* appKey;
@property(nonatomic, retain) NSString* salt;
@property(nonatomic, assign) bool exitFlag;

@end
#endif /* AkAndSk_h */
