/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057abbc
 * Function: Caver::AndroidHasPrivacyConsent
 * Signature: undefined __cdecl AndroidHasPrivacyConsent(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidHasPrivacyConsent() */

bool Caver::AndroidHasPrivacyConsent(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"hasPrivacyConsent",&DAT_00696115);
  cVar1 = _JNIEnv::CallStaticBooleanMethod(DAT_007e9c60,DAT_007e9c68,uVar2);
  return cVar1 != '\0';
}


