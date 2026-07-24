/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663dc4
 * Function: FUN_00663dc4
 * Signature: undefined FUN_00663dc4(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663dc4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_00663bdc(param_1 + 3,*param_2);
  if (lVar1 != 0) {
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* try { // try from 00663e0c to 00763e2b has its CatchHandler @ 0066403c */
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


