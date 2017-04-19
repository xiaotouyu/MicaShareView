//
//  MicaShareViewController.h
//  MicaShareView
//
//  Created by dashuios126 on 16/8/30.
//  Copyright © 2016年 dashuios126. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum : NSUInteger {
    QQ,
    Qzone,
    WeChat,
    Weibo
} shareItemType;

typedef void (^selectItemBlock)(NSInteger tag, NSString *title);
@interface JWShareItemButton : UIButton

@end

@interface MicaShareView : UIView

/**
 *  弹出分享
 *
 *  @param superView       父视图
 *  @param shareItems      QQ/WeChat/Weibo
 *  @param selectShareItem 点击回调
 */
- (void)addShareItems:(UIView *)superView  shareItems:(NSArray *)shareItems selectShareItem:(selectItemBlock)selectShareItem;

@end
