//
//  BaseModel.h
//  CoreFrameWork
//
//  Created by wzh on 2016/12/12.
//  Copyright © 2016年 wzh. All rights reserved.
//

@interface BaseModel : JSONModel

@property (assign, nonatomic) NSInteger state;
@property (strong, nonatomic) NSString *message;
@property (strong, nonatomic) NSObject<ConvertOnDemand> *data;

+ (NSDictionary *)jsonToModelMapping;

@end


/**
 *  公共model的基类，主要是设置所有参数都是optional的，并添加序列化和反序列化方法
 */
@interface BaseDataModel : JSONModel

+ (NSDictionary *)jsonToModelMapping;

@end
