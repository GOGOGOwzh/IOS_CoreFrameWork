//
//  BaseCollectionViewCell.h
//  YSCKit
//
//  Created by yangshengchao on 14-11-4.
//  Copyright (c) 2014年 yangshengchao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseModel.h"
#import "BaseViewController.h"

@interface BaseCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIView *containerView;

+ (CGSize)SizeOfCell;
+ (UINib *)NibNameOfCell;
- (void)layoutDataModel:(BaseDataModel *)dataModel;
- (void)layoutDataModels:(NSArray *)dataModelArray;
- (void)layoutDataModelN:(NSMutableArray*)layoutDataModelNArray;
-(void)setParentCtr:(UIViewController *)viewCtr;
-(void)setBaseViewCtr:(BaseViewController *)viewCtr;
@end
