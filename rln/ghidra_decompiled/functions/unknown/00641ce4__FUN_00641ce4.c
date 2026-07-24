/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00641ce4
 * Function: FUN_00641ce4
 * Signature: undefined FUN_00641ce4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00641ce4(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  *(long *)((long)param_1 + lVar1) = param_2[1];
  FUN_006219c8((long)param_1 + lVar1,param_3);
  return;
}


