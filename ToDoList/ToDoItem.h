//
//  ToDoItem.h
//  ToDoList
//
//  Created by 吉村　総一郎 on 2015/07/15.
//  Copyright (c) 2015年 Soichiro Yoshimura. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
