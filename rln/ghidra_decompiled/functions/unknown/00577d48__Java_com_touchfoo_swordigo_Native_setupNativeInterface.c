/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00577d48
 * Function: Java_com_touchfoo_swordigo_Native_setupNativeInterface
 * Signature: undefined Java_com_touchfoo_swordigo_Native_setupNativeInterface(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_setupNativeInterface(long *param_1)

{
  undefined8 uVar1;
  
  DAT_007e9c60 = param_1;
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,"com/touchfoo/swordigo/Native");
  DAT_007e9c68 = (**(code **)(*param_1 + 0xa8))(param_1,uVar1);
  return;
}


