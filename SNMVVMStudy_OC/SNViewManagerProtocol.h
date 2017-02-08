//
//  SNViewManagerProtocol.h
//  SNMVVMStudy_OC
//
//  Created by Spectator on 2017/2/8.
//  Copyright © 2017年 Spectator. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 view点击事件回调类型
 */
typedef void (^viewEventsBlock)();


/**
 viewModel回调
 */
typedef void (^viewModelInfosBlock)();

/**
 viewManger回调
 */
typedef void (^viewManagerInfosBlock)();

@protocol SNViewManagerProtocol <NSObject>

@optional

- (void)sn_notice;


/**
 设置Controller的子视图的管理者为self

 @param superView 当前view的父视图
 */
- (void)sn_viewMangerWithSuperView:(UIView *)superView;


/**
 设置subView的管理者为self

 @param subView 被管理的subView
 */
- (void)sn_viewMangerWithSubview:(UIView *)subView;


/**
 添加subView的事件

 @param subView 管理的subView
 @param info 描述信息
 */
- (void)sn_viewMangerWithHandleOfSubView:(UIView *)subView info:(NSString *)info;

/* FIXME: 注释 */
/**
 返回当前管理的视图

 @return 当前管理的视图
 */
- (__kindof UIView *)sn_viewManagerOfSubView;

/* FIXME: 注释 */
/**
 获取其他viewManger所管理的view

 @param viewInfos 其他views
 */
- (void)sn_viewMangerWithOtherSubViews:(NSDictionary *)viewInfos;

/**
 *  需要重新布局subView时，更改subView的frame或者约束
 *  更新约束完成回调
 *  @param block 更新布局完成的block
 */
- (void)sn_viewMangerWithLayoutSubViews:(void (^)())updateBlock;

/**
 *  使子视图更新到最新的布局约束或者frame
 *  更新约束
 */
- (void)sn_viewMangerWithUpdateLayoutSubViews;

/* ???: 需探查原理 */
/**
 *  将model数据传递给viewManger
 */
- (void)sn_viewMangerWithModel:(NSDictionary * (^)())dictBlock;

/**
 *  处理viewBlock事件
 */
- (viewEventsBlock)sn_viewMangerWithViewEventBlockOfInfos:(NSDictionary *)infos;

/**
 *  处理viewModelInfosBlock
 */
- (viewModelInfosBlock)sn_viewMangerWithViewModelBlockOfInfos:(NSDictionary *)infos;

/**
 *  处理ViewMangerInfosBlock
 */
- (viewManagerInfosBlock)sn_viewMangerWithOtherViewMangerBlockOfInfos:(NSDictionary *)infos;

/**
 *  将viewManger中的信息通过代理传递给ViewModel
 *
 *  @param viewManger   当前viewManger
 *  @param infos 描述信息
 */
- (void)sn_viewManger:(id)viewManger withInfos:(NSDictionary *)infos;



@end
