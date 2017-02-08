//
//  FirstView.m
//  SNMVVMStudy_OC
//
//  Created by Spectator on 2017/2/8.
//  Copyright © 2017年 Spectator. All rights reserved.
//

#import "FirstView.h"
#import "UIView+SNEvents.h"

@implementation FirstView

- (instancetype)initWithFrame:(CGRect)frame {
    
    self = [super initWithFrame:frame];
    
    if (self) {
        [self setUI];
    }
    
    return self;
}

- (void)setUI {
    
    self.backgroundColor = RGB(126, 205, 244);
    
    UIButton *testBtn = [[UIButton alloc] init];
    [self addSubview:testBtn];
    
    testBtn.frame = CGRectMake(30, 30, 100, 50);
    [testBtn addTarget:self action:@selector(testClick) forControlEvents:UIControlEventTouchUpInside];
    
    UIButton *jumpBtn = [[UIButton alloc] init];
    [self addSubview:jumpBtn];
    
    jumpBtn.frame = CGRectMake(150, 30, 100, 50);
    [testBtn addTarget:self action:@selector(testClick) forControlEvents:UIControlEventTouchUpInside];
}

- (void)testClick {
    
    if (self.viewEventsBlock) {
        self.viewEventsBlock(@"testClick");
    }
}

- (void)jumpClick {
    
}

@end
