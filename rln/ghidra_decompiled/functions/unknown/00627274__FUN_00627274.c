/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00627274
 * Function: FUN_00627274
 * Signature: undefined FUN_00627274(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00627274(long *param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  char local_8 [8];
  
  param_1[1] = 0;
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  FUN_006215c0(lVar2,*(uint *)(lVar2 + 0x20) & 0xfffffffd);
  FUN_00625fe4(local_8,param_1,1);
  if (local_8[0] == '\0') {
                    /* catch() { ... } // from try @ 006265a4 with catch @ 0062730c */
    return param_1;
  }
  lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  plVar1 = *(long **)(lVar2 + 0xe8);
  if (plVar1 != (long *)0x0) {
    uVar3 = plVar1[2];
                    /* catch() { ... } // from try @ 006265ac with catch @ 00627310 */
    if (((ulong)plVar1[1] < uVar3) && (param_2 == *(int *)(uVar3 - 4))) {
      plVar1[2] = uVar3 - 4;
    }
    else {
      param_2 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2);
    }
    if (param_2 != -1) {
      return param_1;
    }
    lVar2 = (long)param_1 + *(long *)(*param_1 + -0x18);
  }
  FUN_006215c0(lVar2,*(uint *)(lVar2 + 0x20) | 1);
                    /* catch() { ... } // from try @ 00626660 with catch @ 00627348 */
  return param_1;
}


