/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057af4c
 * Function: Caver::AndroidGetPlatformConsentState
 * Signature: undefined __cdecl AndroidGetPlatformConsentState(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidGetPlatformConsentState() */

void Caver::AndroidGetPlatformConsentState(void)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"getPlatformConsentState",&DAT_0069621f);
  _JNIEnv::CallStaticIntMethod(DAT_007e9c60,DAT_007e9c68,uVar1);
  return;
}


