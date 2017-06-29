
//
//  MarqueeLabel.h
//  

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, XDSMarqueeType) {
    XDSMLLeftRight = 0,
    XDSMLRightLeft,
    XDSMLContinuous,
    XDSMLContinuousReverse
};

@interface XDSLabel : UILabel

- (instancetype)initWithFrame:(CGRect)frame;
- (instancetype)initWithFrame:(CGRect)frame rate:(CGFloat)pixelsPerSec andFadeLength:(CGFloat)fadeLength;
- (instancetype)initWithFrame:(CGRect)frame duration:(NSTimeInterval)scrollDuration andFadeLength:(CGFloat)fadeLength;
- (void)minimizeLabelFrameWithMaximumSize:(CGSize)maxSize adjustHeight:(BOOL)adjustHeight;

@property (nonatomic, assign) UIViewAnimationOptions animationCurve;
@property (nonatomic, assign) BOOL labelize;
@property (nonatomic, assign) BOOL holdScrolling;
@property (nonatomic, assign) BOOL tapToScroll;
@property (nonatomic, assign) XDSMarqueeType marqueeType;
@property (nonatomic, assign) NSTimeInterval scrollDuration;
@property (nonatomic, assign) CGFloat rate;
@property (nonatomic, assign) CGFloat leadingBuffer;
@property (nonatomic, assign) CGFloat trailingBuffer;
@property (nonatomic, assign) CGFloat continuousMarqueeExtraBuffer DEPRECATED_MSG_ATTRIBUTE("Use trailingBuffer property instead.");
@property (nonatomic, assign) CGFloat fadeLength;
@property (nonatomic, assign) CGFloat animationDelay;

- (void)restartLabel;
- (void)resetLabel;
- (void)pauseLabel;
- (void)unpauseLabel;
- (void)labelWillBeginScroll;
- (void)labelReturnedToHome:(BOOL)finished;
@property (nonatomic, assign, readonly) BOOL isPaused;
@property (nonatomic, assign, readonly) BOOL awayFromHome;

+ (void)restartLabelsOfController:(UIViewController *)controller;
+ (void)controllerViewDidAppear:(UIViewController *)controller;
+ (void)controllerViewWillAppear:(UIViewController *)controller;
+ (void)controllerViewAppearing:(UIViewController *)controller DEPRECATED_MSG_ATTRIBUTE("Use restartLabelsOfController: method");
+ (void)controllerLabelsShouldLabelize:(UIViewController *)controller;
+ (void)controllerLabelsShouldAnimate:(UIViewController *)controller;

@end
