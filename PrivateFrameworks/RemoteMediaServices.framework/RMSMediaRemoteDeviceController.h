/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSMediaRemoteDeviceController : NSObject {
    NSMapTable * _devices;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_keyWithDevice:(void*)arg1;
- (void)addDevice:(void*)arg1;
- (void*)deviceForUniqueIdentifier:(id)arg1;
- (void)discoverDeviceWithUniqueIdentifier:(id)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (void)removeDevice:(void*)arg1;

@end
