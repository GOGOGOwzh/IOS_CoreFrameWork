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
#define Trim(x)                         [NSString trimString:x]
#define ClassOfObject(x)                [x class]

#endif /* Constants_h */
