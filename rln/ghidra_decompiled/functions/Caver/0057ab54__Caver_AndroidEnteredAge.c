/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057ab54
 * Function: Caver::AndroidEnteredAge
 * Signature: undefined __cdecl AndroidEnteredAge(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidEnteredAge(int) */

void Caver::AndroidEnteredAge(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"enteredAge",&DAT_00696133);
  _JNIEnv::CallStaticVoidMethod(DAT_007e9c60,DAT_007e9c68,uVar1,(ulong)(uint)param_1);
  return;
}


