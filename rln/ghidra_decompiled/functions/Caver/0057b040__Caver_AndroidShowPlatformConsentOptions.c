/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057b040
 * Function: Caver::AndroidShowPlatformConsentOptions
 * Signature: undefined __cdecl AndroidShowPlatformConsentOptions(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidShowPlatformConsentOptions() */

void Caver::AndroidShowPlatformConsentOptions(void)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"showPlatformConsentOptions",&DAT_0069604e);
  _JNIEnv::CallStaticVoidMethod(DAT_007e9c60,DAT_007e9c68,uVar1);
  return;
}


