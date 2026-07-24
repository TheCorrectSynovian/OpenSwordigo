/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ec54
 * Function: FUN_0064ec54
 * Signature: undefined FUN_0064ec54(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064ec54(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_007b79e0;
  uVar1 = FUN_0063be7c();
  param_1[4] = uVar1;
  FUN_0064c268(param_1,0);
  return;
}


