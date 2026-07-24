/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00663f40
 * Function: FUN_00663f40
 * Signature: undefined FUN_00663f40(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00663f40(long *param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1 + 2;
  lVar2 = param_2[1];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[2];
  param_1[1] = 0;
  FUN_006219c8((long)param_1 + *(long *)(lVar2 + -0x18),0);
                    /* try { // try from 00663f90 to 00763f93 has its CatchHandler @ 00663fd0 */
  lVar2 = *param_2;
                    /* try { // try from 00663f94 to 0076402f has its CatchHandler @ 00663d0c */
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  FUN_00662010(plVar1);
  FUN_006219c8((long)param_1 + *(long *)(*param_1 + -0x18),plVar1);
  lVar2 = FUN_00663bdc(plVar1,*param_3,param_4 | 8);
                    /* catch() { ... } // from try @ 00663f90 with catch @ 00663fd0 */
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 00663d94 with catch @ 00663fd4 */
                    /* catch() { ... } // from try @ 00663d4c with catch @ 00663fe0 */
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
                    /* catch() { ... } // from try @ 00663f0c with catch @ 00663ff4 */
    return;
  }
                    /* catch() { ... } // from try @ 00663e2c with catch @ 00664004 */
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 00663eec with catch @ 00664014
                       catch() { ... } // from try @ 00663f28 with catch @ 00664014 */
  FUN_006215c0(lVar2,*(uint *)(lVar2 + 0x20) | 4);
  return;
}


