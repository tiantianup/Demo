//
//  AutoScrollLabel.h
//  跑马灯
//
//  Created by 啄木鸟 on 16/12/23.
//  Copyright © 2016年 啄木鸟. All rights reserved.
//

#import <UIKit/UIKit.h>

enum AutoScrollDirection {
    AUTOSCROLL_SCROLL_RIGHT,
    AUTOSCROLL_SCROLL_LEFT,
};

@interface AutoScrollLabel : UIScrollView <UIScrollViewDelegate>{
    UILabel *label ;
    enum AutoScrollDirection scrollDirection;
    float scrollSpeed;
    NSTimeInterval pauseInterval;
    int bufferSpaceBetweenLabels;
    bool isScrolling;
}

@property(nonatomic) enum AutoScrollDirection scrollDirection;
@property(nonatomic) float scrollSpeed;
@property(nonatomic) NSTimeInterval pauseInterval;
@property(nonatomic) int bufferSpaceBetweenLabels;
// normal UILabel properties
@property(nonatomic,retain) UIColor *textColor;
@property(nonatomic, retain) UIFont *font;

- (void) readjustLabels;
- (void) setText: (NSString *) text;
- (NSString *) text;
- (void) scroll;


@end

