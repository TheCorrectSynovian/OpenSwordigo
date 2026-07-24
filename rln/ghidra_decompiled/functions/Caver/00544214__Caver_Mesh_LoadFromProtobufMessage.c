/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00544214
 * Function: Caver::Mesh::LoadFromProtobufMessage
 * Signature: undefined __thiscall LoadFromProtobufMessage(Mesh * this, Mesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::LoadFromProtobufMessage(Caver::Proto::Mesh const&) */

void __thiscall Caver::Mesh::LoadFromProtobufMessage(Mesh *this,Mesh *param_1)

{
  long lVar1;
  Mesh *pMVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  undefined8 *puVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lVar25;
  uchar *puVar26;
  uchar *puVar27;
  ulong uVar28;
  undefined4 *puVar29;
  undefined8 uVar30;
  Mesh *local_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00544240 to 00644247 has its CatchHandler @ 005445f4 */
  *(undefined8 *)this = *(undefined8 *)(param_1 + 0xc);
  uVar12 = *(uint *)(param_1 + 0xa0);
  if ((uVar12 >> 9 & 1) != 0) {
                    /* try { // try from 00544268 to 0064428f has its CatchHandler @ 00544500 */
    pMVar2 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(param_1 + 0x80) != 0) {
      pMVar2 = param_1;
    }
    MeshMaterial::LoadFromProtobufMessage
              ((MeshMaterial *)(this + 0xa0),*(MeshMaterial **)(pMVar2 + 0x80));
    uVar12 = *(uint *)(param_1 + 0xa0);
  }
  if ((uVar12 >> 0xc & 1) != 0) {
    iVar13 = (int)*(undefined8 *)(**(long **)(param_1 + 0x98) + -0x18);
    *(int *)(this + 0x118) = iVar13;
    uVar14 = (ulong)iVar13;
    if ((long)uVar14 < 0) {
      uVar14 = 0xffffffffffffffff;
    }
    pvVar10 = operator_new__(uVar14);
    pvVar15 = *(void **)(this + 0x120);
    *(void **)(this + 0x120) = pvVar10;
    if (pvVar15 != (void *)0x0) {
      operator_delete__(pvVar15);
    }
  }
  if (((byte)param_1[0xa1] >> 3 & 1) != 0) {
                    /* try { // try from 005442c8 to 006442ef has its CatchHandler @ 005444fc */
    iVar13 = (int)*(undefined8 *)(**(long **)(param_1 + 0x90) + -0x18);
    *(int *)(this + 0x108) = iVar13;
    uVar14 = (ulong)iVar13;
    if ((long)uVar14 < 0) {
      uVar14 = 0xffffffffffffffff;
    }
    pvVar10 = operator_new__(uVar14);
    pvVar15 = *(void **)(this + 0x110);
    *(void **)(this + 0x110) = pvVar10;
    if (pvVar15 != (void *)0x0) {
      operator_delete__(pvVar15);
    }
  }
  if (((byte)param_1[0xa0] >> 2 & 1) != 0) {
    puVar26 = *(uchar **)(this + 0x120);
    pMVar2 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(param_1 + 0x18) != 0) {
      pMVar2 = param_1;
    }
    lVar25 = *(long *)(pMVar2 + 0x18);
    if ((*(byte *)(lVar25 + 0x1c) & 1) == 0) {
      iVar13 = 0;
LAB_00544410:
      *(int *)(this + 8) = iVar13;
    }
    else {
      if (*(int *)(lVar25 + 0xc) - 1U < 7) {
        iVar13 = *(int *)(lVar25 + 0xc) + 0x13ff;
        goto LAB_00544410;
      }
      iVar13 = *(int *)(this + 8);
    }
    iVar8 = *(int *)(this + 0x118);
    *(undefined8 *)(this + 0xc) = *(undefined8 *)(lVar25 + 0x10);
    puVar27 = (uchar *)0x0;
    if ((*(uint *)(lVar25 + 0x1c) & 8) != 0) {
      puVar27 = puVar26 + *(int *)(lVar25 + 0x18);
    }
    *(uchar **)(this + 0x18) = puVar27;
    puVar27 = (uchar *)**(undefined8 **)(param_1 + 0x98);
    iVar9 = SizeOfDataType(iVar13);
    iVar13 = 0;
    if (iVar9 != 0) {
      iVar13 = iVar8 / iVar9;
    }
    iVar8 = SizeOfDataType(*(undefined4 *)(this + 8));
    if (iVar8 == 4) {
      CopyFromFileBuffer32(puVar26,puVar27,iVar13);
    }
    else if (iVar8 == 2) {
      CopyFromFileBuffer16(puVar26,puVar27,iVar13);
                    /* try { // try from 00544a28 to 00644b37 has its CatchHandler @ 00544ba4 */
    }
    else if (iVar8 == 1) {
                    /* catch() { ... } // from try @ 00543c6c with catch @ 00544a04
                       catch() { ... } // from try @ 00543c80 with catch @ 00544a04
                       catch() { ... } // from try @ 00543f4c with catch @ 00544a04 */
                    /* catch() { ... } // from try @ 00543894 with catch @ 00544a08 */
      CopyFromFileBuffer8(puVar26,puVar27,iVar13);
    }
  }
  lVar25 = *(long *)(this + 0x110);
  local_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  local_80 = (long *)0x0;
  uVar12 = *(uint *)(param_1 + 0xa0);
  if ((uVar12 >> 3 & 1) != 0) {
                    /* try { // try from 00544310 to 00644337 has its CatchHandler @ 005447a0 */
    pMVar2 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(param_1 + 0x20) != 0) {
      pMVar2 = param_1;
    }
    lVar18 = *(long *)(pMVar2 + 0x20);
    local_88 = this + 0x20;
    if ((*(byte *)(lVar18 + 0x1c) & 1) == 0) {
                    /* try { // try from 00544338 to 0064434f has its CatchHandler @ 00544aa4 */
      iVar13 = 0;
LAB_00544388:
      *(int *)local_88 = iVar13;
    }
    else {
                    /* try { // try from 00544370 to 00644397 has its CatchHandler @ 0054489c */
      if (*(int *)(lVar18 + 0xc) - 1U < 7) {
        iVar13 = *(int *)(lVar18 + 0xc) + 0x13ff;
        goto LAB_00544388;
      }
    }
    *(undefined8 *)(this + 0x24) = *(undefined8 *)(lVar18 + 0x10);
    lVar19 = 0;
    if ((*(uint *)(lVar18 + 0x1c) & 8) != 0) {
      lVar19 = lVar25 + *(int *)(lVar18 + 0x18);
    }
    *(long *)(this + 0x30) = lVar19;
                    /* try { // try from 005443b8 to 006443df has its CatchHandler @ 00544894 */
    std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
              ((vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *)&local_80,0,
               &local_88);
    uVar12 = *(uint *)(param_1 + 0xa0);
  }
  if ((uVar12 >> 4 & 1) != 0) {
    pMVar2 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(param_1 + 0x28) != 0) {
      pMVar2 = param_1;
    }
                    /* try { // try from 005443e0 to 00644543 has its CatchHandler @ 005437fc */
    lVar18 = *(long *)(pMVar2 + 0x28);
    local_88 = this + 0x38;
    if ((*(byte *)(lVar18 + 0x1c) & 1) == 0) {
      iVar13 = 0;
LAB_00544430:
      *(int *)local_88 = iVar13;
    }
    else if (*(int *)(lVar18 + 0xc) - 1U < 7) {
      iVar13 = *(int *)(lVar18 + 0xc) + 0x13ff;
      goto LAB_00544430;
    }
    *(undefined8 *)(this + 0x3c) = *(undefined8 *)(lVar18 + 0x10);
    lVar19 = 0;
    if ((*(uint *)(lVar18 + 0x1c) & 8) != 0) {
      lVar19 = lVar25 + *(int *)(lVar18 + 0x18);
    }
    *(long *)(this + 0x48) = lVar19;
    if (local_78 == plStack_70) {
      std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
                ((vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *)&local_80,
                 local_78,&local_88);
    }
    else {
      *local_78 = (long)local_88;
      local_78 = local_78 + 1;
    }
    uVar12 = *(uint *)(param_1 + 0xa0);
  }
  if ((uVar12 >> 6 & 1) != 0) {
    pMVar2 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(param_1 + 0x68) != 0) {
      pMVar2 = param_1;
    }
    lVar18 = *(long *)(pMVar2 + 0x68);
    local_88 = this + 0x58;
    if ((*(byte *)(lVar18 + 0x1c) & 1) == 0) {
      iVar13 = 0;
LAB_005444d4:
      *(int *)local_88 = iVar13;
    }
    else if (*(int *)(lVar18 + 0xc) - 1U < 7) {
      iVar13 = *(int *)(lVar18 + 0xc) + 0x13ff;
      goto LAB_005444d4;
    }
    *(undefined8 *)(this + 0x5c) = *(undefined8 *)(lVar18 + 0x10);
    lVar19 = 0;
    if ((*(uint *)(lVar18 + 0x1c) & 8) != 0) {
      lVar19 = lVar25 + *(int *)(lVar18 + 0x18);
    }
    *(long *)(this + 0x68) = lVar19;
                    /* catch() { ... } // from try @ 005439bc with catch @ 005444f8 */
                    /* catch() { ... } // from try @ 005442c8 with catch @ 005444fc */
                    /* catch() { ... } // from try @ 00544268 with catch @ 00544500 */
    if (local_78 == plStack_70) {
                    /* catch() { ... } // from try @ 00543b60 with catch @ 00544524 */
      std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
                ((vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *)&local_80,
                 local_78,&local_88);
    }
    else {
      *local_78 = (long)local_88;
                    /* catch() { ... } // from try @ 00544184 with catch @ 00544510 */
      local_78 = local_78 + 1;
                    /* catch() { ... } // from try @ 00544124 with catch @ 00544514 */
    }
    uVar12 = *(uint *)(param_1 + 0xa0);
  }
  if ((uVar12 >> 7 & 1) != 0) {
    pMVar2 = *(Mesh **)PTR_default_instance__007e66e0;
                    /* try { // try from 00544544 to 0064496b has its CatchHandler @ 00544ba4 */
    if (*(long *)(param_1 + 0x70) != 0) {
      pMVar2 = param_1;
    }
    lVar18 = *(long *)(pMVar2 + 0x70);
    local_88 = this + 0x70;
    if ((*(byte *)(lVar18 + 0x1c) & 1) == 0) {
      iVar13 = 0;
LAB_00544578:
      *(int *)local_88 = iVar13;
    }
    else if (*(int *)(lVar18 + 0xc) - 1U < 7) {
                    /* catch() { ... } // from try @ 00543ad0 with catch @ 00544570 */
                    /* catch() { ... } // from try @ 00543a50 with catch @ 00544574 */
      iVar13 = *(int *)(lVar18 + 0xc) + 0x13ff;
      goto LAB_00544578;
    }
    *(undefined8 *)(this + 0x74) = *(undefined8 *)(lVar18 + 0x10);
                    /* catch() { ... } // from try @ 00543994 with catch @ 0054458c */
    lVar19 = 0;
    if ((*(uint *)(lVar18 + 0x1c) & 8) != 0) {
      lVar19 = lVar25 + *(int *)(lVar18 + 0x18);
    }
    *(long *)(this + 0x80) = lVar19;
    if (local_78 == plStack_70) {
      std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
                ((vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *)&local_80,
                 local_78,&local_88);
    }
    else {
      *local_78 = (long)local_88;
      local_78 = local_78 + 1;
    }
    uVar12 = *(uint *)(param_1 + 0xa0);
  }
  if ((uVar12 >> 8 & 1) != 0) {
                    /* catch() { ... } // from try @ 00543958 with catch @ 005445dc */
                    /* catch() { ... } // from try @ 00544040 with catch @ 005445e0 */
                    /* catch() { ... } // from try @ 00543fe0 with catch @ 005445e4 */
    pMVar2 = *(Mesh **)PTR_default_instance__007e66e0;
    if (*(long *)(param_1 + 0x78) != 0) {
      pMVar2 = param_1;
    }
    lVar18 = *(long *)(pMVar2 + 0x78);
    local_88 = this + 0x88;
                    /* catch() { ... } // from try @ 00544240 with catch @ 005445f4 */
    if ((*(byte *)(lVar18 + 0x1c) & 1) == 0) {
      iVar13 = 0;
LAB_0054461c:
      *(int *)local_88 = iVar13;
    }
    else if (*(int *)(lVar18 + 0xc) - 1U < 7) {
      iVar13 = *(int *)(lVar18 + 0xc) + 0x13ff;
      goto LAB_0054461c;
    }
    *(undefined8 *)(this + 0x8c) = *(undefined8 *)(lVar18 + 0x10);
    lVar19 = 0;
    if ((*(uint *)(lVar18 + 0x1c) & 8) != 0) {
      lVar19 = lVar25 + *(int *)(lVar18 + 0x18);
    }
    *(long *)(this + 0x98) = lVar19;
    if (local_78 == plStack_70) {
      std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
                ((vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *)&local_80,
                 local_78,&local_88);
    }
    else {
      *local_78 = (long)local_88;
      local_78 = local_78 + 1;
    }
  }
  iVar13 = *(int *)(param_1 + 0x38);
  uVar28 = (ulong)iVar13;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar28;
  uVar14 = (uVar28 + (long)iVar13 * 2) * 8;
                    /* catch() { ... } // from try @ 00544204 with catch @ 0054468c */
  if (SUB168(auVar3 * ZEXT816(0x18),8) != 0) {
    uVar14 = 0xffffffffffffffff;
  }
                    /* catch() { ... } // from try @ 00543b10 with catch @ 00544690 */
  *(int *)(this + 0x140) = iVar13;
  puVar11 = operator_new__(uVar14);
  if (iVar13 != 0) {
    uVar14 = (uVar28 * 0x18 - 0x18) / 0x18 + 1;
    puVar16 = puVar11;
    if (1 < uVar14) {
      uVar21 = uVar14 & 0x1ffffffffffffffe;
      puVar23 = puVar11 + 3;
      puVar16 = puVar11 + uVar21 * 3;
      uVar24 = uVar21;
      do {
        puVar23[-3] = 0;
        *puVar23 = 0;
        *(undefined4 *)(puVar23 + -2) = 0;
        *(undefined4 *)(puVar23 + 1) = 0;
        puVar23[-1] = 0;
        puVar23[2] = 0;
        uVar24 = uVar24 - 2;
                    /* catch() { ... } // from try @ 00543ce0 with catch @ 005446fc */
        puVar23 = puVar23 + 6;
                    /* catch() { ... } // from try @ 0054394c with catch @ 00544700
                       catch() { ... } // from try @ 00543960 with catch @ 00544700
                       catch() { ... } // from try @ 00543c40 with catch @ 00544700 */
      } while (uVar24 != 0);
                    /* catch() { ... } // from try @ 005440fc with catch @ 00544704 */
      if (uVar14 == uVar21) goto LAB_00544728;
    }
    do {
      *puVar16 = 0;
      *(undefined4 *)(puVar16 + 1) = 0;
      puVar16[2] = 0;
      puVar16 = puVar16 + 3;
    } while (puVar16 != puVar11 + uVar28 * 3);
  }
LAB_00544728:
  pvVar10 = *(void **)(this + 0x50);
  *(undefined8 **)(this + 0x50) = puVar11;
  if (pvVar10 != (void *)0x0) {
    operator_delete__(pvVar10);
    iVar13 = *(int *)(this + 0x140);
  }
  plVar5 = local_80;
  plVar6 = local_78;
  if (0 < iVar13) {
    lVar19 = 0;
    lVar18 = 0;
    do {
      lVar18 = lVar18 + 1;
      puVar11 = (undefined8 *)(*(long *)(this + 0x50) + lVar19);
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 1) = 0;
      puVar11[2] = 0;
      uVar14 = (ulong)*(int *)(this + 0x140);
      lVar19 = lVar19 + 0x18;
    } while (lVar18 < (long)uVar14);
    if (0 < *(int *)(this + 0x140)) {
      lVar19 = 0;
      lVar18 = 0;
      do {
        lVar22 = *(long *)(this + 0x50);
        lVar20 = *(long *)(*(long *)(param_1 + 0x30) + lVar18 * 8);
        local_88 = (Mesh *)(lVar22 + lVar19);
                    /* catch() { ... } // from try @ 005440c0 with catch @ 0054479c */
                    /* catch() { ... } // from try @ 005441f8 with catch @ 005447a0
                       catch() { ... } // from try @ 0054420c with catch @ 005447a0
                       catch() { ... } // from try @ 00544310 with catch @ 005447a0 */
        if ((*(byte *)(lVar20 + 0x1c) & 1) == 0) {
                    /* catch() { ... } // from try @ 00543fb8 with catch @ 005447a4 */
          iVar13 = 0;
LAB_005447c0:
          *(int *)(lVar22 + lVar19) = iVar13;
        }
        else if (*(int *)(lVar20 + 0xc) - 1U < 7) {
          iVar13 = *(int *)(lVar20 + 0xc) + 0x13ff;
          goto LAB_005447c0;
        }
        *(undefined8 *)(lVar22 + lVar19 + 4) = *(undefined8 *)(lVar20 + 0x10);
        lVar1 = 0;
        if ((*(uint *)(lVar20 + 0x1c) & 8) != 0) {
          lVar1 = lVar25 + *(int *)(lVar20 + 0x18);
        }
        *(long *)(lVar22 + lVar19 + 0x10) = lVar1;
        if (local_78 == plStack_70) {
          std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
                    ((vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *)
                     &local_80,local_78,&local_88);
          uVar14 = (ulong)*(uint *)(this + 0x140);
        }
        else {
          *local_78 = (long)local_88;
          local_78 = local_78 + 1;
        }
        lVar18 = lVar18 + 1;
        lVar19 = lVar19 + 0x18;
        plVar5 = local_80;
        plVar6 = local_78;
      } while (lVar18 < (int)uVar14);
    }
  }
  for (; plVar7 = local_78, plVar5 != local_78; plVar5 = plVar5 + 1) {
                    /* catch() { ... } // from try @ 00543f84 with catch @ 0054483c */
    puVar29 = (undefined4 *)*plVar5;
                    /* catch() { ... } // from try @ 00543864 with catch @ 00544840 */
                    /* catch() { ... } // from try @ 00543a1c with catch @ 00544844
                       catch() { ... } // from try @ 00543a58 with catch @ 00544844
                       catch() { ... } // from try @ 00543b80 with catch @ 00544844 */
    lVar19 = *(long *)(this + 0x110);
    lVar18 = *(long *)(puVar29 + 4);
    lVar25 = **(long **)(param_1 + 0x90);
    local_78 = plVar6;
    iVar8 = SizeOfDataType(*puVar29);
    iVar13 = puVar29[1];
    lVar25 = lVar25 + (lVar18 - lVar19);
    lVar19 = (long)(int)puVar29[2];
    if (iVar8 == 1) {
      if (*(int *)this != 0) {
        lVar20 = 0;
        uVar12 = 0;
        do {
                    /* catch() { ... } // from try @ 00543df4 with catch @ 00544904 */
                    /* catch() { ... } // from try @ 00543d74 with catch @ 00544908 */
          CopyFromFileBuffer8((uchar *)(lVar18 + lVar20),(uchar *)(lVar25 + lVar20),iVar13);
          uVar12 = uVar12 + 1;
          lVar20 = lVar20 + lVar19;
                    /* catch() { ... } // from try @ 00543cb8 with catch @ 00544920 */
        } while (uVar12 < *(uint *)this);
      }
    }
    else if (iVar8 == 2) {
                    /* catch() { ... } // from try @ 00543e84 with catch @ 005448b8 */
      if (*(int *)this != 0) {
        lVar20 = 0;
        uVar12 = 0;
        do {
          CopyFromFileBuffer16((uchar *)(lVar18 + lVar20),(uchar *)(lVar25 + lVar20),iVar13);
          uVar12 = uVar12 + 1;
          lVar20 = lVar20 + lVar19;
        } while (uVar12 < *(uint *)this);
      }
    }
    else if ((iVar8 == 4) && (*(int *)this != 0)) {
      lVar20 = 0;
      uVar12 = 0;
      do {
                    /* catch() { ... } // from try @ 005443b8 with catch @ 00544894 */
                    /* catch() { ... } // from try @ 00544370 with catch @ 0054489c */
        CopyFromFileBuffer32((uchar *)(lVar18 + lVar20),(uchar *)(lVar25 + lVar20),iVar13);
        uVar12 = uVar12 + 1;
        lVar20 = lVar20 + lVar19;
                    /* catch() { ... } // from try @ 005438b8 with catch @ 005448ac */
      } while (uVar12 < *(uint *)this);
    }
    plVar6 = local_78;
    local_78 = plVar7;
  }
  pMVar2 = *(Mesh **)PTR_default_instance__007e66e0;
  if (*(long *)(param_1 + 0x88) != 0) {
    pMVar2 = param_1;
  }
  lVar25 = *(long *)(pMVar2 + 0x88);
  uVar30 = *(undefined8 *)(lVar25 + 0xc);
  uVar17 = *(undefined8 *)(lVar25 + 0x1c);
  *(undefined8 *)(this + 0x14c) = *(undefined8 *)(lVar25 + 0x14);
  *(undefined8 *)(this + 0x144) = uVar30;
  *(undefined8 *)(this + 0x154) = uVar17;
                    /* try { // try from 0054496c to 00644a27 has its CatchHandler @ 005437fc */
  local_78 = plVar6;
  if (local_80 != (long *)0x0) {
                    /* catch() { ... } // from try @ 00543c78 with catch @ 00544970 */
    operator_delete(local_80);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 0054384c with catch @ 00544988 */
                    /* catch() { ... } // from try @ 00543f78 with catch @ 00544994
                       catch() { ... } // from try @ 00543f8c with catch @ 00544994
                       catch() { ... } // from try @ 00544088 with catch @ 00544994 */
                    /* catch() { ... } // from try @ 00543e34 with catch @ 00544998 */
  return;
}


