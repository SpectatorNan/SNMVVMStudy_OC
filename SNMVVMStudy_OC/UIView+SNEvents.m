//
//  UIView+SNEvents.m
//  SNMVVMStudy_OC
//
//  Created by Spectator on 2017/2/8.
//  Copyright © 2017年 Spectator. All rights reserved.
//

#import "UIView+SNEvents.h"
#import <objc/runtime.h>



@implementation UIView (SNEvents)

- (id<SNViewProtocol>)viewDelegate {
    return objc_getAssociatedObject(self, _cmd);
}

- (void)setViewDelegate:(id<SNViewProtocol>)viewDelegate {
    objc_setAssociatedObject(self, @selector(viewDelegate), viewDelegate, OBJC_ASSOCIATION_ASSIGN);
}


- (viewEventsBlock)viewEventsBlock {
    return objc_getAssociatedObject(self, @selector(viewEventsBlock));
}

- (void)setViewEventsBlock:(viewEventsBlock)viewEventsBlock {
    objc_setAssociatedObject(self, @selector(viewEventsBlock), viewEventsBlock, OBJC_ASSOCIATION_COPY);
}

- (void)sn_viewWithViewManger:(id<SNViewProtocol>)viewManger {
    
    if (viewManger) {
        self.viewDelegate = viewManger;
    }
}

@end
