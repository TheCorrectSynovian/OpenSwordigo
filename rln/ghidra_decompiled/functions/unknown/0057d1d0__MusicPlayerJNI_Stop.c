/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d1d0
 * Function: MusicPlayerJNI::Stop
 * Signature: undefined __cdecl Stop(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* MusicPlayerJNI::Stop() */

void MusicPlayerJNI::Stop(void)

{
  if (DAT_007e9cc8 != (_jmethodID *)0x0) {
    _JNIEnv::CallVoidMethod(DAT_007e9cc0,DAT_007e9cc8,DAT_007e9cf0);
    return;
  }
                    /* try { // try from 0057d1f0 to 0067d227 has its CatchHandler @ 0057d1f0
                       catch() { ... } // from try @ 0057d1f0 with catch @ 0057d1f0
                       catch() { ... } // from try @ 0057d254 with catch @ 0057d1f0 */
  return;
}


