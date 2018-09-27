/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportMetadataSegment : NSObject {
    SignpostSupportMessageArgument * _argument;
    NSArray * _placeholderTokens;
    NSString * _stringPrefix;
    NSString * _type;
    NSString * _typeNamespace;
}

@property (nonatomic, readonly) SignpostSupportMessageArgument *argument;
@property (nonatomic, readonly) NSArray *placeholderTokens;
@property (nonatomic, readonly) NSString *stringPrefix;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *typeNamespace;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithIsHumanReadable:(bool)arg1;
- (id)argument;
- (id)initWithArgumentObject:(id)arg1 typeNamespace:(id)arg2 type:(id)arg3 tokens:(id)arg4 stringPrefix:(id)arg5;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)placeholderTokens;
- (id)stringPrefix;
- (id)type;
- (id)typeNamespace;

// Image: /System/Library/PrivateFrameworks/SignpostCollection.framework/SignpostCollection

+ (id)placeholderArrayWithOSLogEventProxy:(id)arg1;

@end