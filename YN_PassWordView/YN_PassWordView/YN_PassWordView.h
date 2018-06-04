//
//  YN_PassWordView.h
//  自己玩
//
//  Created by ijianghu on 2018/5/11.
//  Copyright © 2018年 杨楠. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum:NSUInteger {
    passShow1 = 1,//黑点,框,没间隔
    passShow2,//显示数字,框,没间隔
    passShow3,//黑点,框,有间隔
    passShow4,//显示数字,框,有间隔
    passShow5,//显示数字,下划线,一般用做验证码
} passShowType;


typedef void(^textBlock) (NSString *str);

@interface YN_PassWordView : UIView
@property(nonatomic,strong)UITextField *textF;
@property(nonatomic,strong)UIColor *tintColor;
@property(nonatomic,strong)UIColor *textColor;
@property(nonatomic, copy)textBlock textBlock;
//@property(nonatomic,assign)passType * passtype;
@property(nonatomic,assign)passShowType showType;
@property(nonatomic,assign)NSInteger num;//格子数


-(void)show;
-(void)cleanPassword;
@end