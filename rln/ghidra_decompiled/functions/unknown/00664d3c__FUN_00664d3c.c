/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00664d3c
 * Function: FUN_00664d3c
 * Signature: undefined FUN_00664d3c(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void FUN_00664d3c(long *param_1,long *param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = param_2[2];
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[3];
  param_1[1] = 0;
                    /* catch() { ... } // from try @ 00664a38 with catch @ 00664d84 */
  FUN_006219c8((long)param_1 + *(long *)(lVar2 + -0x18),0);
  lVar2 = param_2[4];
  param_1[2] = lVar2;
  lVar2 = *(long *)(lVar2 + -0x18);
  *(long *)((long)param_1 + lVar2 + 0x10) = param_2[5];
  FUN_006219c8((long)param_1 + lVar2 + 0x10,0);
  lVar2 = param_2[1];
  plVar1 = param_1 + 3;
  *param_1 = lVar2;
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[6];
  param_1[2] = param_2[7];
  lVar2 = *param_2;
  *param_1 = lVar2;
                    /* catch() { ... } // from try @ 006649e4 with catch @ 00664dd8 */
  *(long *)((long)param_1 + *(long *)(lVar2 + -0x18)) = param_2[8];
  param_1[2] = param_2[9];
  FUN_00662010(plVar1);
  FUN_006219c8((long)param_1 + *(long *)(*param_1 + -0x18),plVar1);
                    /* catch() { ... } // from try @ 006649d8 with catch @ 00664e10 */
  lVar2 = FUN_00663bdc(plVar1,param_3,param_4);
  if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 00664a70 with catch @ 00664e18 */
    FUN_006215c0((long)param_1 + *(long *)(*param_1 + -0x18),0);
    return;
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar2,*(uint *)(lVar2 + 0x20) | 4);
  return;
}


