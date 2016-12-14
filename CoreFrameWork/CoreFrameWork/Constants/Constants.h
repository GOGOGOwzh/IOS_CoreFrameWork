//
//  Constants.h
//  CoreFrameWork
//
//  Created by wzh on 2016/12/12.
//  Copyright © 2016年 wzh. All rights reserved.
//

#ifndef Constants_h
#define Constants_h

#define ReturnWhenObjectIsEmpty(object)             if ([NSObject isEmpty:object]) { return ;    }
#define ReturnNilWhenObjectIsEmpty(object)          if ([NSObject isEmpty:object]) { return nil; }
#define ReturnEmptyWhenObjectIsEmpty(object)        if ([NSObject isEmpty:object]) { return @""; }
#define ReturnYESWhenObjectIsEmpty(object)          if ([NSObject isEmpty:object]) { return YES; }
#define ReturnNOWhenObjectIsEmpty(object)           if ([NSObject isEmpty:object]) { return NO;  }
#define ReturnZeroWhenObjectIsEmpty(object)         if ([NSObject isEmpty:object]) { return 0;  }

#define DefaultNaviBarArrowBackImage    [UIImage imageNamed:@"arrow_left_dark23x40"]
#define PresentNaviBarImage             [UIImage imageNamed:@"daohanglanbj"]    //BaseViewController里设置prsent出来的navibar背景图片
#define Trim(x)                         [NSString trimString:x]
#define ClassOfObject(x)                [x class]
#define kDefaultTitleBarColor           RGB(234, 106, 84)       //导航栏的默认颜色
#define kDefaultViewColor               RGB(235, 235, 235) 
#define STATUSBAR_HEIGHT                20.0f


#define kParamTitle                         @"Title"
#define kParamBackType                      @"BackType"
#endif /* Constants_h */
