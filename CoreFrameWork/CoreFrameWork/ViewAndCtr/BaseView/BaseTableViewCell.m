//
//  BaseTableViewCell.m
//  YSCKit
//
//  Created by yangshengchao on 14-11-1.
//  Copyright (c) 2014年 yangshengchao. All rights reserved.
//

#import "BaseTableViewCell.h"

@implementation BaseTableViewCell

- (void)awakeFromNib {
    [super awakeFromNib];
    
    self.clipsToBounds = YES;
    self.containerView.backgroundColor = [UIColor clearColor];
    self.selectionStyle = UITableViewCellSelectionStyleNone;
    [UIView resetFontSizeOfView:self];              //递归缩放label和button的字体大小
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

+ (CGFloat)HeightOfCell {
    return AUTOLAYOUT_LENGTH(290);
}
+ (UINib *)NibNameOfCell {
    return [UINib nibWithNibName:NSStringFromClass(self.class) bundle:nil];
}

- (void)layoutDataModel:(BaseDataModel *)dataModel {
    
}

-(void)layoutDataModelWithArray:(BaseDataModel *)dataModel array:(NSMutableArray *)newArray
{
    
}

- (void)layoutDataModels:(NSArray *)dataModelArray {
    
}

-(void)layoutDataModelWithCtr:(BaseDataModel *)dataModel contr:(BaseViewController *)ctr
{
    
}

-(void)layoutDataModelWithEnumStr:(BaseDataModel *)dataModel enum:(NSString *)enumStr
{
    
}

-(void)layoutDataModelWithEnum:(BaseDataModel *)dataModel enum:(NSInteger)enumNum
{
    
}

-(void)ChangeTxtColor:(bool)select
{
    
}
@end
