//
//  UIResponder+Additions.h
//  Kit
//
//  Created by  wzh on 14-7-24.
//  Copyright (c) 2014年 wzh. All rights reserved.
//  FORMATED!
//

#import <UIKit/UIKit.h>

@interface UIResponder (Additions)

+ (id)currentFirstResponder;
+ (UIViewController *)createBaseViewController:(NSString *)className;
@end
