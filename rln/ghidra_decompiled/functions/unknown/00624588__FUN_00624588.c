/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624588
 * Function: FUN_00624588
 * Signature: undefined FUN_00624588(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00624588(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  char local_8 [8];
  
  param_1[1] = 0;
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) & 0xfffffffd);
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] != '\0') {
                    /* catch() { ... } // from try @ 006240a4 with catch @ 006245d8 */
    lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar3 + 0xe8);
    if (plVar2 == (long *)0x0) {
LAB_00624630:
      FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 1);
      return param_1;
    }
    if ((ulong)plVar2[1] < (ulong)plVar2[2]) {
      plVar2[2] = plVar2[2] - 1;
    }
    else {
      iVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,0xffffffff);
      if (iVar1 == -1) {
        lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
        goto LAB_00624630;
      }
    }
  }
                    /* try { // try from 006245fc to 00724607 has its CatchHandler @ 00624008 */
                    /* catch() { ... } // from try @ 00624448 with catch @ 00624604 */
                    /* try { // try from 00624608 to 00724707 has its CatchHandler @ 00624608
                       catch() { ... } // from try @ 00624608 with catch @ 00624608
                       catch() { ... } // from try @ 00624774 with catch @ 00624608 */
  return param_1;
}


