/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d1ac
 * Function: MusicPlayerJNI::Pause
 * Signature: undefined __cdecl Pause(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* MusicPlayerJNI::Pause() */

void MusicPlayerJNI::Pause(void)

{
  if (DAT_007e9cc8 != (_jmethodID *)0x0) {
    _JNIEnv::CallVoidMethod(DAT_007e9cc0,DAT_007e9cc8,DAT_007e9ce8);
    return;
  }
  return;
}


