/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactSuggestionViewControllerLabeledValueDataSource : NSObject <CNContactSuggestionViewControllerDataSource> {
    CNLabeledValue * _labeledValue;
}

@property (nonatomic, readonly) NSString *appName;
@property (nonatomic, readonly) NSString *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSAttributedString *formattedSnippet;
@property (nonatomic, readonly) NSString *from;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNLabeledValue *labeledValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)appName;
- (id)date;
- (id)formattedSnippet;
- (id)from;
- (id)initWithLabeledValue:(id)arg1;
- (id)labeledValue;
- (void)setLabeledValue:(id)arg1;
- (id)title;
- (unsigned long long)type;
- (id)url;

@end
