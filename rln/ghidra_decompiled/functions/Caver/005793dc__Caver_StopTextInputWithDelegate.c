/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005793dc
 * Function: Caver::StopTextInputWithDelegate
 * Signature: undefined __cdecl StopTextInputWithDelegate(ITextInputDelegate * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StopTextInputWithDelegate(Caver::ITextInputDelegate*) */

void Caver::StopTextInputWithDelegate(ITextInputDelegate *param_1)

{
  undefined8 uVar1;
  
  if (DAT_007e9cb0 == param_1) {
    uVar1 = (**(code **)(*(long *)DAT_007e9c60 + 0x388))
                      (DAT_007e9c60,DAT_007e9c68,"stopTextInput",&DAT_0069604e);
    _JNIEnv::CallStaticVoidMethod(DAT_007e9c60,DAT_007e9c68,uVar1);
    DAT_007e9cb0 = (ITextInputDelegate *)0x0;
  }
  return;
}


