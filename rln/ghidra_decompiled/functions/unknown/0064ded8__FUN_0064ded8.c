/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0064ded8
 * Function: FUN_0064ded8
 * Signature: undefined FUN_0064ded8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0064ded8(undefined8 *param_1,long param_2)

{
  *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  *param_1 = &PTR_FUN_007db1a0;
  param_1[2] = 0;
  FUN_0063ecf0(param_1,0,0);
  return;
}


