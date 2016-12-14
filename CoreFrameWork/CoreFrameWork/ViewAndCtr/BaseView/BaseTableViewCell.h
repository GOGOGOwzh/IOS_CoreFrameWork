//
//  BaseTableViewCell.h
//  YSCKit
//
//  Created by yangshengchao on 14-11-1.
//  Copyright (c) 2014年 yangshengchao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseModel.h"
#import "BaseViewController.h"

@interface BaseTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIView *containerView;

+ (CGFloat)HeightOfCell;
+ (UINib *)NibNameOfCell;
- (void)layoutDataModel:(BaseDataModel *)dataModel;
- (void)layoutDataModelWithArray:(BaseDataModel *)dataModel array:(NSMutableArray*)newArray;

- (void)layoutDataModels:(NSArray *)dataModelArray;
- (void)layoutDataModelWithCtr:(BaseDataModel *)dataModel contr:(BaseViewController*) ctr;
- (void)layoutDataModelWithEnumStr:(BaseDataModel *)dataModel enum:(NSString *)enumStr;
- (void)layoutDataModelWithEnum:(BaseDataModel *)dataModel enum:(NSInteger)enumNum;
-(void)ChangeTxtColor:(bool) select;
@end
