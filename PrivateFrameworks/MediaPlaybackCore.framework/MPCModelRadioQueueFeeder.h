/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCModelRadioQueueFeeder : MPQueueFeeder <MPRTCReportingItemSessionContaining> {
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _backgroundTasks;
    MPAVItem * _currentItem;
    bool  _hasLoadedAdditionalItemsForCurrentItem;
    <MPAVItemQueueIdentifier> * _lastCleanPlayedIdentifier;
    <MPAVItemQueueIdentifier> * _lastPlayedIdentifier;
    MPCModelRadioPersonalizationResponse * _lastResponse;
    long long  _loadingOperationDepth;
    NSOperationQueue * _loadingOperationQueue;
    bool  _mayHaveRestrictedContent;
    ICUserIdentityStore * _observedIdentityStore;
    SSVPlayActivityController * _playActivityController;
    MPCModelRadioPlaybackQueue * _playbackQueue;
    MPCPlaybackRequestEnvironment * _playbackRequestEnvironment;
    ICUserIdentity * _proactiveCacheIdentity;
    long long  _queueGeneration;
    NSString * _siriAssetInfo;
    ICStoreRequestContext * _storeRequestContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_beginObservingIdentityStoreForSignOut;
- (id)_defaultGetTracksRequestWithContext:(id)arg1 radioStation:(id)arg2;
- (void)_detectSignOutForIdentityStore:(id)arg1;
- (void)_detectSignOutForIdentityStoreChangeNotification:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (void)_endObservingIdentityStoreForSignOut;
- (void)_failAfterRequest:(id)arg1 withError:(id)arg2;
- (void)_handleGetTracksResponse:(id)arg1 getTracksError:(id)arg2 fromRequest:(id)arg3 completion:(id /* block */)arg4;
- (void)_handlePersonalizationResponse:(id)arg1 personalizationError:(id)arg2 fromRequest:(id)arg3 completion:(id /* block */)arg4;
- (long long)_indexOfAVItem:(id)arg1;
- (void)_loadAdditionalItemsIfNeeded;
- (void)_loadTracksWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_observePersonalizationResponse:(id)arg1;
- (void)_removeRestrictedTracks;
- (void)_repersonalizeCurrentTracks;
- (void)_responseDidInvalidate;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (void)_savePlaybackHistoryWithCurrentIndex:(long long)arg1;
- (id)_startPlaybackRequestWithPlaybackContext:(id)arg1;
- (void)_updateProactiveCaching;
- (bool)allowsQueueResetWhenReachingEnd;
- (bool)allowsUserVisibleUpcomingItems;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (bool)canReorder;
- (bool)canSkipItem:(id)arg1;
- (bool)canSkipToPreviousItemForItem:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (id)init;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (bool)isPlaceholderItemForQueueIdentifier:(id)arg1;
- (bool)isRadioQueueFeeder;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (id)modelPlayEvent;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (bool)playerPreparesItemsForPlaybackAsynchronously;
- (bool)preventsHardQueueModificationsForItem:(id)arg1;
- (long long)realRepeatType;
- (long long)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (id)rtcReportingSessionAdditionalUserInfo;
- (bool)userCanChangeShuffleAndRepeatType;

@end