/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHealthKitBatteryStateEvent : PBCodable <NSCopying> {
    int _batteryState;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int batteryState : 1; 
    } _has;
    unsigned long long _timestamp;
}

@property (nonatomic) int batteryState;
@property (nonatomic) BOOL hasBatteryState;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsBatteryState:(id)arg1;
- (int)batteryState;
- (id)batteryStateAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasBatteryState;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setBatteryState:(int)arg1;
- (void)setHasBatteryState:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end