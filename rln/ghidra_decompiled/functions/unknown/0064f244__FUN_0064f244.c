/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064f244
 * Function: FUN_0064f244
 * Signature: undefined FUN_0064f244(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064f244(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_4 != 0);
  *param_1 = &PTR_FUN_007db210;
  uVar1 = FUN_0063be10();
  param_1[2] = uVar1;
  return;
}


