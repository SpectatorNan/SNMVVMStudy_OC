//
//  SNViewProtocol.h
//  SNMVVMStudy_OC
//
//  Created by Spectator on 2017/2/8.
//  Copyright © 2017年 Spectator. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SNViewProtocol <NSObject>

@optional
/**
 将事件通过代理传递出去

 @param view 当前view
 @param events 事件类型
 @param info 事件描述信息
 */
- (void)sn_view:(__kindof UIView *)view forControlEvents:(UIControlEvents)events withInfo:(NSDictionary *)info;

@end
