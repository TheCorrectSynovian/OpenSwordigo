/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054604c
 * Function: Caver::MeshBuilder::InitWithMesh
 * Signature: undefined __thiscall InitWithMesh(MeshBuilder * this, Mesh * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshBuilder::InitWithMesh(Caver::Mesh const&, bool) */

void __thiscall Caver::MeshBuilder::InitWithMesh(MeshBuilder *this,Mesh *param_1,bool param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>> *pvVar25;
  vector<int,std::allocator<int>> *pvVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long local_a0;
  undefined4 local_98 [2];
  undefined1 auStack_90 [72];
  long local_48;
  
                    /* try { // try from 0054604c to 006460f3 has its CatchHandler @ 00545f34 */
  lVar7 = tpidr_el0;
  local_48 = *(long *)(lVar7 + 0x28);
  uVar32 = *(undefined8 *)(param_1 + 0xa8);
  uVar29 = *(undefined8 *)(param_1 + 0xa0);
  uVar33 = *(undefined8 *)(param_1 + 0xb8);
  uVar30 = *(undefined8 *)(param_1 + 0xb0);
  uVar34 = *(undefined8 *)(param_1 + 200);
  uVar31 = *(undefined8 *)(param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0xd0);
  plVar15 = *(long **)(param_1 + 0xd8);
  if (plVar15 != (long *)0x0) {
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
  }
                    /* catch() { ... } // from try @ 00546024 with catch @ 005460bc */
                    /* catch() { ... } // from try @ 00545fb0 with catch @ 005460c0 */
  FUN_0066a528(&local_a0,param_1 + 0xe0);
  lVar28 = *(long *)this;
                    /* catch() { ... } // from try @ 00545ff8 with catch @ 005460d0 */
  *(undefined4 *)(lVar28 + 0xd0) = uVar2;
  *(undefined8 *)(lVar28 + 200) = uVar34;
  *(undefined8 *)(lVar28 + 0xc0) = uVar31;
  *(undefined8 *)(lVar28 + 0xb8) = uVar33;
  *(undefined8 *)(lVar28 + 0xb0) = uVar30;
  *(undefined8 *)(lVar28 + 0xa8) = uVar32;
  *(undefined8 *)(lVar28 + 0xa0) = uVar29;
  if (plVar15 != (long *)0x0) {
                    /* try { // try from 005460f4 to 00646163 has its CatchHandler @ 0054616c */
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
  }
  plVar9 = *(long **)(lVar28 + 0xd8);
  *(long **)(lVar28 + 0xd8) = plVar15;
  if ((plVar9 != (long *)0x0) &&
     (iVar18 = (int)plVar9[1] + -1, *(int *)(plVar9 + 1) = iVar18, iVar18 == 0)) {
    (**(code **)(*plVar9 + 8))();
  }
  FUN_0066a6a8(lVar28 + 0xe0,&local_a0);
  if ((undefined *)(local_a0 + -0x18) != PTR_DAT_007e5de8) {
    piVar12 = (int *)(local_a0 + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar18 = *piVar12;
      *piVar12 = iVar18 + -1;
    }
    else {
      do {
        iVar18 = *piVar12;
                    /* catch() { ... } // from try @ 00546368 with catch @ 0054672c */
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar6) {
          *piVar12 = iVar18 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    if (iVar18 < 1) {
      operator_delete((undefined *)(local_a0 + -0x18));
    }
  }
  if ((plVar15 != (long *)0x0) &&
     (iVar18 = (int)plVar15[1] + -1, *(int *)(plVar15 + 1) = iVar18, iVar18 == 0)) {
                    /* try { // try from 00546164 to 00646183 has its CatchHandler @ 00545f34 */
                    /* catch() { ... } // from try @ 005460f4 with catch @ 0054616c */
    (**(code **)(*plVar15 + 8))();
  }
                    /* catch() { ... } // from try @ 00545f64 with catch @ 00546170 */
  iVar18 = *(int *)(param_1 + 0x24);
  if (0 < iVar18) {
    lVar28 = *(long *)this;
                    /* catch() { ... } // from try @ 00546234 with catch @ 00546184 */
    *(undefined4 *)(lVar28 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(int *)(lVar28 + 0x24) = iVar18;
    *(undefined4 *)(lVar28 + 0x28) = 0;
    *(undefined8 *)(lVar28 + 0x30) = 0;
  }
  iVar18 = *(int *)(param_1 + 0x3c);
  if (0 < iVar18) {
                    /* try { // try from 0054619c to 006461a3 has its CatchHandler @ 00546240 */
    lVar28 = *(long *)this;
    *(undefined4 *)(lVar28 + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(int *)(lVar28 + 0x3c) = iVar18;
    *(undefined4 *)(lVar28 + 0x40) = 0;
    *(undefined8 *)(lVar28 + 0x48) = 0;
  }
  iVar18 = *(int *)(param_1 + 0x5c);
  if (0 < iVar18) {
    lVar28 = *(long *)this;
    *(undefined4 *)(lVar28 + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(lVar28 + 0x5c) = iVar18;
    *(undefined4 *)(lVar28 + 0x60) = 0;
    *(undefined8 *)(lVar28 + 0x68) = 0;
  }
                    /* try { // try from 005461d0 to 006461db has its CatchHandler @ 005461e8 */
                    /* catch() { ... } // from try @ 005461d0 with catch @ 005461e8 */
  if ((0 < *(int *)(param_1 + 0x140)) &&
     (Mesh::SetNumTexCoordSets(*(Mesh **)this,*(int *)(param_1 + 0x140)),
     0 < *(int *)(param_1 + 0x140))) {
    lVar16 = 0;
    lVar28 = 0;
    do {
      lVar28 = lVar28 + 1;
                    /* try { // try from 0054620c to 00646233 has its CatchHandler @ 0054623c */
      puVar24 = (undefined8 *)(*(long *)(*(long *)this + 0x50) + lVar16);
      *puVar24 = *(undefined8 *)(*(long *)(param_1 + 0x50) + lVar16);
      *(undefined4 *)(puVar24 + 1) = 0;
      puVar24[2] = 0;
      lVar16 = lVar16 + 0x18;
    } while (lVar28 < *(int *)(param_1 + 0x140));
  }
  uVar29 = DAT_00689bc8;
                    /* try { // try from 00546234 to 0064624f has its CatchHandler @ 00546184 */
  if (0 < *(int *)(param_1 + 0xc)) {
                    /* catch() { ... } // from try @ 0054620c with catch @ 0054623c */
                    /* catch() { ... } // from try @ 0054619c with catch @ 00546240 */
    lVar28 = *(long *)this;
    *(undefined4 *)(lVar28 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined8 *)(lVar28 + 0xc) = uVar29;
                    /* try { // try from 00546250 to 0064625b has its CatchHandler @ 0054625c */
    *(undefined8 *)(lVar28 + 0x18) = 0;
  }
  if (param_2) {
                    /* catch() { ... } // from try @ 00546250 with catch @ 0054625c */
                    /* try { // try from 00546260 to 00646263 has its CatchHandler @ 00546268 */
                    /* catch() { ... } // from try @ 00546260 with catch @ 00546268 */
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 4);
    uVar27 = (ulong)*(int *)param_1;
    *(int *)(this + 0x10) = *(int *)param_1;
                    /* try { // try from 00546274 to 00646367 has its CatchHandler @ 00546274
                       catch() { ... } // from try @ 00546274 with catch @ 00546274
                       catch() { ... } // from try @ 0054636c with catch @ 00546274
                       catch() { ... } // from try @ 005463c8 with catch @ 00546274
                       catch() { ... } // from try @ 0054646c with catch @ 00546274
                       catch() { ... } // from try @ 00546494 with catch @ 00546274
                       catch() { ... } // from try @ 0054651c with catch @ 00546274
                       catch() { ... } // from try @ 00546654 with catch @ 00546274
                       catch() { ... } // from try @ 00546774 with catch @ 00546274 */
    memset(auStack_90,0,0x44);
    pvVar25 = (vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>> *)
              (this + 0x18);
    lVar28 = *(long *)(this + 0x20) - *(long *)pvVar25 >> 2;
    uVar19 = lVar28 * -0xf0f0f0f0f0f0f0f;
    if (uVar19 < uVar27) {
      std::vector<Caver::MeshBuilder::Vertex,std::allocator<Caver::MeshBuilder::Vertex>>::
      _M_fill_insert(pvVar25,*(long *)(this + 0x20),uVar27 + lVar28 * 0xf0f0f0f0f0f0f0f,auStack_90);
    }
    else if (uVar19 - uVar27 != 0) {
      *(ulong *)(this + 0x20) = *(long *)pvVar25 + uVar27 * 0x44;
    }
    uVar4 = *(uint *)(param_1 + 0x24);
    uVar19 = (ulong)(int)uVar4;
    if ((0 < (int)uVar4) && (iVar18 = *(int *)(this + 0x10), 0 < iVar18)) {
      lVar20 = *(long *)pvVar25;
      uVar27 = *(ulong *)(param_1 + 0x30);
      iVar17 = *(int *)(param_1 + 0x20);
      lVar28 = 0;
      uVar21 = uVar19 & 0xfffffffffffffff8;
      lVar16 = lVar20;
      do {
        if (iVar17 == 0x1406) {
          if (uVar4 < 8) {
            uVar10 = 0;
          }
          else {
            uVar10 = lVar20 + lVar28 * 0x44;
            if ((uVar10 < uVar27 + uVar19 * 4) && (uVar27 < uVar10 + uVar19 * 4)) {
              uVar10 = 0;
            }
            else {
              lVar22 = 0;
              uVar10 = uVar21;
              do {
                puVar24 = (undefined8 *)(uVar27 + lVar22);
                uVar29 = *puVar24;
                uVar31 = puVar24[3];
                uVar30 = puVar24[2];
                puVar11 = (undefined8 *)(lVar16 + lVar22);
                uVar10 = uVar10 - 8;
                lVar22 = lVar22 + 0x20;
                puVar11[1] = puVar24[1];
                *puVar11 = uVar29;
                puVar11[3] = uVar31;
                puVar11[2] = uVar30;
              } while (uVar10 != 0);
              uVar10 = uVar21;
                    /* try { // try from 00546368 to 0064636b has its CatchHandler @ 0054672c */
              if (uVar21 == uVar19) goto LAB_00546384;
            }
          }
          do {
                    /* try { // try from 0054636c to 006463c3 has its CatchHandler @ 00546274 */
            uVar1 = uVar10 + 1;
            *(undefined4 *)(lVar16 + uVar10 * 4) = *(undefined4 *)(uVar27 + uVar10 * 4);
            uVar10 = uVar1;
          } while (uVar19 != uVar1);
        }
LAB_00546384:
        lVar28 = lVar28 + 1;
        lVar16 = lVar16 + 0x44;
        uVar27 = uVar27 + *(uint *)(param_1 + 0x28);
      } while ((int)lVar28 != iVar18);
    }
    uVar4 = *(uint *)(param_1 + 0x3c);
    uVar19 = (ulong)(int)uVar4;
    if ((0 < (int)uVar4) && (iVar18 = *(int *)(this + 0x10), 0 < iVar18)) {
      lVar20 = *(long *)pvVar25;
      uVar27 = *(ulong *)(param_1 + 0x48);
      iVar17 = *(int *)(param_1 + 0x38);
      lVar16 = 0;
                    /* try { // try from 005463c4 to 006463c7 has its CatchHandler @ 005466e0 */
                    /* try { // try from 005463c8 to 0064644b has its CatchHandler @ 00546274 */
      uVar21 = uVar19 & 0xfffffffffffffff8;
      lVar28 = lVar20 + 0x10;
      puVar24 = (undefined8 *)(lVar20 + 0x20);
      do {
        if (iVar17 == 0x1406) {
          if (uVar4 < 8) {
            uVar10 = 0;
          }
          else {
            uVar10 = lVar20 + lVar16 * 0x44 + 0x10;
            if ((uVar10 < uVar27 + uVar19 * 4) && (uVar27 < uVar10 + uVar19 * 4)) {
              uVar10 = 0;
            }
            else {
              puVar11 = (undefined8 *)(uVar27 + 0x10);
              uVar10 = uVar21;
              puVar13 = puVar24;
              do {
                puVar8 = puVar11 + -1;
                uVar29 = puVar11[-2];
                uVar31 = puVar11[1];
                uVar30 = *puVar11;
                puVar11 = puVar11 + 4;
                uVar10 = uVar10 - 8;
                puVar13[-1] = *puVar8;
                puVar13[-2] = uVar29;
                puVar13[1] = uVar31;
                *puVar13 = uVar30;
                puVar13 = puVar13 + 4;
              } while (uVar10 != 0);
              uVar10 = uVar21;
              if (uVar21 == uVar19) goto LAB_00546464;
            }
          }
          do {
                    /* try { // try from 0054644c to 0064645f has its CatchHandler @ 005466dc */
            uVar1 = uVar10 + 1;
            *(undefined4 *)(lVar28 + uVar10 * 4) = *(undefined4 *)(uVar27 + uVar10 * 4);
            uVar10 = uVar1;
          } while (uVar19 != uVar1);
        }
LAB_00546464:
                    /* try { // try from 00546464 to 0064646b has its CatchHandler @ 0054666c */
        lVar16 = lVar16 + 1;
                    /* try { // try from 0054646c to 0064648f has its CatchHandler @ 00546274 */
        lVar28 = lVar28 + 0x44;
        uVar27 = uVar27 + *(uint *)(param_1 + 0x40);
        puVar24 = (undefined8 *)((long)puVar24 + 0x44);
      } while ((int)lVar16 != iVar18);
    }
    uVar19 = (ulong)*(uint *)(param_1 + 0x5c);
                    /* try { // try from 00546490 to 00646493 has its CatchHandler @ 00546658 */
                    /* try { // try from 00546494 to 006464c7 has its CatchHandler @ 00546274 */
    if ((0 < (int)*(uint *)(param_1 + 0x5c)) && (iVar18 = *(int *)(this + 0x10), 0 < iVar18)) {
      lVar16 = *(long *)(param_1 + 0x68);
      iVar17 = 0;
      lVar28 = *(long *)pvVar25 + 0x20;
      do {
        if ((*(int *)(param_1 + 0x58) == 0x1401) && (0 < (int)uVar19)) {
          lVar20 = 0;
          do {
                    /* try { // try from 005464c8 to 006464d3 has its CatchHandler @ 005465c0 */
            *(undefined1 *)(lVar28 + lVar20) = *(undefined1 *)(lVar16 + lVar20);
            uVar19 = (ulong)*(int *)(param_1 + 0x5c);
            lVar20 = lVar20 + 1;
          } while (lVar20 < (long)uVar19);
        }
        iVar17 = iVar17 + 1;
        lVar28 = lVar28 + 0x44;
        lVar16 = lVar16 + (ulong)*(uint *)(param_1 + 0x60);
      } while (iVar17 != iVar18);
    }
                    /* try { // try from 005464f4 to 0064651b has its CatchHandler @ 005465b0 */
    iVar18 = *(int *)(param_1 + 0x140);
    if (0 < iVar18) {
      lVar16 = *(long *)(param_1 + 0x50);
      iVar17 = *(int *)(this + 0x10);
      lVar28 = 0;
      do {
                    /* try { // try from 0054651c to 006465e3 has its CatchHandler @ 00546274 */
        if (0 < iVar17) {
          lVar23 = *(long *)pvVar25;
          piVar12 = (int *)(lVar16 + lVar28 * 0x18);
          uVar19 = *(ulong *)(piVar12 + 4);
          iVar3 = *piVar12;
          lVar22 = 0;
          lVar20 = lVar23 + lVar28 * 0x10 + 0x24;
          do {
            if (iVar3 == 0x1406) {
              uVar4 = piVar12[1];
              uVar27 = (ulong)(int)uVar4;
              if (0 < (int)uVar4) {
                if (uVar4 < 8) {
                  uVar21 = 0;
                }
                else {
                  uVar21 = lVar23 + lVar22 * 0x44 + lVar28 * 0x10 + 0x24;
                  if ((uVar21 < uVar19 + uVar27 * 4) && (uVar19 < uVar21 + uVar27 * 4)) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = uVar27 & 0xfffffffffffffff8;
                    lVar14 = 0;
                    uVar10 = uVar21;
                    do {
                      puVar24 = (undefined8 *)(uVar19 + lVar14);
                      uVar29 = *puVar24;
                      uVar31 = puVar24[3];
                      uVar30 = puVar24[2];
                      puVar11 = (undefined8 *)(lVar20 + lVar14);
                    /* catch() { ... } // from try @ 005464f4 with catch @ 005465b0 */
                      uVar10 = uVar10 - 8;
                      lVar14 = lVar14 + 0x20;
                      puVar11[1] = puVar24[1];
                      *puVar11 = uVar29;
                      puVar11[3] = uVar31;
                      puVar11[2] = uVar30;
                    } while (uVar10 != 0);
                    /* catch() { ... } // from try @ 005464c8 with catch @ 005465c0 */
                    if (uVar21 == uVar27) goto LAB_005465e0;
                  }
                }
                do {
                  lVar14 = uVar21 * 4;
                  uVar21 = uVar21 + 1;
                  *(undefined4 *)(lVar20 + lVar14) = *(undefined4 *)(uVar19 + lVar14);
                } while (uVar27 != uVar21);
              }
            }
LAB_005465e0:
                    /* try { // try from 005465e4 to 00646653 has its CatchHandler @ 0054677c */
            lVar22 = lVar22 + 1;
            lVar20 = lVar20 + 0x44;
            uVar19 = uVar19 + (uint)piVar12[2];
          } while ((int)lVar22 != iVar17);
        }
        lVar28 = lVar28 + 1;
      } while (lVar28 < iVar18);
    }
    if (0 < *(int *)(param_1 + 0xc)) {
      if (*(long *)(param_1 + 0x128) == *(long *)(param_1 + 0x130)) {
        uVar4 = *(int *)(param_1 + 4) << 1;
      }
      else {
        uVar4 = (uint)((ulong)(*(long *)(param_1 + 0x130) - *(long *)(param_1 + 0x128)) >> 1) &
                0xfffffffe;
      }
      iVar18 = uVar4 + *(int *)(param_1 + 4);
      *(int *)(this + 0x30) = iVar18;
      local_98[0] = 0;
      pvVar26 = (vector<int,std::allocator<int>> *)(this + 0x38);
      uVar19 = (ulong)iVar18;
                    /* try { // try from 00546654 to 006466ff has its CatchHandler @ 00546274 */
      uVar27 = *(long *)(this + 0x40) - *(long *)pvVar26 >> 2;
                    /* catch() { ... } // from try @ 00546490 with catch @ 00546658 */
      if (uVar27 < uVar19) {
                    /* catch() { ... } // from try @ 00546464 with catch @ 0054666c */
        std::vector<int,std::allocator<int>>::_M_fill_insert
                  (pvVar26,*(long *)(this + 0x40),uVar19 - uVar27,local_98);
        iVar18 = *(int *)(this + 0x30);
      }
      else if (uVar27 != uVar19) {
        *(ulong *)(this + 0x40) = *(long *)pvVar26 + uVar19 * 4;
      }
      if (0 < iVar18) {
        lVar28 = *(long *)pvVar26;
        lVar16 = *(long *)(param_1 + 0x18);
        iVar3 = *(int *)(param_1 + 8);
        iVar17 = 0;
        do {
          if ((iVar3 == 0x1403) && (0 < *(int *)(param_1 + 0xc))) {
            lVar20 = 0;
            do {
              *(uint *)(lVar28 + lVar20 * 4) = (uint)*(ushort *)(lVar16 + lVar20 * 2);
              lVar20 = lVar20 + 1;
            } while (lVar20 < *(int *)(param_1 + 0xc));
          }
                    /* catch() { ... } // from try @ 0054644c with catch @ 005466dc */
          iVar17 = iVar17 + 1;
                    /* catch() { ... } // from try @ 005463c4 with catch @ 005466e0 */
          lVar28 = lVar28 + 4;
          lVar16 = lVar16 + (ulong)*(uint *)(param_1 + 0x10);
        } while (iVar17 != iVar18);
      }
    }
  }
  if (*(long *)(lVar7 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00546700 to 00646773 has its CatchHandler @ 0054677c */
  return;
}


