/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileQuickLook.framework/MobileQuickLook
 */

@class RTFNSColor;

@interface RTFNSShadow : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    float shadowBlurRadius;
    RTFNSColor *shadowColor;
    } shadowOffset;
}

@property float shadowBlurRadius; /* unknown property attribute: VshadowBlurRadius */
@property CGSize shadowOffset; /* unknown property attribute: VshadowOffset */
@property(retain) RTFNSColor *shadowColor; /* unknown property attribute: VshadowColor */

- (void)setShadowBlurRadius:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (float)shadowBlurRadius;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;

@end