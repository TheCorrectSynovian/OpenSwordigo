/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00624428
 * Function: FUN_00624428
 * Signature: undefined FUN_00624428(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00624428(long *param_1,char param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  char local_8 [8];
  
  param_1[1] = 0;
                    /* try { // try from 00624448 to 007245fb has its CatchHandler @ 00624604 */
  lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) & 0xfffffffd);
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] != '\0') {
                    /* catch() { ... } // from try @ 006241ec with catch @ 00624474 */
                    /* catch() { ... } // from try @ 006241dc with catch @ 0062447c */
    lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
    plVar2 = *(long **)(lVar3 + 0xe8);
    if (plVar2 != (long *)0x0) {
                    /* catch() { ... } // from try @ 006241f4 with catch @ 00624488
                       catch() { ... } // from try @ 0062428c with catch @ 00624488 */
      uVar4 = plVar2[2];
      if (((ulong)plVar2[1] < uVar4) && (*(char *)(uVar4 - 1) == param_2)) {
        plVar2[2] = uVar4 - 1;
        return param_1;
      }
      iVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      if (iVar1 != -1) {
        return param_1;
      }
      lVar3 = (long)param_1 + *(long *)(*param_1 + -0x18);
    }
    FUN_00620c14(lVar3,*(uint *)(lVar3 + 0x20) | 1);
  }
  return param_1;
}


