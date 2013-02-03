/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSURL, NSString, MKPlacemark;

@interface MKMapItem : NSObject {
    NSString *_businessID;
    NSString *_yelpID;
    NSString *name;
    NSString *phoneNumber;
    NSString *placeID;
    MKPlacemark *placemark;
    NSURL *url;
}

@property(retain) NSString * businessID;
@property(retain) NSString * businessID;
@property(readonly) BOOL isBusiness;
@property(retain) NSString * name;
@property(retain) NSString * phoneNumber;
@property(retain) NSString * placeID;
@property(retain) NSString * placeID;
@property(retain) MKPlacemark * placemark;
@property(readonly) NSURL * problemURL;
@property(retain) NSURL * url;
@property(retain) NSString * yelpID;
@property(retain) NSString * yelpID;

+ (id)mapItemWithDictionary:(id)arg1;
+ (id)mapItemsFromURL:(id)arg1 options:(id*)arg2;
+ (id)urlForMapItem:(id)arg1 options:(id)arg2;
+ (id)urlForMapItems:(id)arg1 options:(id)arg2;

- (id)_queryStringForDictionary:(id)arg1;
- (id)businessID;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithPlacemark:(id)arg1;
- (BOOL)isBusiness;
- (id)name;
- (id)phoneNumber;
- (id)placeID;
- (id)placemark;
- (id)problemURL;
- (void)setBusinessID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPlaceID:(id)arg1;
- (void)setPlacemark:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setYelpID:(id)arg1;
- (id)url;
- (id)yelpID;

@end