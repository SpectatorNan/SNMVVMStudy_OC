//
//  UIView+SNEvents.h
//  SNMVVMStudy_OC
//
//  Created by Spectator on 2017/2/8.
//  Copyright © 2017年 Spectator. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SNViewProtocol.h"
#import "SNViewManagerProtocol.h"

/**
 view点击事件回调类型
 */
typedef void (^viewEventsBlock)();


@interface UIView (SNEvents)


/**
 *  block 传递事件
 */
@property (nonatomic, copy) viewEventsBlock viewEventsBlock;


/**
 view代理协议
 */
@property (nonatomic, weak) id<SNViewProtocol> viewDelegate;


/**
 设置view中的事件有viewManger处理
 */
- (void)sn_viewWithViewManger:(id<SNViewProtocol>)viewManger;

@end
