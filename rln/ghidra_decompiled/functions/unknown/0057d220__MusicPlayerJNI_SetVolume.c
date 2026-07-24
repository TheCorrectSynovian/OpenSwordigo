/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057d220
 * Function: MusicPlayerJNI::SetVolume
 * Signature: undefined __cdecl SetVolume(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* MusicPlayerJNI::SetVolume(float) */

void MusicPlayerJNI::SetVolume(float param_1)

{
                    /* try { // try from 0057d228 to 0067d22f has its CatchHandler @ 0057d34c */
  if (DAT_007e9cc8 != (_jmethodID *)0x0) {
                    /* try { // try from 0057d238 to 0067d23f has its CatchHandler @ 0057d2ec */
    _JNIEnv::CallVoidMethod(DAT_007e9cc0,DAT_007e9cc8,(double)param_1,DAT_007e9d00);
    return;
  }
  return;
}


