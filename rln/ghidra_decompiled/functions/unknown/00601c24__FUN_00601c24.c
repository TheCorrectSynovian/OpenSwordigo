/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00601c24
 * Function: FUN_00601c24
 * Signature: undefined FUN_00601c24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00601c24(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00600ac8((int)param_1,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}


