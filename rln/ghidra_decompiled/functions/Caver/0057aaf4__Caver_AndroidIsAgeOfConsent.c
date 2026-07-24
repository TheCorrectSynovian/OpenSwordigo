/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057aaf4
 * Function: Caver::AndroidIsAgeOfConsent
 * Signature: undefined __cdecl AndroidIsAgeOfConsent(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidIsAgeOfConsent() */

bool Caver::AndroidIsAgeOfConsent(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"isAgeOfConsent",&DAT_00696115);
  cVar1 = _JNIEnv::CallStaticBooleanMethod(DAT_007e9c60,DAT_007e9c68,uVar2);
  return cVar1 != '\0';
}


