//
//  DataModel.m
//  CoreFrameWork
//
//  Created by wzh on 2016/12/13.
//  Copyright © 2016年 wzh. All rights reserved.
//

#import "DataModel.h"

@implementation VersionModel        @end
@implementation NewVersionModel
+ (NSDictionary *)jsonToModelMapping {
    return @{@"VersionDESC" : @"versionDescription"};
}
@end
