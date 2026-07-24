/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00625d68
 * Function: FUN_00625d68
 * Signature: undefined FUN_00625d68(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00625d68(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(long *)((long)param_1 + *(long *)(lVar1 + -0x18)) = param_2[1];
  param_1[1] = 0;
  FUN_006219c8((long)param_1 + *(long *)(lVar1 + -0x18),param_3);
  return;
}


