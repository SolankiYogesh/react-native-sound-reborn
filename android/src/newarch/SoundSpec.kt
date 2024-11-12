package com.sound

import com.facebook.react.bridge.ReactApplicationContext

abstract class SoundSpec internal constructor(context: ReactApplicationContext) :
  NativeSoundSpec(context) {
}
