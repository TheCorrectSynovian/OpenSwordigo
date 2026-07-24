/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057aa94
 * Function: Caver::AndroidIsAgeKnown
 * Signature: undefined __cdecl AndroidIsAgeKnown(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidIsAgeKnown() */

bool Caver::AndroidIsAgeKnown(void)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"isAgeKnown",&DAT_00696115);
  cVar1 = _JNIEnv::CallStaticBooleanMethod(DAT_007e9c60,DAT_007e9c68,uVar2);
  return cVar1 != '\0';
}


