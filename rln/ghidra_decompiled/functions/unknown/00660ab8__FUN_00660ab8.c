/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00660ab8
 * Function: FUN_00660ab8
 * Signature: undefined FUN_00660ab8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00660ab8(long *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_0065f8c0(param_1 + 2,param_2,param_3 | 8);
  if (lVar1 != 0) {
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


