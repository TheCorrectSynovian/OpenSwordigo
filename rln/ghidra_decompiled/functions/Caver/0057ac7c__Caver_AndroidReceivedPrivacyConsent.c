/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057ac7c
 * Function: Caver::AndroidReceivedPrivacyConsent
 * Signature: undefined __cdecl AndroidReceivedPrivacyConsent(bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidReceivedPrivacyConsent(bool) */

void Caver::AndroidReceivedPrivacyConsent(bool param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"receivedPrivacyConsent",&DAT_0069617a);
  _JNIEnv::CallStaticVoidMethod(DAT_007e9c60,DAT_007e9c68,uVar1,(ulong)param_1);
  return;
}


