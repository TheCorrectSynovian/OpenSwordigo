/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0066f6c8
 * Function: FUN_0066f6c8
 * Signature: undefined FUN_0066f6c8(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_0066f6c8(long *param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  long *plVar7;
  char local_8 [8];
  
                    /* try { // try from 0066f6d8 to 0076f6e3 has its CatchHandler @ 0066f76c */
  if (param_2 == 1) {
    plVar7 = (long *)FUN_00623f08();
    return plVar7;
  }
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
                    /* try { // try from 0066f704 to 0076f707 has its CatchHandler @ 0066f7a0 */
                    /* try { // try from 0066f708 to 0076f78f has its CatchHandler @ 0066f51c */
  if ((param_2 < 1) || (local_8[0] == '\0')) {
                    /* try { // try from 0066f7f0 to 0076f7f7 has its CatchHandler @ 0066f800 */
                    /* try { // try from 0066f7f8 to 0076f803 has its CatchHandler @ 0066f51c */
    return param_1;
  }
  plVar7 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if ((byte *)plVar7[2] < (byte *)plVar7[3]) {
    uVar3 = (uint)*(byte *)plVar7[2];
  }
  else {
    uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
  }
  lVar5 = param_1[1];
  bVar2 = false;
  while( true ) {
    while (param_2 <= lVar5) {
      if ((uVar3 == 0xffffffff) || (param_2 != 0x7fffffffffffffff)) goto LAB_0066f800;
      param_1[1] = -0x8000000000000000;
      bVar2 = true;
      lVar5 = -0x8000000000000000;
                    /* try { // try from 0066f7bc to 0076f7c3 has its CatchHandler @ 0066f7c8 */
    }
    if (uVar3 == 0xffffffff) break;
    pbVar6 = (byte *)plVar7[3];
    pbVar4 = (byte *)plVar7[2];
                    /* catch() { ... } // from try @ 0066f6d8 with catch @ 0066f76c */
    lVar1 = param_2 - lVar5;
    if ((long)pbVar6 - (long)pbVar4 < param_2 - lVar5) {
      lVar1 = (long)pbVar6 - (long)pbVar4;
    }
    if (lVar1 < 2) {
      param_1[1] = lVar5 + 1;
      if (pbVar6 <= pbVar4) {
        uVar3 = (**(code **)(*plVar7 + 0x50))(plVar7);
        if (uVar3 != 0xffffffff) {
          pbVar4 = (byte *)plVar7[2];
          pbVar6 = (byte *)plVar7[3];
                    /* catch() { ... } // from try @ 0066f874 with catch @ 0066f8c4 */
          goto LAB_0066f860;
        }
        goto LAB_0066f884;
      }
      pbVar4 = pbVar4 + 1;
      plVar7[2] = (long)pbVar4;
LAB_0066f860:
      if (pbVar6 <= pbVar4) goto LAB_0066f874;
      uVar3 = (uint)*pbVar4;
      lVar5 = param_1[1];
    }
    else {
      plVar7[2] = (long)(pbVar4 + lVar1);
      lVar5 = lVar5 + lVar1;
      param_1[1] = lVar5;
      if (pbVar4 + lVar1 < pbVar6) {
                    /* try { // try from 0066f790 to 0076f797 has its CatchHandler @ 0066f79c */
        uVar3 = (uint)pbVar4[lVar1];
                    /* catch() { ... } // from try @ 0066f790 with catch @ 0066f79c */
                    /* catch() { ... } // from try @ 0066f6b4 with catch @ 0066f7a0
                       catch() { ... } // from try @ 0066f704 with catch @ 0066f7a0 */
      }
      else {
LAB_0066f874:
                    /* try { // try from 0066f874 to 0076f87b has its CatchHandler @ 0066f8c4 */
                    /* try { // try from 0066f87c to 0076f8e7 has its CatchHandler @ 0066f83c */
        uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
LAB_0066f884:
        lVar5 = param_1[1];
      }
    }
  }
LAB_0066f800:
                    /* catch() { ... } // from try @ 0066f7f0 with catch @ 0066f800 */
  if (bVar2) {
    param_1[1] = 0x7fffffffffffffff;
  }
  if (uVar3 == 0xffffffff) {
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00620c14(lVar5,*(uint *)(lVar5 + 0x20) | 2);
                    /* catch() { ... } // from try @ 0066f87c with catch @ 0066f83c
                       catch() { ... } // from try @ 0066f8f0 with catch @ 0066f83c */
    return param_1;
  }
  return param_1;
}


