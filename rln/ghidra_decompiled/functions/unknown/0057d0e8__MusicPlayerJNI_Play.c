/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d0e8
 * Function: MusicPlayerJNI::Play
 * Signature: undefined __cdecl Play(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* MusicPlayerJNI::Play() */

void MusicPlayerJNI::Play(void)

{
  if (DAT_007e9cc8 != (_jmethodID *)0x0) {
    _JNIEnv::CallVoidMethod(DAT_007e9cc0,DAT_007e9cc8,DAT_007e9ce0);
    return;
  }
  return;
}


