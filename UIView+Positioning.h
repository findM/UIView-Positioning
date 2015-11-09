

#import <UIKit/UIKit.h>

@interface UIView (Positioning)

@property (nonatomic, assign) CGFloat   x;

@property (nonatomic, assign) CGFloat   y;

@property (nonatomic, assign) CGFloat   width;

@property (nonatomic, assign) CGFloat   height;

@property (nonatomic, assign) CGPoint   origin;

@property (nonatomic, assign) CGSize    size;
/*底部的y值*/
@property (nonatomic, assign) CGFloat   bottomY;
/*右边界的x值*/
@property (nonatomic, assign) CGFloat   rightX;

@property (nonatomic, assign) CGFloat   centerX;

@property (nonatomic, assign) CGFloat   centerY;

@end
