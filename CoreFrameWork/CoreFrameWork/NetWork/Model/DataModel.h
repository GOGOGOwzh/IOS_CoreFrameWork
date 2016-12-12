//
//  DataModel.h
//  CoreFrameWork
//
//  Created by wzh on 2016/12/13.
//  Copyright © 2016年 wzh. All rights reserved.
//

#import "BaseModel.h"

#pragma mark - 数组映射关系

@protocol BGBannerInfoModel         @end
@protocol BGVideoListItem           @end
@protocol BGCourseListItem          @end
@protocol BGExaPaperCore            @end
#pragma mark - 公共model需要用到的class声明

/**
 *  要使用的model在本类里
 */
@class BaseDataModel;

#pragma mark - 公共model定义

@interface VersionModel : BaseDataModel

@property (nonatomic, strong) NSString *versionCode;        //版本号
@property (nonatomic, strong) NSString *versionDESC;        //版本描述
@property (nonatomic, assign) BOOL isForced;                    //是否强制升级
@property (nonatomic, strong) NSString *downloadUrl;            //plist文件的url地址 or appstore's url

@end

/**
 *  新版本描述模型
 */
@interface NewVersionModel : BaseDataModel

//@property (nonatomic, strong) NSString *versionCode;            //17
@property (nonatomic, strong) NSString *iosVersion;             //1.4.17
@property (nonatomic, strong) NSString *versionDescription;     //新版本描述
@property (nonatomic, assign) BOOL isForced;                    //是否强制升级
@property (nonatomic, strong) NSString *downloadUrl;            //plist文件的url地址 or appstore's url

@end

