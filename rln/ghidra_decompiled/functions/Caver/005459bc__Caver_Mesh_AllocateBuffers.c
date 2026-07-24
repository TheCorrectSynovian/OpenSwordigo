/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005459bc
 * Function: Caver::Mesh::AllocateBuffers
 * Signature: undefined __thiscall AllocateBuffers(Mesh * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Mesh::AllocateBuffers(int) */

void __thiscall Caver::Mesh::AllocateBuffers(Mesh *this,int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  Mesh *pMVar11;
  Mesh **ppMVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  bool bVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  Mesh *local_98 [3];
  long alStack_80 [4];
  
  lVar4 = tpidr_el0;
  alStack_80[3] = *(long *)(lVar4 + 0x28);
  iVar6 = *(int *)this;
  if (iVar6 < 1) goto LAB_00545b90;
  local_98[0] = this + 0x20;
  local_98[1] = this + 0x38;
  uVar3 = *(uint *)(this + 0x140);
  uVar9 = (ulong)(int)uVar3;
                    /* catch() { ... } // from try @ 00545974 with catch @ 00545a0c */
                    /* catch() { ... } // from try @ 00545900 with catch @ 00545a10 */
  if ((int)uVar3 < 1) {
    iVar18 = 2;
    local_98[2] = this + 0x58;
LAB_00545ae8:
    uVar9 = (ulong)(iVar18 + 1);
                    /* try { // try from 00545aec to 00645af3 has its CatchHandler @ 00545b90 */
    ppMVar12 = local_98;
    iVar19 = 0;
    while( true ) {
      uVar9 = uVar9 - 1;
      pMVar11 = *ppMVar12;
      iVar2 = *(int *)(pMVar11 + 0x10);
      iVar20 = *(int *)(pMVar11 + 4);
      iVar1 = *(int *)(pMVar11 + 8);
                    /* try { // try from 00545b20 to 00645b2b has its CatchHandler @ 00545b38 */
      iVar5 = SizeOfDataType(*(undefined4 *)pMVar11);
      iVar20 = iVar2 + (iVar6 + -1) * iVar1 + iVar5 * iVar20;
      if (iVar20 <= iVar19) {
        iVar20 = iVar19;
      }
      if (uVar9 == 0) break;
      iVar6 = *(int *)this;
      ppMVar12 = ppMVar12 + 1;
      iVar19 = iVar20;
    }
    bVar21 = false;
  }
  else {
    lVar10 = *(long *)(this + 0x50);
    if (uVar3 < 4) {
                    /* catch() { ... } // from try @ 0054594c with catch @ 00545a20 */
      uVar13 = 0;
      uVar14 = 2;
LAB_00545ab0:
                    /* try { // try from 00545ab4 to 00645ad3 has its CatchHandler @ 00545884 */
      lVar16 = uVar9 - uVar13;
                    /* catch() { ... } // from try @ 00545a44 with catch @ 00545abc */
                    /* catch() { ... } // from try @ 005458b4 with catch @ 00545ac0 */
      pMVar11 = (Mesh *)(lVar10 + uVar13 * 0x18);
      ppMVar12 = local_98 + uVar14;
      do {
        *ppMVar12 = pMVar11;
        lVar16 = lVar16 + -1;
        pMVar11 = pMVar11 + 0x18;
        ppMVar12 = ppMVar12 + 1;
      } while (lVar16 != 0);
    }
    else {
                    /* try { // try from 00545a44 to 00645ab3 has its CatchHandler @ 00545abc */
      uVar13 = uVar9 & 0xfffffffffffffffc;
      uVar14 = uVar13 | 2;
      plVar15 = alStack_80 + 1;
      uVar17 = uVar13;
      lVar16 = _DAT_0068b480;
      lVar22 = _UNK_0068b488;
      do {
        lVar23 = lVar10 + lVar16 * 0x18;
        lVar24 = lVar10 + lVar22 * 0x18;
        lVar16 = lVar16 + 4;
        lVar22 = lVar22 + 4;
        uVar17 = uVar17 - 4;
        plVar15[-1] = lVar24;
        plVar15[-2] = lVar23;
        plVar15[1] = lVar24 + 0x30;
        *plVar15 = lVar23 + 0x30;
        plVar15 = plVar15 + 4;
      } while (uVar17 != 0);
      if (uVar13 != uVar9) goto LAB_00545ab0;
    }
                    /* catch() { ... } // from try @ 00545b84 with catch @ 00545ad4 */
    iVar18 = uVar3 + 2;
    local_98[iVar18] = this + 0x58;
    if (-1 < iVar18) goto LAB_00545ae8;
                    /* catch() { ... } // from try @ 00545b20 with catch @ 00545b38 */
    iVar20 = 0;
    bVar21 = true;
  }
  uVar9 = (ulong)iVar20;
  if ((long)uVar9 < 0) {
    uVar9 = 0xffffffffffffffff;
  }
  *(int *)(this + 0x108) = iVar20;
  pvVar7 = operator_new__(uVar9);
  pvVar8 = *(void **)(this + 0x110);
  *(void **)(this + 0x110) = pvVar7;
                    /* try { // try from 00545b5c to 00645b83 has its CatchHandler @ 00545b8c */
  if (pvVar8 != (void *)0x0) {
    operator_delete__(pvVar8);
  }
  if (!bVar21) {
    lVar10 = *(long *)(this + 0x110);
    uVar9 = (ulong)(iVar18 + 1);
    ppMVar12 = local_98;
    do {
      uVar9 = uVar9 - 1;
                    /* try { // try from 00545b84 to 00645b9f has its CatchHandler @ 00545ad4 */
      *(long *)(*ppMVar12 + 0x10) = lVar10 + *(long *)(*ppMVar12 + 0x10);
      ppMVar12 = ppMVar12 + 1;
                    /* catch() { ... } // from try @ 00545b5c with catch @ 00545b8c */
    } while (uVar9 != 0);
  }
LAB_00545b90:
                    /* catch() { ... } // from try @ 00545aec with catch @ 00545b90 */
  if (0 < param_1) {
    iVar6 = SizeOfDataType(*(undefined4 *)(this + 8));
                    /* try { // try from 00545ba0 to 00645bab has its CatchHandler @ 00545bac */
    *(int *)(this + 0x118) = iVar6 * param_1;
    uVar9 = (ulong)(iVar6 * param_1);
                    /* catch() { ... } // from try @ 00545ba0 with catch @ 00545bac */
                    /* try { // try from 00545bb0 to 00645bb3 has its CatchHandler @ 00545bb8 */
    if ((long)uVar9 < 0) {
      uVar9 = 0xffffffffffffffff;
    }
    pvVar7 = operator_new__(uVar9);
                    /* catch() { ... } // from try @ 00545bb0 with catch @ 00545bb8 */
    pvVar8 = *(void **)(this + 0x120);
    *(void **)(this + 0x120) = pvVar7;
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
      pvVar7 = *(void **)(this + 0x120);
    }
    *(long *)(this + 0x18) = (long)pvVar7 + *(long *)(this + 0x18);
  }
  if (*(long *)(lVar4 + 0x28) == alStack_80[3]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


