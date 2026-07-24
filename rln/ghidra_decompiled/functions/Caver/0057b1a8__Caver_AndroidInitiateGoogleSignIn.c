/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057b1a8
 * Function: Caver::AndroidInitiateGoogleSignIn
 * Signature: undefined __cdecl AndroidInitiateGoogleSignIn(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AndroidInitiateGoogleSignIn() */

void Caver::AndroidInitiateGoogleSignIn(void)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                    (DAT_007e9c60,DAT_007e9c68,"initiateGoogleSignIn",&DAT_0069604e);
  _JNIEnv::CallStaticVoidMethod(DAT_007e9c60,DAT_007e9c68,uVar1);
  return;
}


