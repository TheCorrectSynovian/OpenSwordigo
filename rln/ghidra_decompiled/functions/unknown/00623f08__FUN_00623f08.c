/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00623f08
 * Function: FUN_00623f08
 * Signature: undefined FUN_00623f08(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00623f08(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char local_8 [8];
  
                    /* try { // try from 00623f14 to 00724007 has its CatchHandler @ 00622fb4 */
                    /* catch() { ... } // from try @ 00623c48 with catch @ 00623f18
                       catch() { ... } // from try @ 00623dd8 with catch @ 00623f18 */
                    /* catch() { ... } // from try @ 00623808 with catch @ 00623f1c */
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] != '\0') {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((ulong)plVar3[2] < (ulong)plVar3[3]) {
      plVar3[2] = plVar3[2] + 1;
    }
    else {
      iVar2 = (**(code **)(*plVar3 + 0x50))();
                    /* catch() { ... } // from try @ 00623180 with catch @ 00623f80 */
      if (iVar2 == -1) {
        lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 00623360 with catch @ 00623f94 */
        FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 2);
        return param_1;
      }
    }
    param_1[1] = 1;
  }
  return param_1;
}


