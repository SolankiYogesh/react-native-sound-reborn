#import <AVFoundation/AVFoundation.h>
#import <React/RCTEventEmitter.h>

#ifdef RCT_NEW_ARCH_ENABLED
  #import <RNSoundSpec/RNSoundSpec.h>

@interface Sound : RCTEventEmitter  <NativeSoundIOSSpec,AVAudioPlayerDelegate>
#else
#import <React/RCTBridgeModule.h>
@interface Sound : RCTEventEmitter <RCTBridgeModule, AVAudioPlayerDelegate>
#endif

@property (nonatomic, weak) NSNumber *_key;

@end
