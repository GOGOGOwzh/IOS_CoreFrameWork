//
//  ReachabilityManager.h
//  Kit
//
//  Created by  wzh on 14-2-24.
//  Copyright (c) 2014年  wzh. All rights reserved.
//  FORMATED!
//

#import <Foundation/Foundation.h>
#import "Reachability.h"

@interface ReachabilityManager : NSObject

+ (instancetype)sharedInstance;
@property (nonatomic, strong) Reachability *reachability;
@property (nonatomic, assign) BOOL reachable;

@end