/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663e24
 * Function: FUN_00663e24
 * Signature: undefined FUN_00663e24(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663e24(long *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
                    /* try { // try from 00663e2c to 00763e33 has its CatchHandler @ 00664004 */
  lVar1 = FUN_00663bdc(param_1 + 2,param_2,param_3 | 8);
  if (lVar1 != 0) {
                    /* try { // try from 00663e48 to 00763e53 has its CatchHandler @ 0066403c */
                    /* try { // try from 00663e54 to 00763eeb has its CatchHandler @ 00663d0c */
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar1,*(uint *)(lVar1 + 0x20) | 4);
  return;
}


