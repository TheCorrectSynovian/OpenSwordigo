/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005457d4
 * Function: Caver::Mesh::CreateInterleavedData
 * Signature: undefined __thiscall CreateInterleavedData(Mesh * this, int param_1, int param_2, int param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::Mesh::CreateInterleavedData(int, int, int) */

void __thiscall Caver::Mesh::CreateInterleavedData(Mesh *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  Mesh *pMVar8;
  ulong uVar9;
  ulong uVar10;
  Mesh **ppMVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  Mesh *local_88 [3];
  long alStack_70 [4];
  
                    /* catch() { ... } // from try @ 00545284 with catch @ 005457dc */
  lVar2 = tpidr_el0;
  alStack_70[3] = *(long *)(lVar2 + 0x28);
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  local_88[0] = this + 0x20;
  local_88[1] = this + 0x38;
  uVar1 = *(uint *)(this + 0x140);
  uVar6 = (ulong)(int)uVar1;
  if ((int)uVar1 < 1) {
    local_88[2] = this + 0x58;
    iVar16 = 2;
  }
  else {
    lVar7 = *(long *)(this + 0x50);
                    /* catch() { ... } // from try @ 00545214 with catch @ 00545828 */
    if (uVar1 < 4) {
      uVar9 = 0;
      uVar10 = 2;
LAB_005458bc:
      lVar13 = uVar6 - uVar9;
      pMVar8 = (Mesh *)(lVar7 + uVar9 * 0x18);
      ppMVar11 = local_88 + uVar10;
      do {
        *ppMVar11 = pMVar8;
        lVar13 = lVar13 + -1;
        pMVar8 = pMVar8 + 0x18;
        ppMVar11 = ppMVar11 + 1;
      } while (lVar13 != 0);
    }
    else {
      uVar9 = uVar6 & 0xfffffffffffffffc;
      uVar10 = uVar9 | 2;
      plVar12 = alStack_70 + 1;
                    /* try { // try from 00545870 to 0064587b has its CatchHandler @ 00545148 */
      uVar14 = uVar9;
      lVar13 = _DAT_0068b480;
      lVar17 = _UNK_0068b488;
      do {
                    /* catch() { ... } // from try @ 005456cc with catch @ 00545878 */
                    /* try { // try from 00545884 to 006458b3 has its CatchHandler @ 00545884
                       catch() { ... } // from try @ 00545884 with catch @ 00545884
                       catch() { ... } // from try @ 005458b8 with catch @ 00545884
                       catch() { ... } // from try @ 0054599c with catch @ 00545884
                       catch() { ... } // from try @ 00545ab4 with catch @ 00545884 */
        lVar18 = lVar7 + lVar13 * 0x18;
        lVar19 = lVar7 + lVar17 * 0x18;
        lVar13 = lVar13 + 4;
        lVar17 = lVar17 + 4;
        uVar14 = uVar14 - 4;
        plVar12[-1] = lVar19;
        plVar12[-2] = lVar18;
        plVar12[1] = lVar19 + 0x30;
        *plVar12 = lVar18 + 0x30;
        plVar12 = plVar12 + 4;
      } while (uVar14 != 0);
                    /* try { // try from 005458b4 to 006458b7 has its CatchHandler @ 00545ac0 */
                    /* try { // try from 005458b8 to 006458ff has its CatchHandler @ 00545884 */
      if (uVar9 != uVar6) goto LAB_005458bc;
    }
    iVar16 = uVar1 + 2;
    local_88[iVar16] = this + 0x58;
    if (iVar16 < 0) goto LAB_00545970;
  }
  iVar15 = 0;
  uVar6 = (ulong)(iVar16 + 1);
  ppMVar11 = local_88;
  do {
                    /* try { // try from 00545900 to 00645927 has its CatchHandler @ 00545a10 */
    pMVar8 = *ppMVar11;
    iVar4 = *(int *)(pMVar8 + 4);
    if (0 < iVar4) {
      *(long *)(pMVar8 + 0x10) = *(long *)(this + 0x110) + (long)iVar15;
      iVar3 = SizeOfDataType(*(undefined4 *)pMVar8);
      iVar15 = iVar15 + iVar3 * iVar4;
    }
    uVar6 = uVar6 - 1;
    ppMVar11 = ppMVar11 + 1;
  } while (uVar6 != 0);
  uVar6 = (ulong)(iVar16 + 1);
  ppMVar11 = local_88;
  lVar7 = 0;
  do {
    pMVar8 = *ppMVar11;
    iVar16 = *(int *)(pMVar8 + 4);
    if (0 < iVar16) {
                    /* try { // try from 0054594c to 00645953 has its CatchHandler @ 00545a20 */
      *(int *)(pMVar8 + 8) = iVar15;
      *(long *)(pMVar8 + 0x10) = lVar7;
      iVar4 = SizeOfDataType(*(undefined4 *)pMVar8);
      lVar7 = lVar7 + iVar4 * iVar16;
    }
    uVar6 = uVar6 - 1;
    ppMVar11 = ppMVar11 + 1;
  } while (uVar6 != 0);
LAB_00545970:
                    /* try { // try from 00545974 to 0064599b has its CatchHandler @ 00545a0c */
  uVar5 = SizeOfDataType(*(undefined4 *)(this + 8));
  *(undefined4 *)(this + 0x10) = uVar5;
  *(undefined8 *)(this + 0x18) = 0;
  AllocateBuffers(this,param_3);
  if (*(long *)(lVar2 + 0x28) == alStack_70[3]) {
                    /* try { // try from 0054599c to 00645a43 has its CatchHandler @ 00545884 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


