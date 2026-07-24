/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054eeb8
 * Function: Caver::PODLoader::CreateMesh
 * Signature: undefined __cdecl CreateMesh(int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::PODLoader::CreateMesh(int) */

void Caver::PODLoader::CreateMesh(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  long lVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  Mesh *pMVar9;
  string *psVar10;
  Vector2 *pVVar11;
  void *pvVar12;
  undefined4 *puVar13;
  int in_w1;
  int iVar14;
  string *extraout_x1;
  undefined4 uVar15;
  long *in_x8;
  long lVar16;
  long *plVar17;
  int *piVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  ushort *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  SPODMesh *pSVar32;
  int iVar33;
  uint *puVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  int local_e0;
  undefined4 uStack_dc;
  Mesh *local_d8 [2];
  long local_c8 [5];
  long local_a0 [8];
  
  plVar8 = (long *)(ulong)(uint)param_1;
  lVar5 = tpidr_el0;
  local_a0[7] = *(long *)(lVar5 + 0x28);
  pMVar9 = operator_new(0x160);
  Mesh::Mesh(pMVar9);
  *in_x8 = (long)pMVar9;
  boost::detail::shared_count::shared_count<Caver::Mesh>((shared_count *)(in_x8 + 1),pMVar9);
  boost::detail::sp_enable_shared_from_this();
  lVar16 = *plVar8;
  puVar24 = (undefined8 *)*in_x8;
  lVar35 = *(long *)(lVar16 + 0x40);
  piVar19 = (int *)(*(long *)(lVar16 + 0x50) + (long)in_w1 * 0x60);
  lVar36 = (long)*piVar19;
  pSVar32 = (SPODMesh *)(lVar35 + lVar36 * 0x158);
  *puVar24 = *(undefined8 *)pSVar32;
  lVar16 = *(long *)(lVar16 + 0x70) + (long)piVar19[4] * 0xb0;
  uVar15 = *(undefined4 *)(lVar16 + 0x3c);
  puVar24[0x14] = *(undefined8 *)(lVar16 + 0x34);
  *(undefined4 *)(puVar24 + 0x15) = uVar15;
  *(undefined4 *)((long)puVar24 + 0xac) = 0x3f800000;
  lVar20 = *in_x8;
  uVar15 = *(undefined4 *)(lVar16 + 0x48);
  *(undefined8 *)(lVar20 + 0xb0) = *(undefined8 *)(lVar16 + 0x40);
  *(undefined4 *)(lVar20 + 0xb8) = uVar15;
  *(undefined4 *)(lVar20 + 0xbc) = 0x3f800000;
  lVar20 = *in_x8;
  uVar15 = *(undefined4 *)(lVar16 + 0x54);
  *(undefined8 *)(lVar20 + 0xc0) = *(undefined8 *)(lVar16 + 0x4c);
  *(undefined4 *)(lVar20 + 200) = uVar15;
  *(undefined4 *)(lVar20 + 0xcc) = 0x3f800000;
  *(undefined4 *)(*in_x8 + 0xd0) = *(undefined4 *)(lVar16 + 0x58);
  if (-1 < *(int *)(lVar16 + 8)) {
    FUN_00666bb8(local_a0,*(undefined8 *)
                           (*(long *)(*plVar8 + 0x60) + (long)*(int *)(lVar16 + 8) * 8),local_d8);
    StringByRemovingPathExtension((Caver *)local_a0,extraout_x1);
    FUN_0066a6a8(*in_x8 + 0xe0,local_d8);
    puVar6 = PTR_DAT_007e5de8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054ee7c with catch @ 0054efec
                        */
    if (local_d8[0] + -0x18 == (Mesh *)PTR_DAT_007e5de8) {
LAB_0054effc:
      cVar1 = (char)plVar8[0x16];
    }
    else {
                    /* try { // try from 0054f750 to 0064f777 has its CatchHandler @ 0054f780 */
      pMVar9 = local_d8[0] + -8;
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *(int *)pMVar9;
        *(int *)pMVar9 = iVar7 + -1;
      }
      else {
        do {
          iVar7 = *(int *)pMVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(pMVar9,0x10);
          if (bVar2) {
            *(int *)pMVar9 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (0 < iVar7) goto LAB_0054effc;
      operator_delete(local_d8[0] + -0x18);
      cVar1 = (char)plVar8[0x16];
    }
    if (cVar1 != '\0') {
      psVar10 = (string *)TextureLibrary::sharedLibrary();
                    /* try { // try from 0054f010 to 0064f037 has its CatchHandler @ 0054f040 */
      TextureLibrary::TextureForName(psVar10,(bool)((char)*in_x8 + -0x20));
      lVar16 = *in_x8;
      if (local_d8[0] != (Mesh *)0x0) {
        *(int *)(local_d8[0] + 8) = *(int *)(local_d8[0] + 8) + 1;
      }
      plVar17 = *(long **)(lVar16 + 0xd8);
                    /* try { // try from 0054f038 to 0064f043 has its CatchHandler @ 0054ed2c */
      *(Mesh **)(lVar16 + 0xd8) = local_d8[0];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054f010 with catch @ 0054f040
                        */
                    /* try { // try from 0054f044 to 0064f087 has its CatchHandler @ 0054f044
                       catch() { ... } // from try @ 0054f044 with catch @ 0054f044
                       catch() { ... } // from try @ 0054f08c with catch @ 0054f044
                       catch() { ... } // from try @ 0054f264 with catch @ 0054f044
                       catch() { ... } // from try @ 0054f388 with catch @ 0054f044
                       catch() { ... } // from try @ 0054f400 with catch @ 0054f044 */
      if ((plVar17 != (long *)0x0) &&
         (iVar7 = (int)plVar17[1] + -1, *(int *)(plVar17 + 1) = iVar7, iVar7 == 0)) {
        (**(code **)(*plVar17 + 8))(plVar17);
      }
                    /* try { // try from 0054f088 to 0064f08b has its CatchHandler @ 0054f38c */
      if ((local_d8[0] != (Mesh *)0x0) &&
         (iVar7 = *(int *)(local_d8[0] + 8), *(int *)(local_d8[0] + 8) = iVar7 + -1, iVar7 + -1 == 0
         )) {
        (**(code **)(*(long *)local_d8[0] + 8))();
      }
    }
                    /* try { // try from 0054f08c to 0064f0bb has its CatchHandler @ 0054f044 */
    if ((undefined *)(local_a0[0] + -0x18) != puVar6) {
                    /* try { // try from 0054f778 to 0064f783 has its CatchHandler @ 0054f57c */
      piVar19 = (int *)(local_a0[0] + -8);
      if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
        iVar7 = *piVar19;
        *piVar19 = iVar7 + -1;
      }
      else {
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054f750 with catch @ 0054f780
                        */
          iVar7 = *piVar19;
                    /* try { // try from 0054f784 to 0064f817 has its CatchHandler @ 0054f784
                       catch() { ... } // from try @ 0054f784 with catch @ 0054f784
                       catch() { ... } // from try @ 0054f81c with catch @ 0054f784
                       catch() { ... } // from try @ 0054f918 with catch @ 0054f784
                       catch() { ... } // from try @ 0054f9d4 with catch @ 0054f784 */
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar2) {
            *piVar19 = iVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (iVar7 < 1) {
        operator_delete((undefined *)(local_a0[0] + -0x18));
      }
    }
  }
  plVar17 = (long *)(lVar35 + lVar36 * 0x158 + 0x20);
  if (*plVar17 == 0) {
    lVar16 = *in_x8;
    *(undefined8 *)(lVar16 + 8) = 0;
    *(undefined8 *)(lVar16 + 0x10) = 0;
    *(undefined8 *)(lVar16 + 0x18) = 0;
  }
  else {
    iVar7 = PVRTModelPODCountIndices(pSVar32);
                    /* try { // try from 0054f0bc to 0064f0c7 has its CatchHandler @ 0054f3a4 */
    piVar19 = (int *)(lVar35 + lVar36 * 0x158 + 0x18);
    Mesh::AllocIndexBuffer((Mesh *)*in_x8,*piVar19 * iVar7);
    memcpy(*(void **)(*in_x8 + 0x120),(void *)*plVar17,(ulong)(uint)(*piVar19 * iVar7));
    uVar3 = *(int *)(lVar35 + lVar36 * 0x158 + 0x10) - 1;
    if (uVar3 < 0xd) {
                    /* try { // try from 0054f108 to 0064f12f has its CatchHandler @ 0054f33c */
      uVar15 = *(undefined4 *)(&DAT_00695430 + (long)(int)uVar3 * 4);
    }
    else {
      uVar15 = 0;
    }
    lVar16 = *in_x8;
    *(undefined4 *)(lVar16 + 8) = uVar15;
    *(undefined8 *)(lVar16 + 0xc) = *(undefined8 *)(lVar35 + lVar36 * 0x158 + 0x14);
    *(undefined8 *)(lVar16 + 0x18) = *(undefined8 *)(lVar16 + 0x120);
  }
  puVar34 = (uint *)(lVar35 + lVar36 * 0x158 + 0x30);
                    /* try { // try from 0054f150 to 0064f177 has its CatchHandler @ 0054f3a4 */
  if (*puVar34 != 0) {
    uVar37 = 0;
    do {
      uVar15 = *(undefined4 *)(*(long *)(lVar35 + lVar36 * 0x158 + 0x28) + uVar37 * 4);
      lVar16 = *in_x8;
      local_a0[0] = CONCAT44(local_a0[0]._4_4_,uVar15);
      puVar13 = *(undefined4 **)(lVar16 + 0x130);
                    /* try { // try from 0054f17c to 0064f187 has its CatchHandler @ 0054f3a0 */
      if (puVar13 == *(undefined4 **)(lVar16 + 0x138)) {
        std::vector<int,std::allocator<int>>::_M_insert_aux
                  ((vector<int,std::allocator<int>> *)(lVar16 + 0x128),puVar13,local_a0);
      }
      else {
        *puVar13 = uVar15;
        *(undefined4 **)(lVar16 + 0x130) = puVar13 + 1;
      }
      uVar37 = uVar37 + 1;
    } while (uVar37 < *puVar34);
  }
  pMVar9 = (Mesh *)*in_x8;
  lVar16 = lVar35 + lVar36 * 0x158;
  local_a0[0] = lVar16 + 0x38;
  local_a0[1] = lVar16 + 0x50;
  local_d8[0] = pMVar9 + 0x20;
  local_d8[1] = pMVar9 + 0x38;
                    /* try { // try from 0054f1c8 to 0064f1ef has its CatchHandler @ 0054f2ec */
  Mesh::SetNumTexCoordSets(pMVar9,*(int *)(lVar16 + 8));
  lVar16 = *in_x8;
  iVar7 = *(int *)(lVar16 + 0x140);
  lVar20 = (long)iVar7;
  if (iVar7 < 1) {
    uVar37 = 2;
                    /* try { // try from 0054f210 to 0064f237 has its CatchHandler @ 0054f3a0 */
  }
  else {
    lVar21 = *(long *)(lVar35 + lVar36 * 0x158 + 0x98);
    local_a0[2] = lVar21;
    local_c8[0] = *(long *)(lVar16 + 0x50);
    if (iVar7 == 1) {
      uVar37 = 3;
    }
    else {
      lVar38 = lVar20;
      if (lVar20 < 3) {
        lVar38 = 2;
      }
      uVar26 = lVar38 - 1;
      if (uVar26 < 4) {
        uVar25 = 1;
        uVar37 = 3;
      }
      else {
        uVar27 = uVar26 & 0xfffffffffffffffc;
                    /* try { // try from 0054f250 to 0064f263 has its CatchHandler @ 0054f3b4 */
        uVar37 = uVar26 | 3;
        uVar25 = uVar27 | 1;
                    /* try { // try from 0054f264 to 0064f30f has its CatchHandler @ 0054f044 */
        plVar17 = local_a0 + 5;
        plVar28 = local_c8 + 3;
        uVar29 = uVar27;
        lVar38 = _DAT_00694f40;
        lVar39 = _UNK_00694f48;
        do {
          lVar30 = lVar38 * 0x18;
          lVar31 = lVar39 * 0x18;
          plVar17[-1] = lVar21 + lVar31;
          plVar17[-2] = lVar21 + lVar30;
          plVar17[1] = lVar21 + lVar31 + 0x30;
          *plVar17 = lVar21 + lVar30 + 0x30;
          lVar38 = lVar38 + 4;
          lVar39 = lVar39 + 4;
          uVar29 = uVar29 - 4;
          plVar28[-1] = local_c8[0] + lVar31;
          plVar28[-2] = local_c8[0] + lVar30;
          plVar28[1] = local_c8[0] + lVar31 + 0x30;
          *plVar28 = local_c8[0] + lVar30 + 0x30;
          plVar17 = plVar17 + 4;
          plVar28 = plVar28 + 4;
        } while (uVar29 != 0);
        if (uVar26 == uVar27) goto LAB_0054f30c;
      }
      lVar21 = lVar21 + uVar25 * 0x18;
      pMVar9 = (Mesh *)(local_c8[0] + uVar25 * 0x18);
      uVar26 = uVar37;
      do {
                    /* catch() { ... } // from try @ 0054f1c8 with catch @ 0054f2ec */
        uVar25 = uVar25 + 1;
        uVar37 = uVar26 + 1;
        local_a0[uVar26] = lVar21;
        local_d8[uVar26] = pMVar9;
        lVar21 = lVar21 + 0x18;
        pMVar9 = pMVar9 + 0x18;
        uVar26 = uVar37;
      } while ((long)uVar25 < lVar20);
    }
  }
LAB_0054f30c:
                    /* try { // try from 0054f310 to 0064f387 has its CatchHandler @ 0054f408 */
  uVar26 = -(uVar37 >> 0x1f & 1) & 0xfffffff800000000 | (uVar37 & 0xffffffff) << 3;
  lVar20 = lVar35 + lVar36 * 0x158;
  *(long *)((long)local_d8 + uVar26) = lVar16 + 0x58;
  *(long *)((long)local_a0 + uVar26) = lVar20 + 0xa0;
                    /* catch() { ... } // from try @ 0054f108 with catch @ 0054f33c */
  iVar33 = (int)uVar37;
  *(long *)((long)local_d8 + uVar26 + 8) = lVar16 + 0x70;
  iVar7 = iVar33 + 3;
  *(long *)((long)local_c8 + uVar26) = lVar16 + 0x88;
  *(long *)((long)local_a0 + uVar26 + 8) = lVar20 + 0xb8;
  *(long *)((long)local_a0 + uVar26 + 0x10) = lVar20 + 0xd0;
  if (-3 < iVar33) {
    lVar16 = 0;
    do {
      piVar19 = (int *)local_a0[lVar16];
      iVar14 = piVar19[1];
      if (iVar14 == 0) {
        pMVar9 = local_d8[lVar16];
        *(undefined8 *)pMVar9 = 0;
        *(undefined8 *)(pMVar9 + 8) = 0;
                    /* catch() { ... } // from try @ 0054f17c with catch @ 0054f3a0
                       catch() { ... } // from try @ 0054f210 with catch @ 0054f3a0 */
        *(undefined8 *)(pMVar9 + 0x10) = 0;
                    /* catch() { ... } // from try @ 0054f0bc with catch @ 0054f3a4
                       catch() { ... } // from try @ 0054f150 with catch @ 0054f3a4 */
      }
      else {
                    /* try { // try from 0054f388 to 0064f3d7 has its CatchHandler @ 0054f044 */
                    /* catch() { ... } // from try @ 0054f088 with catch @ 0054f38c */
        if (*piVar19 - 1U < 0xd) {
          uVar15 = *(undefined4 *)(&DAT_00695430 + (long)(int)(*piVar19 - 1U) * 4);
        }
        else {
          uVar15 = 0;
        }
        pMVar9 = local_d8[lVar16];
        *(undefined4 *)pMVar9 = uVar15;
        *(int *)(pMVar9 + 4) = iVar14;
                    /* catch() { ... } // from try @ 0054f250 with catch @ 0054f3b4 */
        *(int *)(pMVar9 + 8) = piVar19[2];
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar7);
  }
  plVar17 = (long *)(lVar35 + lVar36 * 0x158 + 0xe8);
  if (*plVar17 == 0) {
    if (iVar33 < -2) {
      iVar14 = 0;
    }
    else {
      lVar16 = 0;
      iVar14 = 0;
      do {
        lVar20 = local_a0[lVar16];
        if (*(int *)(lVar20 + 4) != 0) {
          iVar14 = (4 - iVar14 % 4) + iVar14;
          *(long *)(local_d8[lVar16] + 0x10) = (long)iVar14;
          iVar14 = iVar14 + *(int *)(lVar20 + 8) * *(int *)pSVar32;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar7);
    }
    Mesh::AllocVertexBuffer((Mesh *)*in_x8,iVar14);
    if (-3 < iVar33) {
      lVar16 = 0;
      do {
        lVar20 = local_a0[lVar16];
        if (*(int *)(lVar20 + 4) != 0) {
          pvVar12 = (void *)(*(long *)(*in_x8 + 0x110) + *(long *)(local_d8[lVar16] + 0x10));
          *(void **)(local_d8[lVar16] + 0x10) = pvVar12;
          memcpy(pvVar12,*(void **)(lVar20 + 0x10),
                 (ulong)(uint)(*(int *)(lVar20 + 8) * *(int *)pSVar32));
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar7);
    }
  }
  else {
                    /* try { // try from 0054f3d8 to 0064f3ff has its CatchHandler @ 0054f408 */
    iVar14 = *(int *)(lVar35 + lVar36 * 0x158 + 0x40) * *(int *)pSVar32;
    Mesh::AllocVertexBuffer((Mesh *)*in_x8,iVar14);
                    /* try { // try from 0054f400 to 0064f40b has its CatchHandler @ 0054f044 */
                    /* catch() { ... } // from try @ 0054f310 with catch @ 0054f408
                       catch() { ... } // from try @ 0054f3d8 with catch @ 0054f408 */
    memcpy(*(void **)(*in_x8 + 0x110),(void *)*plVar17,(long)iVar14);
    if (-3 < iVar33) {
      lVar16 = 0;
      do {
        if (*(int *)(local_a0[lVar16] + 4) != 0) {
          *(long *)(local_d8[lVar16] + 0x10) =
               *(long *)(*in_x8 + 0x110) + *(long *)(local_a0[lVar16] + 0x10);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar7);
    }
  }
  piVar19 = (int *)*in_x8;
  pVVar11 = *(Vector2 **)(piVar19 + 0x36);
  if ((((pVVar11 != (Vector2 *)0x0) && (*(long *)(pVVar11 + 0x70) != 0)) && (0 < piVar19[0x50])) &&
     (((piVar18 = *(int **)(piVar19 + 0x14), piVar18[1] == 2 && (*piVar18 == 0x1406)) &&
      (*piVar19 != 0)))) {
    puVar24 = *(undefined8 **)(piVar18 + 4);
                    /* try { // try from 0054f57c to 0064f6af has its CatchHandler @ 0054f57c
                       catch(type#1 @ 00000000) { ... } // from try @ 0054f57c with catch @ 0054f57c
                       catch(type#1 @ 00000000) { ... } // from try @ 0054f6bc with catch @ 0054f57c
                       catch(type#1 @ 00000000) { ... } // from try @ 0054f778 with catch @ 0054f57c
                        */
    uVar37 = 1;
    while( true ) {
      Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(pVVar11);
      *puVar24 = CONCAT44(uStack_dc,local_e0);
      piVar19 = (int *)*in_x8;
      if ((ulong)(long)*piVar19 <= uVar37) break;
      pVVar11 = *(Vector2 **)(piVar19 + 0x36);
      uVar37 = uVar37 + 1;
      puVar24 = (undefined8 *)((long)puVar24 + (ulong)*(uint *)(*(long *)(piVar19 + 0x14) + 8));
    }
  }
  if (0 < piVar19[0x1d]) {
    uVar26 = (ulong)*(int *)(lVar35 + lVar36 * 0x158 + 0x108);
    uVar37 = uVar26 << 2;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar26;
    if (SUB168(auVar4 * ZEXT816(4),8) != 0) {
      uVar37 = 0xffffffffffffffff;
    }
    pvVar12 = operator_new__(uVar37);
    iVar7 = **(int **)(lVar35 + lVar36 * 0x158 + 0xf8);
    if (0 < iVar7) {
      lVar16 = 0;
      do {
        local_e0 = *(int *)(*(long *)(lVar35 + lVar36 * 0x158 + 0xf0) + lVar16 * 4);
        puVar13 = (undefined4 *)
                  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                  operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                             )(plVar8 + 5),&local_e0);
        *(undefined4 *)((long)pvVar12 + lVar16 * 4) = *puVar13;
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar7);
      piVar19 = (int *)*in_x8;
    }
    iVar7 = MeshData::valueSize((MeshData *)(piVar19 + 0x1c));
    piVar19 = (int *)*in_x8;
    if (iVar7 == 1) {
      iVar7 = *piVar19;
      if (0 < iVar7) {
        pbVar22 = *(byte **)(piVar19 + 0x20);
        do {
          iVar7 = iVar7 + -1;
          *pbVar22 = (byte)*(undefined4 *)((long)pvVar12 + (ulong)*pbVar22 * 4);
          pbVar22 = pbVar22 + (uint)piVar19[0x1e];
        } while (iVar7 != 0);
      }
    }
    else {
      iVar7 = MeshData::valueSize((MeshData *)(piVar19 + 0x1c));
      piVar19 = (int *)*in_x8;
      if (iVar7 == 2) {
        iVar7 = *piVar19;
        if (0 < iVar7) {
                    /* try { // try from 0054f6b0 to 0064f6bb has its CatchHandler @ 0054f72c */
          puVar23 = *(ushort **)(piVar19 + 0x20);
          do {
            iVar7 = iVar7 + -1;
                    /* try { // try from 0054f6bc to 0064f74f has its CatchHandler @ 0054f57c */
            *puVar23 = (ushort)*(undefined4 *)((long)pvVar12 + (ulong)*puVar23 * 4);
            puVar23 = (ushort *)((long)puVar23 + (ulong)(uint)piVar19[0x1e]);
          } while (iVar7 != 0);
        }
      }
      else {
        iVar7 = MeshData::valueSize((MeshData *)(piVar19 + 0x1c));
        if (iVar7 == 4) {
          piVar19 = (int *)*in_x8;
          iVar7 = *piVar19;
          if (0 < iVar7) {
            piVar18 = *(int **)(piVar19 + 0x20);
            do {
              iVar7 = iVar7 + -1;
              *piVar18 = *(int *)((long)pvVar12 + (long)*piVar18 * 4);
              piVar18 = (int *)((long)piVar18 + (ulong)(uint)piVar19[0x1e]);
            } while (iVar7 != 0);
          }
        }
      }
    }
    operator_delete__(pvVar12);
  }
  if (*(long *)(lVar5 + 0x28) != local_a0[7]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0054f6b0 with catch @ 0054f72c
                        */
  return;
}


