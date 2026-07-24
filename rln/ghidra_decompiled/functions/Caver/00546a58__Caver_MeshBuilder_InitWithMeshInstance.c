/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00546a58
 * Function: Caver::MeshBuilder::InitWithMeshInstance
 * Signature: undefined __thiscall InitWithMeshInstance(MeshBuilder * this, MeshInstance * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::InitWithMeshInstance(Caver::MeshInstance*, bool) */

void __thiscall
Caver::MeshBuilder::InitWithMeshInstance(MeshBuilder *this,MeshInstance *param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  MeshInstance MVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  MeshInstance *pMVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  Mesh *pMVar20;
  vector<int,std::allocator<int>> *pvVar21;
  vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>> *pvVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 local_a4;
  undefined1 auStack_a0 [72];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  pMVar20 = *(Mesh **)param_1;
  InitWithMesh(this,pMVar20,false);
  if (param_2) {
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(pMVar20 + 4);
    uVar24 = (ulong)*(int *)pMVar20;
    *(int *)(this + 0x10) = *(int *)pMVar20;
    memset(auStack_a0,0,0x44);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 005468b0 with catch @ 00546ac4
                        */
    pvVar22 = (vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>> *)
              (this + 0x18);
    lVar13 = *(long *)(this + 0x20) - *(long *)pvVar22 >> 2;
    uVar14 = lVar13 * -0xf0f0f0f0f0f0f0f;
                    /* try { // try from 00546ae4 to 00646b0b has its CatchHandler @ 00546b14 */
    if (uVar14 < uVar24) {
      std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::
      _M_fill_insert(pvVar22,*(long *)(this + 0x20),uVar24 + lVar13 * 0xf0f0f0f0f0f0f0f,auStack_a0);
    }
    else if (uVar14 - uVar24 != 0) {
      *(ulong *)(this + 0x20) = *(long *)pvVar22 + uVar24 * 0x44;
    }
                    /* try { // try from 00546b0c to 00646b17 has its CatchHandler @ 00546870 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00546ae4 with catch @ 00546b14
                        */
    if (0 < *(int *)(pMVar20 + 0x24)) {
      lVar13 = *(long *)pvVar22;
      if (param_1[0x10] == (MeshInstance)0x0) {
        pMVar8 = param_1 + 0x18;
      }
      else {
                    /* catch() { ... } // from try @ 00546b68 with catch @ 00546b28 */
        pMVar8 = (MeshInstance *)(*(long *)param_1 + 0x20);
      }
      iVar1 = *(int *)(this + 0x10);
      if (0 < iVar1) {
        uVar14 = *(ulong *)(pMVar8 + 0x10);
        iVar15 = *(int *)pMVar8;
        lVar16 = 0;
                    /* try { // try from 00546b54 to 00646b67 has its CatchHandler @ 00546c58 */
        lVar17 = lVar13;
        do {
          if (iVar15 == 0x1406) {
            uVar4 = *(uint *)(pMVar8 + 4);
            uVar24 = (ulong)(int)uVar4;
                    /* try { // try from 00546b68 to 00646c5b has its CatchHandler @ 00546b28 */
            if (0 < (int)uVar4) {
              if (uVar4 < 8) {
                uVar19 = 0;
              }
              else {
                uVar19 = lVar13 + lVar16 * 0x44;
                if ((uVar19 < uVar14 + uVar24 * 4) && (uVar14 < uVar19 + uVar24 * 4)) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar24 & 0xfffffffffffffff8;
                  lVar7 = 0;
                  uVar9 = uVar19;
                  do {
                    puVar18 = (undefined8 *)(uVar14 + lVar7);
                    uVar26 = *puVar18;
                    uVar28 = puVar18[3];
                    uVar27 = puVar18[2];
                    puVar10 = (undefined8 *)(lVar17 + lVar7);
                    uVar9 = uVar9 - 8;
                    lVar7 = lVar7 + 0x20;
                    puVar10[1] = puVar18[1];
                    *puVar10 = uVar26;
                    puVar10[3] = uVar28;
                    puVar10[2] = uVar27;
                  } while (uVar9 != 0);
                  if (uVar19 == uVar24) goto LAB_00546bec;
                }
              }
              do {
                lVar7 = uVar19 * 4;
                uVar19 = uVar19 + 1;
                *(undefined4 *)(lVar17 + lVar7) = *(undefined4 *)(uVar14 + lVar7);
              } while (uVar24 != uVar19);
            }
          }
LAB_00546bec:
          lVar16 = lVar16 + 1;
          lVar17 = lVar17 + 0x44;
          uVar14 = uVar14 + *(uint *)(pMVar8 + 8);
        } while ((int)lVar16 != iVar1);
      }
    }
    if (0 < *(int *)(pMVar20 + 0x3c)) {
      lVar13 = *(long *)pvVar22;
      if (param_1[0x10] == (MeshInstance)0x0) {
        pMVar8 = param_1 + 0x30;
      }
      else {
        pMVar8 = (MeshInstance *)(*(long *)param_1 + 0x38);
      }
      iVar1 = *(int *)(this + 0x10);
      if (0 < iVar1) {
        uVar14 = *(ulong *)(pMVar8 + 0x10);
        iVar15 = *(int *)pMVar8;
        lVar17 = 0;
        lVar16 = lVar13 + 0x10;
        puVar18 = (undefined8 *)(lVar13 + 0x20);
        do {
                    /* catch() { ... } // from try @ 00546b54 with catch @ 00546c58 */
          if (iVar15 == 0x1406) {
            uVar4 = *(uint *)(pMVar8 + 4);
            uVar24 = (ulong)(int)uVar4;
                    /* catch() { ... } // from try @ 00546d14 with catch @ 00546c64 */
            if (0 < (int)uVar4) {
              if (uVar4 < 8) {
                uVar19 = 0;
              }
              else {
                    /* try { // try from 00546c7c to 00646c83 has its CatchHandler @ 00546d20 */
                uVar19 = lVar13 + lVar17 * 0x44 + 0x10;
                if ((uVar19 < uVar14 + uVar24 * 4) && (uVar14 < uVar19 + uVar24 * 4)) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = uVar24 & 0xfffffffffffffff8;
                  puVar10 = (undefined8 *)(uVar14 + 0x10);
                    /* try { // try from 00546cb0 to 00646cbb has its CatchHandler @ 00546cc8 */
                  uVar9 = uVar19;
                  puVar11 = puVar18;
                  do {
                    puVar25 = puVar10 + -1;
                    uVar26 = puVar10[-2];
                    uVar28 = puVar10[1];
                    uVar27 = *puVar10;
                    puVar10 = puVar10 + 4;
                    uVar9 = uVar9 - 8;
                    puVar11[-1] = *puVar25;
                    puVar11[-2] = uVar26;
                    puVar11[1] = uVar28;
                    *puVar11 = uVar27;
                    puVar11 = puVar11 + 4;
                    /* catch() { ... } // from try @ 00546cb0 with catch @ 00546cc8 */
                  } while (uVar9 != 0);
                  if (uVar19 == uVar24) goto LAB_00546cec;
                }
              }
              do {
                lVar7 = uVar19 * 4;
                uVar19 = uVar19 + 1;
                *(undefined4 *)(lVar16 + lVar7) = *(undefined4 *)(uVar14 + lVar7);
              } while (uVar24 != uVar19);
            }
          }
LAB_00546cec:
                    /* try { // try from 00546cec to 00646d13 has its CatchHandler @ 00546d1c */
          lVar17 = lVar17 + 1;
          lVar16 = lVar16 + 0x44;
          uVar14 = uVar14 + *(uint *)(pMVar8 + 8);
          puVar18 = (undefined8 *)((long)puVar18 + 0x44);
        } while ((int)lVar17 != iVar1);
      }
    }
    if (0 < *(int *)(pMVar20 + 0x5c)) {
                    /* try { // try from 00546d14 to 00646d2f has its CatchHandler @ 00546c64 */
                    /* catch() { ... } // from try @ 00546cec with catch @ 00546d1c */
      if (param_1[0x10] == (MeshInstance)0x0) {
        pMVar8 = param_1 + 0x50;
      }
      else {
                    /* catch() { ... } // from try @ 00546c7c with catch @ 00546d20 */
        pMVar8 = (MeshInstance *)(*(long *)param_1 + 0x58);
      }
                    /* try { // try from 00546d30 to 00646d3b has its CatchHandler @ 00546d3c */
      iVar1 = *(int *)(this + 0x10);
      if (0 < iVar1) {
                    /* catch() { ... } // from try @ 00546d30 with catch @ 00546d3c */
        lVar16 = *(long *)(pMVar8 + 0x10);
                    /* try { // try from 00546d40 to 00646d43 has its CatchHandler @ 00546d48 */
        iVar15 = 0;
        lVar13 = *(long *)pvVar22 + 0x20;
                    /* catch() { ... } // from try @ 00546d40 with catch @ 00546d48 */
        do {
          if ((*(int *)pMVar8 == 0x1401) && (0 < *(int *)(pMVar8 + 4))) {
            lVar17 = 0;
            do {
              *(undefined1 *)(lVar13 + lVar17) = *(undefined1 *)(lVar16 + lVar17);
                    /* catch() { ... } // from try @ 00546de0 with catch @ 00546d70
                       catch() { ... } // from try @ 00546e84 with catch @ 00546d70 */
              lVar17 = lVar17 + 1;
            } while (lVar17 < *(int *)(pMVar8 + 4));
          }
          iVar15 = iVar15 + 1;
          lVar13 = lVar13 + 0x44;
          lVar16 = lVar16 + (ulong)*(uint *)(pMVar8 + 8);
        } while (iVar15 != iVar1);
      }
    }
    iVar1 = *(int *)(pMVar20 + 0x140);
    if (0 < iVar1) {
      lVar16 = *(long *)pvVar22;
      MVar3 = param_1[0x10];
      lVar13 = 0;
      puVar18 = (undefined8 *)(lVar16 + 0x34);
      do {
        pMVar8 = param_1 + 0x48;
        if (MVar3 != (MeshInstance)0x0) {
          pMVar8 = (MeshInstance *)(*(long *)param_1 + 0x50);
        }
        iVar15 = *(int *)(this + 0x10);
                    /* try { // try from 00546ddc to 00646ddf has its CatchHandler @ 00546e3c */
        if (0 < iVar15) {
                    /* try { // try from 00546de0 to 00646e5b has its CatchHandler @ 00546d70 */
          lVar7 = 0;
          lVar17 = lVar16 + lVar13 * 0x10 + 0x24;
          piVar12 = (int *)(*(long *)pMVar8 + lVar13 * 0x18);
          uVar14 = *(ulong *)(piVar12 + 4);
          iVar2 = *piVar12;
          puVar10 = puVar18;
          do {
            if (iVar2 == 0x1406) {
              uVar4 = piVar12[1];
              uVar24 = (ulong)(int)uVar4;
              if (0 < (int)uVar4) {
                if (uVar4 < 8) {
                  uVar19 = 0;
                }
                else {
                  uVar19 = lVar16 + lVar7 * 0x44 + lVar13 * 0x10 + 0x24;
                    /* catch() { ... } // from try @ 00546ddc with catch @ 00546e3c */
                  if ((uVar19 < uVar14 + uVar24 * 4) && (uVar14 < uVar19 + uVar24 * 4)) {
                    uVar19 = 0;
                  }
                  else {
                    /* try { // try from 00546e5c to 00646e83 has its CatchHandler @ 00546e8c */
                    uVar19 = uVar24 & 0xfffffffffffffff8;
                    puVar11 = (undefined8 *)(uVar14 + 0x10);
                    uVar9 = uVar19;
                    puVar25 = puVar10;
                    do {
                      puVar6 = puVar11 + -1;
                      uVar26 = puVar11[-2];
                      uVar28 = puVar11[1];
                      uVar27 = *puVar11;
                      puVar11 = puVar11 + 4;
                      uVar9 = uVar9 - 8;
                      puVar25[-1] = *puVar6;
                      puVar25[-2] = uVar26;
                      puVar25[1] = uVar28;
                      *puVar25 = uVar27;
                      puVar25 = puVar25 + 4;
                    } while (uVar9 != 0);
                    /* try { // try from 00546e84 to 00646e8f has its CatchHandler @ 00546d70 */
                    if (uVar19 == uVar24) goto LAB_00546ea4;
                  }
                }
                do {
                    /* catch() { ... } // from try @ 00546e5c with catch @ 00546e8c */
                  lVar23 = uVar19 * 4;
                  uVar19 = uVar19 + 1;
                  *(undefined4 *)(lVar17 + lVar23) = *(undefined4 *)(uVar14 + lVar23);
                } while (uVar24 != uVar19);
              }
            }
LAB_00546ea4:
            lVar7 = lVar7 + 1;
            lVar17 = lVar17 + 0x44;
                    /* catch() { ... } // from try @ 00546f24 with catch @ 00546eb4
                       catch() { ... } // from try @ 00546fc8 with catch @ 00546eb4 */
            uVar14 = uVar14 + (uint)piVar12[2];
            puVar10 = (undefined8 *)((long)puVar10 + 0x44);
          } while ((int)lVar7 != iVar15);
        }
        lVar13 = lVar13 + 1;
        puVar18 = puVar18 + 2;
      } while (lVar13 < iVar1);
    }
    if (0 < *(int *)(pMVar20 + 0xc)) {
      if (*(long *)(pMVar20 + 0x128) == *(long *)(pMVar20 + 0x130)) {
        uVar4 = *(int *)(pMVar20 + 4) << 1;
      }
      else {
        uVar4 = (uint)((ulong)(*(long *)(pMVar20 + 0x130) - *(long *)(pMVar20 + 0x128)) >> 1) &
                0xfffffffe;
      }
      iVar1 = uVar4 + *(int *)(pMVar20 + 4);
      *(int *)(this + 0x30) = iVar1;
      local_a4 = 0;
      pvVar21 = (vector<int,std::allocator<int>> *)(this + 0x38);
      uVar14 = (ulong)iVar1;
                    /* try { // try from 00546f20 to 00646f23 has its CatchHandler @ 00546f80 */
      uVar24 = *(long *)(this + 0x40) - *(long *)pvVar21 >> 2;
                    /* try { // try from 00546f24 to 00646f9f has its CatchHandler @ 00546eb4 */
      if (uVar24 < uVar14) {
        std::vector<int,std::allocator<int>>::_M_fill_insert
                  (pvVar21,*(long *)(this + 0x40),uVar14 - uVar24,&local_a4);
        iVar1 = *(int *)(this + 0x30);
      }
      else if (uVar24 != uVar14) {
        *(ulong *)(this + 0x40) = *(long *)pvVar21 + uVar14 * 4;
      }
      if (0 < iVar1) {
        lVar13 = *(long *)pvVar21;
        lVar16 = *(long *)(pMVar20 + 0x18);
        iVar2 = *(int *)(pMVar20 + 8);
        iVar15 = 0;
        do {
                    /* catch() { ... } // from try @ 00546f20 with catch @ 00546f80 */
          if ((iVar2 == 0x1403) && (0 < *(int *)(pMVar20 + 0xc))) {
            lVar17 = 0;
            do {
              *(uint *)(lVar13 + lVar17 * 4) = (uint)*(ushort *)(lVar16 + lVar17 * 2);
              lVar17 = lVar17 + 1;
                    /* try { // try from 00546fa0 to 00646fc7 has its CatchHandler @ 00546fd0 */
            } while (lVar17 < *(int *)(pMVar20 + 0xc));
          }
          iVar15 = iVar15 + 1;
          lVar13 = lVar13 + 4;
          lVar16 = lVar16 + (ulong)*(uint *)(pMVar20 + 0x10);
        } while (iVar15 != iVar1);
      }
    }
  }
                    /* try { // try from 00546fc8 to 00646fd3 has its CatchHandler @ 00546eb4 */
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00546fa0 with catch @ 00546fd0 */
                    /* catch() { ... } // from try @ 00547084 with catch @ 00546fd4 */
  return;
}


