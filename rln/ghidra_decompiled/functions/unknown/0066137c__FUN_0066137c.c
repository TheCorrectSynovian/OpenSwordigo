/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066137c
 * Function: FUN_0066137c
 * Signature: undefined FUN_0066137c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_0066137c(long *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
                    /* try { // try from 00661390 to 00761397 has its CatchHandler @ 00661cc8 */
  lVar1 = FUN_0065f8c0(param_1 + 1,param_2,param_3 | 0x10);
  if (lVar1 != 0) {
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


