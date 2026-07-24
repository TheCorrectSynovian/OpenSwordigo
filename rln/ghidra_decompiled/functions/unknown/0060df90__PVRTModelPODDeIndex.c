/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0060df90
 * Function: PVRTModelPODDeIndex
 * Signature: undefined __cdecl PVRTModelPODDeIndex(SPODMesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* PVRTModelPODDeIndex(SPODMesh&) */

void PVRTModelPODDeIndex(SPODMesh *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *__dest;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  
  lVar11 = *(long *)(param_1 + 0xe8);
  if (lVar11 == 0) {
    return;
  }
  if (*(int *)param_1 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar5 = (ulong)uVar2;
  if (uVar2 == 0) {
    iVar12 = *(int *)(param_1 + 4) * 3;
  }
  else {
    if (uVar2 < 8) {
      uVar8 = 0;
      iVar12 = 0;
    }
    else {
      uVar8 = uVar5 & 0xfffffff8;
      puVar9 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      iVar19 = 0;
      uVar10 = uVar8;
      do {
        puVar1 = puVar9 + -2;
        puVar3 = puVar9 + -1;
        puVar4 = puVar9 + 1;
        uVar20 = *puVar9;
        uVar10 = uVar10 - 8;
        puVar9 = puVar9 + 4;
        iVar12 = iVar12 + (int)*puVar1 + 2;
        iVar13 = iVar13 + (int)((ulong)*puVar1 >> 0x20) + 2;
        iVar14 = iVar14 + (int)*puVar3 + 2;
        iVar15 = iVar15 + (int)((ulong)*puVar3 >> 0x20) + 2;
        iVar16 = iVar16 + (int)uVar20 + 2;
        iVar17 = iVar17 + (int)((ulong)uVar20 >> 0x20) + 2;
        iVar18 = iVar18 + (int)*puVar4 + 2;
        iVar19 = iVar19 + (int)((ulong)*puVar4 >> 0x20) + 2;
      } while (uVar10 != 0);
      iVar12 = iVar16 + iVar12 + iVar17 + iVar13 + iVar18 + iVar14 + iVar19 + iVar15;
      if (uVar8 == uVar5) goto LAB_0060e04c;
    }
    lVar6 = uVar5 - uVar8;
    piVar7 = (int *)(*(long *)(param_1 + 0x28) + uVar8 * 4);
    do {
      lVar6 = lVar6 + -1;
      iVar12 = iVar12 + *piVar7 + 2;
      piVar7 = piVar7 + 1;
    } while (lVar6 != 0);
  }
LAB_0060e04c:
  uVar2 = *(uint *)(param_1 + 0x40);
  *(int *)param_1 = iVar12;
  if (uVar2 * iVar12 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = calloc((ulong)(uVar2 * iVar12),1);
  }
  if (*(int *)(param_1 + 0x10) == 3) {
    if ((iVar12 != 0) &&
       (memcpy(__dest,(void *)(lVar11 + (ulong)(uVar2 * **(ushort **)(param_1 + 0x20))),(ulong)uVar2
              ), 1 < *(uint *)param_1)) {
      uVar5 = 1;
      do {
        uVar2 = *(uint *)(param_1 + 0x40);
        memcpy((void *)((long)__dest + (ulong)(uVar2 * (int)uVar5)),
               (void *)(*(long *)(param_1 + 0xe8) +
                       (ulong)(uVar2 * *(ushort *)(*(long *)(param_1 + 0x20) + uVar5 * 2))),
               (ulong)uVar2);
                    /* catch() { ... } // from try @ 0060df6c with catch @ 0060e0d8 */
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)param_1);
    }
  }
  else {
                    /* try { // try from 0060e0f4 to 0070e1bb has its CatchHandler @ 0060e0f4
                       catch(type#1 @ 00000000) { ... } // from try @ 0060e0f4 with catch @ 0060e0f4
                       catch(type#1 @ 00000000) { ... } // from try @ 0060e1e4 with catch @ 0060e0f4
                       catch(type#1 @ 00000000) { ... } // from try @ 0060e27c with catch @ 0060e0f4
                        */
    if ((iVar12 != 0) &&
       (memcpy(__dest,(void *)(lVar11 + (ulong)(**(int **)(param_1 + 0x20) * uVar2)),(ulong)uVar2),
       1 < *(uint *)param_1)) {
      uVar5 = 1;
      do {
        uVar2 = *(uint *)(param_1 + 0x40);
        memcpy((void *)((long)__dest + (ulong)(uVar2 * (int)uVar5)),
               (void *)(*(long *)(param_1 + 0xe8) +
                       (ulong)(*(int *)(*(long *)(param_1 + 0x20) + uVar5 * 4) * uVar2)),
               (ulong)uVar2);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)param_1);
    }
  }
  if (*(void **)(param_1 + 0xe8) != (void *)0x0) {
    free(*(void **)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  *(void **)(param_1 + 0xe8) = __dest;
  if (*(void **)(param_1 + 0x20) != (void *)0x0) {
    free(*(void **)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


