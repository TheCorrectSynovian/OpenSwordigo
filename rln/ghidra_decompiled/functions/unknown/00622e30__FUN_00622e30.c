/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00622e30
 * Function: FUN_00622e30
 * Signature: undefined FUN_00622e30(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00622e30(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  param_1[1] = 0;
  FUN_006210e8((long)param_1 + *(long *)(lVar1 + -0x18),param_3);
  return;
}


