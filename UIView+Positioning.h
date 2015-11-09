

#import <UIKit/UIKit.h>

@interface UIView (Positioning)

@property (nonatomic, assign) CGFloat   x;

@property (nonatomic, assign) CGFloat   y;

@property (nonatomic, assign) CGFloat   width;

@property (nonatomic, assign) CGFloat   height;

@property (nonatomic, assign) CGPoint   origin;

@property (nonatomic, assign) CGSize    size;

@property (nonatomic, assign) CGFloat   bottom;

@property (nonatomic, assign) CGFloat   right;

@property (nonatomic, assign) CGFloat   centerX;

@property (nonatomic, assign) CGFloat   centerY;

@property (nonatomic, strong, readonly) UIView *lastSubviewOnX;

@property (nonatomic, strong, readonly) UIView *lastSubviewOnY;

-(void) centerToParent;
@end