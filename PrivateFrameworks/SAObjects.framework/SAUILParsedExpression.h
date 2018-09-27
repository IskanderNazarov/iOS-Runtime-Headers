/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUILParsedExpression : SADomainObject

@property (nonatomic, retain) SAUILParseableExpression *parseableExpression;
@property (nonatomic, copy) NSString *parsedOutput;

+ (id)parsedExpression;
+ (id)parsedExpressionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)parseableExpression;
- (id)parsedOutput;
- (void)setParseableExpression:(id)arg1;
- (void)setParsedOutput:(id)arg1;

@end