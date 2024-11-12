
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSoundSpec.h"

@interface Sound : NSObject <NativeSoundSpec>
#else
#import <React/RCTBridgeModule.h>

@interface Sound : NSObject <RCTBridgeModule>
#endif

@end
