/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057b600
 * Function: Caver::AndroidShowInterstitialAd
 * Signature: undefined __cdecl AndroidShowInterstitialAd(double param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidShowInterstitialAd(double) */

bool Caver::AndroidShowInterstitialAd(double param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"showInterstitialAd",&DAT_00696399);
  cVar1 = _JNIEnv::CallStaticBooleanMethod(DAT_007e9c60,DAT_007e9c68,param_1,uVar2);
  return cVar1 != '\0';
}


