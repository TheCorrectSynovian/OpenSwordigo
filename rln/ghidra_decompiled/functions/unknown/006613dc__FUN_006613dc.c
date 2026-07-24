/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 006613dc
 * Function: FUN_006613dc
 * Signature: undefined FUN_006613dc(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_006613dc(long *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  
                    /* try { // try from 006613e8 to 007613f3 has its CatchHandler @ 00661c48 */
  lVar1 = FUN_0065f8c0(param_1 + 1,*param_2,param_3 | 0x10);
  if (lVar1 != 0) {
    FUN_00620c14((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


