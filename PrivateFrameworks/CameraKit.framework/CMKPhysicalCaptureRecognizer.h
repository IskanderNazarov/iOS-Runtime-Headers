/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKPhysicalCaptureRecognizer : UIGestureRecognizer {
    int _activeButton;
    NSArray *_desiredButtons;
    int _physicalButtonType;
    BOOL _suspended;
}

@property (nonatomic) int activeButton;
@property (nonatomic, copy) NSArray *desiredButtons;
@property (nonatomic) int physicalButtonType;
@property (getter=isSuspended, nonatomic) BOOL suspended;

- (void).cxx_destruct;
- (int)_captureButtonForPhysicalButtonType:(int)arg1;
- (void)_updateApplicationButtonStatus;
- (int)activeButton;
- (id)desiredButtons;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isSuspended;
- (int)physicalButtonType;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setActiveButton:(int)arg1;
- (void)setDesiredButtons:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setPhysicalButtonType:(int)arg1;
- (void)setSuspended:(BOOL)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end