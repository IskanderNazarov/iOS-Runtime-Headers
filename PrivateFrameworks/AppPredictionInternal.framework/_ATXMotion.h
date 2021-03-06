/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXMotion : NSObject {
    long long  _motiontype;
    bool  _stationary;
}

@property (nonatomic, readonly) long long motiontype;
@property (nonatomic, readonly) bool stationary;

+ (id)_getMotionStringFromCMMotionActivity:(id)arg1;
+ (long long)_getMotionTypeFromCMMotionActivity:(id)arg1;
+ (id)findMostCommonAndRecent:(id)arg1 identityFunc:(id /* block */)arg2;
+ (id)getMotionStringFromMotionType:(long long)arg1;
+ (id)summarizeActivityStream:(id)arg1;

- (id)getMotionString;
- (id)initFromCMMotionActivity:(id)arg1;
- (id)initWithMotionType:(long long)arg1 andStationary:(bool)arg2;
- (long long)motiontype;
- (id)print;
- (bool)stationary;

@end
