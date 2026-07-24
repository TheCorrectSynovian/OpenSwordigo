/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ebf4
 * Function: FUN_0064ebf4
 * Signature: undefined FUN_0064ebf4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064ebf4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  param_1[2] = 0;
  *param_1 = &PTR_FUN_007b79e0;
  uVar1 = FUN_0063be7c();
  param_1[4] = uVar1;
  FUN_0064c268(param_1,0);
  return;
}


