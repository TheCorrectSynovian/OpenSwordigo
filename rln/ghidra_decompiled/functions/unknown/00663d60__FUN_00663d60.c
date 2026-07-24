/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663d60
 * Function: FUN_00663d60
 * Signature: undefined FUN_00663d60(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663d60(long *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_00663bdc(param_1 + 1,*param_2,param_3 | 0x10);
  if (lVar1 != 0) {
                    /* try { // try from 00663d94 to 00763d97 has its CatchHandler @ 00663fd4 */
                    /* try { // try from 00663d98 to 00763e0b has its CatchHandler @ 00663d0c */
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


