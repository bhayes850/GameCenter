//
//  GameCenterFile.h
//  gameCenterTest
//
//  Created by Bernard Hayes on 5/11/15.
//  Copyright (c) 2015 Bernard Hayes. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GameCenterFile : NSObject {
    
    BOOL gameCenterAvailable;
    BOOL userAuthenticated;
    
}
@property (assign,readonly)BOOL gameCenterAvailable;
+ (GameCenterFile *)shareInstance;
- (void) authenticateLocaleUser;


@end
