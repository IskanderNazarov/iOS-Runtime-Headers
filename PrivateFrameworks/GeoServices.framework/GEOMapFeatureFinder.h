/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOMapAccess, GEOMapTileFinder;

@interface GEOMapFeatureFinder : GEOMapRequest {
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    BOOL _ignoreUnnamedFeatures;
    id _pointHandler;
    id _polygonHandler;
    id _roadHandler;
    GEOMapTileFinder *_tileFinder;
}

@property BOOL ignoreUnnamedFeatures;
@property(readonly) GEOMapAccess * map;
@property(copy) id pointHandler;
@property(copy) id polygonHandler;
@property(copy) id roadHandler;

- (id).cxx_construct;
- (void)_pickRoadInTile:(id)arg1 tileRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 localPoint:(const struct Matrix<float, 2, 1> { float x1[2]; }*)arg3;
- (void)cancel;
- (void)dealloc;
- (void)findFeatures:(id)arg1 pointHandler:(id)arg2 polygonHandler:(id)arg3 completionHandler:(id)arg4;
- (BOOL)ignoreUnnamedFeatures;
- (id)initWithMap:(id)arg1 center:(struct { double x1; double x2; })arg2;
- (id)map;
- (id)pointHandler;
- (id)polygonHandler;
- (id)roadHandler;
- (void)setIgnoreUnnamedFeatures:(BOOL)arg1;
- (void)setPointHandler:(id)arg1;
- (void)setPolygonHandler:(id)arg1;
- (void)setRoadHandler:(id)arg1;

@end