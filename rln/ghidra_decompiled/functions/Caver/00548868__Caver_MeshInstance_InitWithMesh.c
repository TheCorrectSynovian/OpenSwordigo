/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00548868
 * Function: Caver::MeshInstance::InitWithMesh
 * Signature: undefined __thiscall InitWithMesh(MeshInstance * this, shared_ptr * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MeshInstance::InitWithMesh(boost::shared_ptr<Caver::Mesh> const&, bool) */

void __thiscall
Caver::MeshInstance::InitWithMesh(MeshInstance *this,shared_ptr *param_1,bool param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  MeshData *this_00;
  long lVar10;
  undefined8 *puVar11;
  void *pvVar12;
  MeshInstance *pMVar13;
  long lVar14;
  int *piVar15;
  MeshInstance **ppMVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  void *__src;
  long *plVar24;
  int *piVar25;
  int iVar26;
  ulong uVar27;
  ulong uVar28;
  int **ppiVar29;
  long lVar30;
  long lVar31;
  MeshInstance *local_c8 [2];
  long local_b8;
  long local_b0 [3];
  int *local_98 [2];
  long local_88;
  long local_80 [4];
  
  lVar6 = tpidr_el0;
  local_80[3] = *(long *)(lVar6 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00548830 with catch @ 00548890
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054880c with catch @ 005488a0
                        */
  uVar2 = *(undefined8 *)param_1;
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 != 0) {
    *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
  }
  plVar24 = *(long **)(this + 8);
  *(undefined8 *)this = uVar2;
  *(long *)(this + 8) = lVar10;
                    /* try { // try from 005488c4 to 00648913 has its CatchHandler @ 0054891c */
  if ((plVar24 != (long *)0x0) && (lVar10 = plVar24[1], plVar24[1] = lVar10 + -1, lVar10 + -1 == 0))
  {
    (**(code **)(*plVar24 + 0x10))(plVar24);
    lVar10 = plVar24[2];
    plVar24[2] = lVar10 + -1;
    if (lVar10 + -1 == 0) {
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  this[0x10] = (MeshInstance)param_2;
  piVar25 = *(int **)param_1;
  local_c8[0] = this + 0x18;
  local_c8[1] = this + 0x30;
                    /* try { // try from 00548914 to 0064891f has its CatchHandler @ 005487dc */
  local_98[0] = piVar25 + 8;
  local_98[1] = piVar25 + 0xe;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005488c4 with catch @ 0054891c
                        */
  iVar8 = piVar25[0x50];
  uVar28 = (ulong)iVar8;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar28;
  uVar27 = uVar28 * 0x18;
  if (SUB168(auVar5 * ZEXT816(0x18),8) != 0) {
    uVar27 = 0xffffffffffffffff;
  }
  puVar9 = operator_new__(uVar27);
  if (iVar8 != 0) {
    uVar27 = (uVar28 * 0x18 - 0x18) / 0x18 + 1;
    puVar11 = puVar9;
    if (1 < uVar27) {
      uVar17 = uVar27 & 0x1ffffffffffffffe;
      puVar18 = puVar9 + 3;
      puVar11 = puVar9 + uVar17 * 3;
      uVar19 = uVar17;
      do {
        puVar18[-3] = 0;
        *puVar18 = 0;
        *(undefined4 *)(puVar18 + -2) = 0;
        *(undefined4 *)(puVar18 + 1) = 0;
        puVar18[-1] = 0;
        puVar18[2] = 0;
        uVar19 = uVar19 - 2;
        puVar18 = puVar18 + 6;
      } while (uVar19 != 0);
      if (uVar27 == uVar17) goto LAB_005489c8;
    }
    do {
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 1) = 0;
      puVar11[2] = 0;
      puVar11 = puVar11 + 3;
    } while (puVar11 != puVar9 + uVar28 * 3);
  }
LAB_005489c8:
  pvVar12 = *(void **)(this + 0x48);
  *(undefined8 **)(this + 0x48) = puVar9;
  if (pvVar12 != (void *)0x0) {
    operator_delete__(pvVar12);
    piVar25 = *(int **)param_1;
  }
  iVar8 = piVar25[0x50];
  lVar10 = (long)iVar8;
  if (iVar8 < 1) {
    uVar27 = 2;
  }
  else {
    lVar14 = *(long *)(piVar25 + 0x14);
    local_b8 = *(long *)(this + 0x48);
    local_88 = lVar14;
    if (iVar8 == 1) {
      uVar27 = 3;
    }
    else {
      lVar30 = lVar10;
      if (lVar10 < 3) {
        lVar30 = 2;
      }
      uVar28 = lVar30 - 1;
      if (uVar28 < 4) {
        uVar27 = 3;
        uVar19 = 1;
      }
      else {
        uVar20 = uVar28 & 0xfffffffffffffffc;
        uVar27 = uVar28 | 3;
        uVar19 = uVar20 | 1;
        plVar24 = local_80 + 2;
        plVar21 = local_b0 + 2;
        uVar17 = uVar20;
        lVar30 = _DAT_00694f40;
        lVar31 = _UNK_00694f48;
        do {
          lVar22 = lVar30 * 0x18;
          lVar23 = lVar31 * 0x18;
          plVar24[-1] = lVar14 + lVar23;
          plVar24[-2] = lVar14 + lVar22;
          plVar24[1] = lVar14 + lVar23 + 0x30;
          *plVar24 = lVar14 + lVar22 + 0x30;
          lVar30 = lVar30 + 4;
          lVar31 = lVar31 + 4;
          uVar17 = uVar17 - 4;
          plVar21[-1] = local_b8 + lVar23;
          plVar21[-2] = local_b8 + lVar22;
          plVar21[1] = local_b8 + lVar23 + 0x30;
          *plVar21 = local_b8 + lVar22 + 0x30;
          plVar24 = plVar24 + 4;
          plVar21 = plVar21 + 4;
        } while (uVar17 != 0);
        if (uVar28 == uVar20) goto LAB_00548b10;
      }
      pMVar13 = (MeshInstance *)(local_b8 + uVar19 * 0x18);
      piVar15 = (int *)(lVar14 + uVar19 * 0x18);
      uVar28 = uVar27;
      do {
        uVar19 = uVar19 + 1;
        uVar27 = uVar28 + 1;
        local_98[uVar28] = piVar15;
        local_c8[uVar28] = pMVar13;
        pMVar13 = pMVar13 + 0x18;
        piVar15 = piVar15 + 6;
        uVar28 = uVar27;
      } while ((long)uVar19 < lVar10);
    }
  }
LAB_00548b10:
  uVar28 = -(uVar27 >> 0x1f & 1) & 0xfffffff800000000 | (uVar27 & 0xffffffff) << 3;
  iVar8 = 0;
  *(int **)((long)local_98 + uVar28) = piVar25 + 0x16;
  *(MeshInstance **)((long)local_c8 + uVar28) = this + 0x50;
  iVar26 = (int)uVar27;
  if (-1 < iVar26) {
    uVar27 = (ulong)(iVar26 + 1);
    ppiVar29 = local_98;
    ppMVar16 = local_c8;
    do {
      this_00 = (MeshData *)*ppiVar29;
      pMVar13 = *ppMVar16;
      iVar3 = *(int *)(this_00 + 4);
      *(int *)(pMVar13 + 4) = iVar3;
      if (iVar3 < 1) {
        *(undefined8 *)(pMVar13 + 0x10) = 0;
      }
      else {
        uVar4 = *(undefined4 *)this_00;
        *(long *)(pMVar13 + 0x10) = (long)iVar8;
        *(undefined4 *)pMVar13 = uVar4;
        iVar7 = MeshData::valueSize(this_00);
                    /* try { // try from 00548b6c to 00648bb7 has its CatchHandler @ 00548b6c
                       catch() { ... } // from try @ 00548b6c with catch @ 00548b6c
                       catch() { ... } // from try @ 00548cd0 with catch @ 00548b6c
                       catch() { ... } // from try @ 00548e88 with catch @ 00548b6c */
        iVar8 = iVar8 + iVar7 * iVar3;
      }
      ppiVar29 = ppiVar29 + 1;
      uVar27 = uVar27 - 1;
      ppMVar16 = ppMVar16 + 1;
    } while (uVar27 != 0);
    piVar25 = *(int **)param_1;
  }
  VertexArrayObject::CreateVertexBuffer((VertexArrayObject *)(this + 0x68),*piVar25 * iVar8);
  if (-1 < iVar26) {
    uVar27 = (ulong)(iVar26 + 1);
    ppMVar16 = local_c8;
    do {
      pMVar13 = *ppMVar16;
                    /* try { // try from 00548bb8 to 00648bcb has its CatchHandler @ 00548de4 */
      if (0 < *(int *)(pMVar13 + 4)) {
        *(int *)(pMVar13 + 8) = iVar8;
                    /* try { // try from 00548bcc to 00648c2b has its CatchHandler @ 00548de8 */
        *(long *)(pMVar13 + 0x10) = *(long *)(this + 0x70) + *(long *)(pMVar13 + 0x10);
      }
      uVar27 = uVar27 - 1;
      ppMVar16 = ppMVar16 + 1;
    } while (uVar27 != 0);
  }
  CopyAllData(this);
  if (*(long *)(*(long *)this + 0x18) != 0) {
    lVar10 = *(long *)param_1;
    if (*(long *)(lVar10 + 0x128) == *(long *)(lVar10 + 0x130)) {
      uVar1 = *(int *)(lVar10 + 4) << 1;
    }
    else {
      uVar1 = (uint)((ulong)(*(long *)(lVar10 + 0x130) - *(long *)(lVar10 + 0x128)) >> 1) &
              0xfffffffe;
    }
    iVar26 = uVar1 + *(int *)(lVar10 + 4);
    VertexArrayObject::CreateIndexBuffer
              ((VertexArrayObject *)(this + 0x68),*(undefined4 *)(lVar10 + 8),iVar26);
    pvVar12 = *(void **)(this + 0x80);
                    /* try { // try from 00548c38 to 00648c3f has its CatchHandler @ 00548db4 */
    __src = *(void **)(*(long *)param_1 + 0x120);
    iVar8 = SizeOfDataType(*(undefined4 *)(*(long *)param_1 + 8));
    memcpy(pvVar12,__src,(long)(iVar8 * iVar26));
  }
  if (*(long *)(lVar6 + 0x28) == local_80[3]) {
                    /* try { // try from 00548c68 to 00648c77 has its CatchHandler @ 00548e60 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


