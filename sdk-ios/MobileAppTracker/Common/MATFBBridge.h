//
//  MATFBBridge.h
//  MobileAppTracker
//
//  Created by John Bender on 10/8/14.
//  Copyright (c) 2014 TUNE. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MATEvent_internal.h"
#import "MATSettings.h"


@interface MATFBBridge : NSObject

+ (void)sendEvent:(MATEvent *)event parameters:(MATSettings*)parameters limitEventAndDataUsage:(BOOL)limit;

@end
