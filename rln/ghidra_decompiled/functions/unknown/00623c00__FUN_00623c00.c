/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00623c00
 * Function: FUN_00623c00
 * Signature: undefined FUN_00623c00(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


long * FUN_00623c00(long *param_1,long *param_2,byte param_3)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  long *plVar8;
  uint uVar9;
  char local_8 [8];
  
                    /* catch() { ... } // from try @ 00623bb8 with catch @ 00623c24 */
                    /* catch() { ... } // from try @ 006239f4 with catch @ 00623c28 */
  param_1[1] = 0;
  FUN_006230e4(local_8,param_1,1);
  if (local_8[0] == '\0') goto LAB_00623d44;
                    /* try { // try from 00623c48 to 00723d0b has its CatchHandler @ 00623f18 */
  plVar8 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  uVar3 = (uint)param_3;
  if ((byte *)plVar8[2] < (byte *)plVar8[3]) {
    bVar2 = *(byte *)plVar8[2];
    uVar9 = (uint)bVar2;
    uVar6 = (uint)bVar2;
    if (uVar3 == uVar9) goto LAB_00623d44;
LAB_00623c6c:
    do {
      while( true ) {
                    /* catch() { ... } // from try @ 00623748 with catch @ 00623c74
                       catch() { ... } // from try @ 0062397c with catch @ 00623c74 */
                    /* catch() { ... } // from try @ 00623628 with catch @ 00623c78 */
        if ((undefined1 *)param_2[5] < (undefined1 *)param_2[6]) {
          *(undefined1 *)param_2[5] = (char)uVar6;
          param_2[5] = param_2[5] + 1;
        }
        else {
          iVar4 = (**(code **)(*param_2 + 0x68))(param_2);
          if (iVar4 == -1) goto LAB_00623ccc;
        }
        pbVar5 = (byte *)plVar8[2];
        pbVar7 = (byte *)plVar8[3];
        param_1[1] = param_1[1] + 1;
        if (pbVar5 < pbVar7) {
          pbVar5 = pbVar5 + 1;
          plVar8[2] = (long)pbVar5;
        }
        else {
          iVar4 = (**(code **)(*plVar8 + 0x50))(plVar8);
          if (iVar4 == -1) goto LAB_00623cd4;
          pbVar5 = (byte *)plVar8[2];
          pbVar7 = (byte *)plVar8[3];
        }
        if (pbVar7 <= pbVar5) break;
        uVar9 = (uint)*pbVar5;
        uVar6 = uVar9;
                    /* catch() { ... } // from try @ 00623920 with catch @ 00623cc4 */
                    /* catch() { ... } // from try @ 006234a8 with catch @ 00623cc8 */
        if (uVar3 == uVar9) goto LAB_00623ccc;
      }
      uVar9 = (**(code **)(*plVar8 + 0x48))(plVar8);
      uVar6 = uVar9 & 0xff;
    } while (uVar3 != uVar9 && uVar9 != 0xffffffff);
  }
  else {
    uVar9 = (**(code **)(*plVar8 + 0x48))(plVar8);
    uVar6 = uVar9 & 0xff;
                    /* catch() { ... } // from try @ 00623b1c with catch @ 00623e1c */
    if ((uVar9 != 0xffffffff) && (uVar3 != uVar9)) goto LAB_00623c6c;
  }
LAB_00623ccc:
  if (uVar9 == 0xffffffff) {
LAB_00623cd4:
    uVar3 = 6;
    if (param_1[1] != 0) {
      uVar3 = 2;
    }
    lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
    FUN_00620c14(lVar1,uVar3 | *(uint *)(lVar1 + 0x20));
    return param_1;
  }
LAB_00623d44:
  if (param_1[1] != 0) {
                    /* try { // try from 00623d0c to 00723dd7 has its CatchHandler @ 00622fb4 */
                    /* catch() { ... } // from try @ 006231fc with catch @ 00623d10 */
                    /* catch() { ... } // from try @ 00623274 with catch @ 00623d14 */
    return param_1;
  }
  lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
                    /* catch() { ... } // from try @ 006233d0 with catch @ 00623d64 */
                    /* catch() { ... } // from try @ 00623ad8 with catch @ 00623d68 */
  FUN_00620c14(lVar1,*(uint *)(lVar1 + 0x20) | 4);
                    /* catch() { ... } // from try @ 00623a68 with catch @ 00623d6c */
                    /* catch() { ... } // from try @ 00623894 with catch @ 00623d70 */
                    /* catch() { ... } // from try @ 0062389c with catch @ 00623d7c */
  return param_1;
}


