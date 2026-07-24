/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d1f4
 * Function: MusicPlayerJNI::SetLooping
 * Signature: undefined __cdecl SetLooping(bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* MusicPlayerJNI::SetLooping(bool) */

void MusicPlayerJNI::SetLooping(bool param_1)

{
  if (DAT_007e9cc8 != (_jmethodID *)0x0) {
    _JNIEnv::CallVoidMethod(DAT_007e9cc0,DAT_007e9cc8,DAT_007e9cf8,(ulong)param_1);
    return;
  }
  return;
}


