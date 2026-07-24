/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060ca84
 * Function: PVRTModelPODDataShred
 * Signature: undefined __cdecl PVRTModelPODDataShred(CPODData * param_1, uint param_2, int * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODDataShred(CPODData&, unsigned int, int const*) */

void PVRTModelPODDataShred(CPODData *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  void *pvVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  void *__ptr;
  ulong uVar12;
  int unaff_w25;
  uint uVar13;
  int unaff_w27;
  int unaff_w28;
  uint local_bc;
  long local_b8;
  uint local_ac;
  uint local_94;
  uint local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float afStack_78 [4];
  long local_68;
  
                    /* try { // try from 0060caa4 to 0070caab has its CatchHandler @ 0060cab0 */
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
                    /* catch() { ... } // from try @ 0060caa4 with catch @ 0060cab0 */
                    /* catch() { ... } // from try @ 0060c908 with catch @ 0060cab4 */
                    /* catch() { ... } // from try @ 0060c840 with catch @ 0060cac4 */
  if ((param_3 != (int *)0x0) && (__ptr = *(void **)(param_1 + 0x10), __ptr != (void *)0x0)) {
    iVar2 = *(int *)param_1;
    uVar3 = *(uint *)(param_1 + 4);
    *(undefined4 *)(param_1 + 4) = 0;
    uVar13 = *param_3;
    iVar4 = *(int *)(param_1 + 8);
    if (uVar13 == 0) {
      local_b8 = 0;
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
      *(undefined4 *)(param_1 + 4) = 1;
                    /* try { // try from 0060cae8 to 0070caef has its CatchHandler @ 0060caf4 */
      uVar5 = param_3[1];
      uVar1 = -uVar13;
      if (-1 < (int)uVar13) {
        uVar1 = uVar13;
      }
                    /* catch() { ... } // from try @ 0060cae8 with catch @ 0060caf4 */
      unaff_w27 = uVar1 - 0x78;
                    /* catch() { ... } // from try @ 0060c720 with catch @ 0060caf8 */
      if (uVar5 == 0) {
        local_b8 = 0;
      }
      else {
        uVar9 = 2;
        *(undefined4 *)(param_1 + 4) = 2;
        uVar6 = param_3[2];
        uVar1 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar1 = uVar5;
        }
        unaff_w25 = uVar1 - 0x78;
        local_94 = uVar5 >> 0x1f;
                    /* try { // try from 0060cb1c to 0070cb93 has its CatchHandler @ 0060cd54 */
        if (uVar6 == 0) {
          local_b8 = 0;
        }
        else {
          uVar9 = 3;
          *(undefined4 *)(param_1 + 4) = 3;
          uVar5 = param_3[3];
          uVar1 = -uVar6;
          if (-1 < (int)uVar6) {
            uVar1 = uVar6;
          }
          unaff_w28 = uVar1 - 0x78;
          local_ac = uVar6 >> 0x1f;
          if (uVar5 == 0) {
            local_b8 = 0;
          }
          else {
                    /* catch() { ... } // from try @ 0060c660 with catch @ 0060cb48 */
            local_bc = uVar5 >> 0x1f;
            uVar1 = -uVar5;
            if (-1 < (int)uVar5) {
              uVar1 = uVar5;
            }
            uVar9 = 4;
            local_b8 = (long)(int)(uVar1 - 0x78);
            *(undefined4 *)(param_1 + 4) = 4;
          }
        }
      }
      local_90 = uVar13 >> 0x1f;
                    /* try { // try from 0060cb94 to 0070cbdb has its CatchHandler @ 0060c508 */
                    /* catch() { ... } // from try @ 0060c994 with catch @ 0060cb98 */
      if (uVar3 < uVar9) {
                    /* catch() { ... } // from try @ 0060c954 with catch @ 0060cb9c */
        *(uint *)(param_1 + 4) = uVar3;
        uVar9 = uVar3;
      }
    }
                    /* catch() { ... } // from try @ 0060c5e0 with catch @ 0060cba4 */
    uVar13 = iVar2 - 1;
    if (uVar13 < 0xe) {
                    /* catch() { ... } // from try @ 0060c8a0 with catch @ 0060cbb8 */
      iVar11 = *(int *)(&DAT_0069b7b0 + (long)(int)uVar13 * 4);
    }
    else {
      iVar11 = 0;
    }
    iVar11 = uVar9 * iVar11;
    *(int *)(param_1 + 8) = iVar11;
    if (iVar11 == 0) {
      free(__ptr);
                    /* try { // try from 0060cd4c to 0070cd5f has its CatchHandler @ 0060c508 */
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      pvVar8 = malloc((ulong)(iVar11 * param_2));
                    /* try { // try from 0060cbdc to 0070cbe7 has its CatchHandler @ 0060ccc4 */
      *(void **)(param_1 + 0x10) = pvVar8;
      if (param_2 != 0) {
        uVar13 = 0;
        uVar12 = 0;
                    /* try { // try from 0060cc0c to 0070ccbf has its CatchHandler @ 0060cd54 */
        do {
          PVRTVertexRead(afStack_78,(long)__ptr + (ulong)uVar13,iVar2,uVar3);
          uVar10 = (ulong)(uint)*param_3;
          if (*param_3 == 0) {
LAB_0060ccc8:
            memset((void *)((long)&local_88 + uVar10),0,(ulong)(((uint)uVar10 ^ 0xc) + 4));
          }
          else {
            local_88 = afStack_78[unaff_w27];
            if ((local_90 & 0xff) != 0) {
              local_88 = -afStack_78[unaff_w27];
            }
            if (param_3[1] == 0) {
              uVar10 = 4;
              goto LAB_0060ccc8;
            }
            local_84 = afStack_78[unaff_w25];
            if ((local_94 & 0xff) != 0) {
              local_84 = -afStack_78[unaff_w25];
            }
            if (param_3[2] == 0) {
              uVar10 = 8;
              goto LAB_0060ccc8;
            }
            local_80 = afStack_78[unaff_w28];
            if ((local_ac & 0xff) != 0) {
              local_80 = -afStack_78[unaff_w28];
            }
            if (param_3[3] == 0) {
                    /* catch() { ... } // from try @ 0060cbdc with catch @ 0060ccc4 */
              uVar10 = 0xc;
              goto LAB_0060ccc8;
            }
            local_7c = afStack_78[local_b8];
            if ((local_bc & 0xff) != 0) {
              local_7c = -afStack_78[local_b8];
            }
          }
                    /* try { // try from 0060cce8 to 0070ccef has its CatchHandler @ 0060ccf4 */
          uVar9 = *(int *)param_1 - 1;
                    /* catch() { ... } // from try @ 0060cce8 with catch @ 0060ccf4 */
                    /* catch() { ... } // from try @ 0060c6d4 with catch @ 0060ccf8
                       catch() { ... } // from try @ 0060c768 with catch @ 0060ccf8 */
                    /* catch() { ... } // from try @ 0060c614 with catch @ 0060ccfc
                       catch() { ... } // from try @ 0060c6a8 with catch @ 0060ccfc */
          if (uVar9 < 0xe) {
                    /* catch() { ... } // from try @ 0060c9c0 with catch @ 0060cd00 */
            iVar11 = *(int *)(&DAT_0069b7f0 + (long)(int)uVar9 * 4);
          }
          else {
            iVar11 = 0;
          }
          PVRTVertexWrite(*(long *)(param_1 + 0x10) +
                          (ulong)(uint)(*(int *)(param_1 + 8) * (int)uVar12),*(int *)param_1,
                          iVar11 * *(int *)(param_1 + 4),&local_88);
                    /* try { // try from 0060cd24 to 0070cd4b has its CatchHandler @ 0060cd54 */
          uVar12 = uVar12 + 1;
          uVar13 = uVar13 + iVar4;
        } while (param_2 != uVar12);
      }
      free(__ptr);
    }
  }
                    /* catch() { ... } // from try @ 0060cb1c with catch @ 0060cd54
                       catch() { ... } // from try @ 0060cc0c with catch @ 0060cd54
                       catch() { ... } // from try @ 0060cd24 with catch @ 0060cd54 */
  if (*(long *)(lVar7 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0060cf88 with catch @ 0060cd64
                       catch() { ... } // from try @ 0060d1b0 with catch @ 0060cd64 */
  return;
}


