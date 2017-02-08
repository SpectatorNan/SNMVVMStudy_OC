//
//  SNViewModelProtocol.h
//  SNMVVMStudy_OC
//
//  Created by Spectator on 2017/2/8.
//  Copyright © 2017年 Spectator. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  请求成功回调
 */
typedef void (^successBlock)(id responseObject);
/**
 *  请求失败回调
 */
typedef void (^failureBlock) (NSError *error);
/**
 *  请求响应回调
 */
typedef void (^responseBlock)(id dataObj, NSError *error);
/**
 *  监听进度响应回调
 */
typedef void (^progressBlock)(NSProgress * progress);
/**
 *  将自己的信息返回给ViewManger的回调
 */
typedef void (^viewMangerInfosBlock)();
/**
 *  将自己的信息返回给ViewModel的回调
 */
typedef void (^viewModelInfosBlock)();

@protocol SNViewModelProtocol <NSObject>

@optional

- (void)sn_notice;

/**
 *  返回指定viewModel的所引用的控制器
 */
- (void)sn_viewModelWithViewController:(UIViewController *)viewController;

/**
 *  加载数据
 */
- (NSURLSessionTask *)smk_viewModelWithProgress:(progressBlock)progress success:(successBlock)success failure:(failureBlock)failure;

/**
 *  传递模型给view
 */
- (void)sn_viewModelWithModelBlcok:(void(^)(id model))modelBlock;

/**
 *  处理viewMangerInfosBlock
 */
- (ViewMangerInfosBlock)smk_viewModelWithViewMangerBlockOfInfos:(NSDictionary *)infos;

/**
 *  处理viewModelInfosBlock
 */
- (ViewModelInfosBlock)smk_viewModelWithOtherViewModelBlockOfInfos:(NSDictionary *)infos;

/**
 *  将viewModel中的信息通过代理传递给ViewManger
 *
 *  @param viewModel   当前viewModel
 *  @param infos 描述信息
 */
- (void)smk_viewModel:(id)viewModel withInfos:(NSDictionary *)infos;

@end
