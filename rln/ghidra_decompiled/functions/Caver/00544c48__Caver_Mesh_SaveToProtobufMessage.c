/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00544c48
 * Function: Caver::Mesh::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Mesh * this, Mesh * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Mesh::SaveToProtobufMessage(Caver::Proto::Mesh*) const */

void __thiscall Caver::Mesh::SaveToProtobufMessage(Mesh *this,Mesh *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  MeshMaterial *this_00;
  MeshData *pMVar12;
  uchar *puVar13;
  long *plVar14;
  Box *this_01;
  uchar *puVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  Mesh *local_88;
  long *local_80;
  long *local_78;
  long *plStack_70;
  long local_68;
  
                    /* try { // try from 00544c58 to 00644c73 has its CatchHandler @ 00544ba8 */
                    /* catch() { ... } // from try @ 00544c30 with catch @ 00544c60 */
                    /* catch() { ... } // from try @ 00544bc0 with catch @ 00544c64 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00544c74 to 00644c7f has its CatchHandler @ 00544c80 */
                    /* catch() { ... } // from try @ 00544c74 with catch @ 00544c80 */
  uVar10 = *(uint *)(param_1 + 0xa0);
                    /* try { // try from 00544c84 to 00644c87 has its CatchHandler @ 00544c8c */
  this_00 = *(MeshMaterial **)(param_1 + 0x80);
                    /* catch() { ... } // from try @ 00544c84 with catch @ 00544c8c */
                    /* catch() { ... } // from try @ 00544d40 with catch @ 00544c90 */
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)this;
  *(uint *)(param_1 + 0xa0) = uVar10 | 1;
  uVar2 = *(undefined4 *)(this + 4);
  *(uint *)(param_1 + 0xa0) = uVar10 | 0x203;
                    /* try { // try from 00544ca8 to 00644caf has its CatchHandler @ 00544d4c */
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (this_00 == (MeshMaterial *)0x0) {
    this_00 = operator_new(0x40);
    Proto::MeshMaterial::MeshMaterial(this_00);
    *(MeshMaterial **)(param_1 + 0x80) = this_00;
  }
  MeshMaterial::SaveToProtobufMessage((MeshMaterial *)(this + 0xa0),this_00);
  if (0 < *(int *)(this + 0xc)) {
                    /* try { // try from 00544cdc to 00644ce7 has its CatchHandler @ 00544cf4 */
    pMVar12 = *(MeshData **)(param_1 + 0x18);
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 4;
    if (pMVar12 == (MeshData *)0x0) {
                    /* catch() { ... } // from try @ 00544cdc with catch @ 00544cf4 */
      pMVar12 = operator_new(0x20);
      Proto::MeshData::MeshData(pMVar12);
      *(MeshData **)(param_1 + 0x18) = pMVar12;
    }
    lVar8 = *(long *)(this + 0x120);
                    /* try { // try from 00544d18 to 00644d3f has its CatchHandler @ 00544d48 */
    if (*(int *)(this + 8) - 0x1400U < 7) {
      *(int *)(pMVar12 + 0xc) = *(int *)(this + 8) + -0x13ff;
      uVar10 = *(uint *)(pMVar12 + 0x1c) | 1;
      *(uint *)(pMVar12 + 0x1c) = uVar10;
    }
    else {
      uVar10 = *(uint *)(pMVar12 + 0x1c);
    }
    uVar2 = *(undefined4 *)(this + 0xc);
                    /* try { // try from 00544d40 to 00644d5b has its CatchHandler @ 00544c90 */
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 2;
                    /* catch() { ... } // from try @ 00544d18 with catch @ 00544d48 */
                    /* catch() { ... } // from try @ 00544ca8 with catch @ 00544d4c */
    *(undefined4 *)(pMVar12 + 0x10) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x10);
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 6;
    *(undefined4 *)(pMVar12 + 0x14) = uVar2;
                    /* try { // try from 00544d5c to 00644d67 has its CatchHandler @ 00544d68 */
    if (lVar8 == 0) {
      iVar7 = (int)*(undefined8 *)(this + 0x18);
LAB_00544d74:
                    /* catch() { ... } // from try @ 00544d6c with catch @ 00544d74 */
                    /* catch() { ... } // from try @ 00544e28 with catch @ 00544d78 */
      *(int *)(pMVar12 + 0x18) = iVar7;
      *(uint *)(pMVar12 + 0x1c) = uVar10 | 0xe;
    }
    else if (*(long *)(this + 0x18) != 0) {
                    /* catch() { ... } // from try @ 00544d5c with catch @ 00544d68 */
      iVar7 = (int)*(long *)(this + 0x18) - (int)lVar8;
                    /* try { // try from 00544d6c to 00644d6f has its CatchHandler @ 00544d74 */
      goto LAB_00544d74;
    }
    puVar1 = PTR__default_index_data__007e6c48;
    plVar6 = *(long **)(param_1 + 0x98);
                    /* try { // try from 00544d90 to 00644d97 has its CatchHandler @ 00544e34 */
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x1000;
    if (plVar6 == (long *)puVar1) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x98) = plVar6;
    }
    FUN_00669650(plVar6,(long)*(int *)(this + 0x118),0);
                    /* try { // try from 00544dc4 to 00644dcf has its CatchHandler @ 00544ddc */
    plVar6 = *(long **)(param_1 + 0x98);
    puVar13 = *(uchar **)(this + 0x120);
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x1000;
                    /* catch() { ... } // from try @ 00544dc4 with catch @ 00544ddc */
    if (plVar6 == (long *)puVar1) {
      plVar6 = operator_new(8);
      *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
      *(long **)(param_1 + 0x98) = plVar6;
    }
                    /* try { // try from 00544e00 to 00644e27 has its CatchHandler @ 00544e30 */
    puVar15 = (uchar *)*plVar6;
    if (-1 < *(int *)(puVar15 + -8)) {
      FUN_00668ea8(plVar6);
      puVar15 = (uchar *)*plVar6;
    }
    iVar7 = *(int *)(this + 0x118);
    iVar5 = SizeOfDataType(*(undefined4 *)(this + 8));
                    /* try { // try from 00544e28 to 00644e43 has its CatchHandler @ 00544d78 */
    iVar11 = 0;
    if (iVar5 != 0) {
      iVar11 = iVar7 / iVar5;
    }
                    /* catch() { ... } // from try @ 00544e00 with catch @ 00544e30 */
    iVar7 = SizeOfDataType(*(undefined4 *)(this + 8));
                    /* catch() { ... } // from try @ 00544d90 with catch @ 00544e34 */
    if (iVar7 == 4) {
                    /* try { // try from 00544e78 to 00644e7f has its CatchHandler @ 00544f1c */
      CopyToFileBuffer32(puVar15,puVar13,iVar11);
    }
    else if (iVar7 == 2) {
                    /* catch() { ... } // from try @ 00544f10 with catch @ 00544e60 */
      CopyToFileBuffer16(puVar15,puVar13,iVar11);
    }
    else {
                    /* try { // try from 00544e44 to 00644e4f has its CatchHandler @ 00544e50 */
      if (iVar7 == 1) {
                    /* catch() { ... } // from try @ 00544e44 with catch @ 00544e50 */
                    /* try { // try from 00544e54 to 00644e57 has its CatchHandler @ 00544e5c */
        CopyToFileBuffer8(puVar15,puVar13,iVar11);
                    /* catch() { ... } // from try @ 00544e54 with catch @ 00544e5c */
      }
    }
  }
  lVar8 = *(long *)(this + 0x110);
  local_78 = (long *)0x0;
  plStack_70 = (long *)0x0;
  local_80 = (long *)0x0;
  iVar7 = (int)lVar8;
  if (0 < *(int *)(this + 0x24)) {
    pMVar12 = *(MeshData **)(param_1 + 0x20);
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 8;
                    /* try { // try from 00544eac to 00644eb7 has its CatchHandler @ 00544ec4 */
    if (pMVar12 == (MeshData *)0x0) {
      pMVar12 = operator_new(0x20);
      Proto::MeshData::MeshData(pMVar12);
                    /* catch() { ... } // from try @ 00544eac with catch @ 00544ec4 */
      *(MeshData **)(param_1 + 0x20) = pMVar12;
    }
    local_88 = this + 0x20;
    if (*(int *)local_88 - 0x1400U < 7) {
                    /* try { // try from 00544ee8 to 00644f0f has its CatchHandler @ 00544f18 */
      *(int *)(pMVar12 + 0xc) = *(int *)local_88 + -0x13ff;
      uVar10 = *(uint *)(pMVar12 + 0x1c) | 1;
      *(uint *)(pMVar12 + 0x1c) = uVar10;
    }
    else {
      uVar10 = *(uint *)(pMVar12 + 0x1c);
    }
    uVar2 = *(undefined4 *)(this + 0x24);
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 2;
                    /* try { // try from 00544f10 to 00644f2b has its CatchHandler @ 00544e60 */
    *(undefined4 *)(pMVar12 + 0x10) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x28);
                    /* catch() { ... } // from try @ 00544ee8 with catch @ 00544f18 */
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 6;
                    /* catch() { ... } // from try @ 00544e78 with catch @ 00544f1c */
    *(undefined4 *)(pMVar12 + 0x14) = uVar2;
    if (lVar8 == 0) {
      iVar11 = (int)*(undefined8 *)(this + 0x30);
LAB_00544f38:
                    /* catch() { ... } // from try @ 00544f2c with catch @ 00544f38 */
                    /* try { // try from 00544f3c to 00644f3f has its CatchHandler @ 00544f44 */
      *(int *)(pMVar12 + 0x18) = iVar11;
      *(uint *)(pMVar12 + 0x1c) = uVar10 | 0xe;
    }
    else if (*(long *)(this + 0x30) != 0) {
                    /* try { // try from 00544f2c to 00644f37 has its CatchHandler @ 00544f38 */
      iVar11 = (int)*(long *)(this + 0x30) - iVar7;
      goto LAB_00544f38;
    }
                    /* catch() { ... } // from try @ 00544f3c with catch @ 00544f44 */
                    /* catch() { ... } // from try @ 00544ff8 with catch @ 00544f48 */
    if (local_78 == plStack_70) {
      std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
                ((vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *)&local_80,
                 local_78,&local_88);
    }
    else {
      *local_78 = (long)local_88;
      local_78 = local_78 + 1;
                    /* try { // try from 00544f60 to 00644f67 has its CatchHandler @ 00545004 */
    }
  }
  if (0 < *(int *)(this + 0x3c)) {
    pMVar12 = *(MeshData **)(param_1 + 0x28);
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x10;
    if (pMVar12 == (MeshData *)0x0) {
                    /* try { // try from 00544f94 to 00644f9f has its CatchHandler @ 00544fac */
      pMVar12 = operator_new(0x20);
      Proto::MeshData::MeshData(pMVar12);
      *(MeshData **)(param_1 + 0x28) = pMVar12;
    }
    local_88 = this + 0x38;
                    /* catch() { ... } // from try @ 00544f94 with catch @ 00544fac */
    if (*(int *)local_88 - 0x1400U < 7) {
      *(int *)(pMVar12 + 0xc) = *(int *)local_88 + -0x13ff;
                    /* try { // try from 00544fd0 to 00644ff7 has its CatchHandler @ 00545000 */
      uVar10 = *(uint *)(pMVar12 + 0x1c) | 1;
      *(uint *)(pMVar12 + 0x1c) = uVar10;
    }
    else {
      uVar10 = *(uint *)(pMVar12 + 0x1c);
    }
    uVar2 = *(undefined4 *)(this + 0x3c);
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 2;
    *(undefined4 *)(pMVar12 + 0x10) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x40);
                    /* try { // try from 00544ff8 to 00645013 has its CatchHandler @ 00544f48 */
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 6;
    *(undefined4 *)(pMVar12 + 0x14) = uVar2;
                    /* catch() { ... } // from try @ 00544fd0 with catch @ 00545000 */
    if (lVar8 == 0) {
                    /* try { // try from 00545014 to 0064501f has its CatchHandler @ 00545020 */
      iVar11 = (int)*(undefined8 *)(this + 0x48);
LAB_00545018:
      *(int *)(pMVar12 + 0x18) = iVar11;
      *(uint *)(pMVar12 + 0x1c) = uVar10 | 0xe;
    }
    else {
                    /* catch() { ... } // from try @ 00544f60 with catch @ 00545004 */
      if (*(long *)(this + 0x48) != 0) {
        iVar11 = (int)*(long *)(this + 0x48) - iVar7;
        goto LAB_00545018;
      }
    }
                    /* catch() { ... } // from try @ 00545014 with catch @ 00545020 */
                    /* try { // try from 00545024 to 00645027 has its CatchHandler @ 0054502c */
                    /* catch() { ... } // from try @ 00545024 with catch @ 0054502c */
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
  if (0 < *(int *)(this + 0x5c)) {
    pMVar12 = *(MeshData **)(param_1 + 0x68);
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x40;
    if (pMVar12 == (MeshData *)0x0) {
      pMVar12 = operator_new(0x20);
      Proto::MeshData::MeshData(pMVar12);
      *(MeshData **)(param_1 + 0x68) = pMVar12;
    }
    local_88 = this + 0x58;
    if (*(int *)local_88 - 0x1400U < 7) {
      *(int *)(pMVar12 + 0xc) = *(int *)local_88 + -0x13ff;
      uVar10 = *(uint *)(pMVar12 + 0x1c) | 1;
      *(uint *)(pMVar12 + 0x1c) = uVar10;
    }
    else {
      uVar10 = *(uint *)(pMVar12 + 0x1c);
    }
    uVar2 = *(undefined4 *)(this + 0x5c);
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 2;
    *(undefined4 *)(pMVar12 + 0x10) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x60);
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 6;
    *(undefined4 *)(pMVar12 + 0x14) = uVar2;
    if (lVar8 == 0) {
      iVar11 = (int)*(undefined8 *)(this + 0x68);
LAB_005450f8:
      *(int *)(pMVar12 + 0x18) = iVar11;
      *(uint *)(pMVar12 + 0x1c) = uVar10 | 0xe;
    }
    else if (*(long *)(this + 0x68) != 0) {
      iVar11 = (int)*(long *)(this + 0x68) - iVar7;
      goto LAB_005450f8;
    }
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
  if (0 < *(int *)(this + 0x74)) {
    pMVar12 = *(MeshData **)(param_1 + 0x70);
                    /* try { // try from 00545148 to 00645213 has its CatchHandler @ 00545148
                       catch() { ... } // from try @ 00545148 with catch @ 00545148
                       catch() { ... } // from try @ 0054531c with catch @ 00545148
                       catch() { ... } // from try @ 005453e0 with catch @ 00545148
                       catch() { ... } // from try @ 005454f4 with catch @ 00545148
                       catch() { ... } // from try @ 00545608 with catch @ 00545148
                       catch() { ... } // from try @ 00545870 with catch @ 00545148 */
    *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x80;
    if (pMVar12 == (MeshData *)0x0) {
      pMVar12 = operator_new(0x20);
      Proto::MeshData::MeshData(pMVar12);
      *(MeshData **)(param_1 + 0x70) = pMVar12;
    }
    local_88 = this + 0x70;
    if (*(int *)local_88 - 0x1400U < 7) {
      *(int *)(pMVar12 + 0xc) = *(int *)local_88 + -0x13ff;
      uVar10 = *(uint *)(pMVar12 + 0x1c) | 1;
      *(uint *)(pMVar12 + 0x1c) = uVar10;
    }
    else {
      uVar10 = *(uint *)(pMVar12 + 0x1c);
    }
    uVar2 = *(undefined4 *)(this + 0x74);
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 2;
    *(undefined4 *)(pMVar12 + 0x10) = uVar2;
    uVar2 = *(undefined4 *)(this + 0x78);
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 6;
    *(undefined4 *)(pMVar12 + 0x14) = uVar2;
    if (lVar8 == 0) {
      iVar11 = (int)*(undefined8 *)(this + 0x80);
LAB_005451d8:
      *(int *)(pMVar12 + 0x18) = iVar11;
      *(uint *)(pMVar12 + 0x1c) = uVar10 | 0xe;
    }
    else if (*(long *)(this + 0x80) != 0) {
      iVar11 = (int)*(long *)(this + 0x80) - iVar7;
      goto LAB_005451d8;
    }
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
                    /* try { // try from 00545214 to 0064523b has its CatchHandler @ 00545828 */
  if (*(int *)(this + 0x8c) < 1) goto LAB_005452f0;
  pMVar12 = *(MeshData **)(param_1 + 0x78);
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x100;
  if (pMVar12 == (MeshData *)0x0) {
    pMVar12 = operator_new(0x20);
    Proto::MeshData::MeshData(pMVar12);
    *(MeshData **)(param_1 + 0x78) = pMVar12;
  }
  local_88 = this + 0x88;
  if (*(int *)local_88 - 0x1400U < 7) {
    *(int *)(pMVar12 + 0xc) = *(int *)local_88 + -0x13ff;
    uVar10 = *(uint *)(pMVar12 + 0x1c) | 1;
    *(uint *)(pMVar12 + 0x1c) = uVar10;
  }
  else {
    uVar10 = *(uint *)(pMVar12 + 0x1c);
  }
  uVar2 = *(undefined4 *)(this + 0x8c);
                    /* try { // try from 00545284 to 006452ab has its CatchHandler @ 005457dc */
  *(uint *)(pMVar12 + 0x1c) = uVar10 | 2;
  *(undefined4 *)(pMVar12 + 0x10) = uVar2;
  uVar2 = *(undefined4 *)(this + 0x90);
  *(uint *)(pMVar12 + 0x1c) = uVar10 | 6;
  *(undefined4 *)(pMVar12 + 0x14) = uVar2;
  if (lVar8 == 0) {
    iVar11 = (int)*(undefined8 *)(this + 0x98);
LAB_005452b8:
    *(int *)(pMVar12 + 0x18) = iVar11;
    *(uint *)(pMVar12 + 0x1c) = uVar10 | 0xe;
  }
  else if (*(long *)(this + 0x98) != 0) {
    iVar11 = (int)*(long *)(this + 0x98) - iVar7;
    goto LAB_005452b8;
  }
  if (local_78 == plStack_70) {
    std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
              ((vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *)&local_80,
               local_78,&local_88);
  }
  else {
    *local_78 = (long)local_88;
    local_78 = local_78 + 1;
  }
LAB_005452f0:
                    /* try { // try from 005452f4 to 0064531b has its CatchHandler @ 00545790 */
  if (0 < *(int *)(this + 0x140)) {
    lVar18 = 0;
    lVar20 = 0;
    do {
      iVar11 = *(int *)(param_1 + 0x38);
      iVar5 = *(int *)(param_1 + 0x3c);
      lVar16 = *(long *)(this + 0x50);
                    /* try { // try from 0054531c to 006453b7 has its CatchHandler @ 00545148 */
      if (iVar11 < iVar5) {
        *(int *)(param_1 + 0x38) = iVar11 + 1;
        pMVar12 = *(MeshData **)(*(long *)(param_1 + 0x30) + (long)iVar11 * 8);
      }
      else {
        if (iVar5 == *(int *)(param_1 + 0x40)) {
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve
                    ((RepeatedPtrFieldBase *)(param_1 + 0x30),iVar5 + 1);
          iVar5 = *(int *)(param_1 + 0x3c);
        }
        *(int *)(param_1 + 0x3c) = iVar5 + 1;
        pMVar12 = operator_new(0x20);
        Proto::MeshData::MeshData(pMVar12);
        iVar11 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = iVar11 + 1;
        *(MeshData **)(*(long *)(param_1 + 0x30) + (long)iVar11 * 8) = pMVar12;
      }
      iVar11 = *(int *)(lVar16 + lVar18);
      if (iVar11 - 0x1400U < 7) {
        *(int *)(pMVar12 + 0xc) = iVar11 + -0x13ff;
        uVar10 = *(uint *)(pMVar12 + 0x1c) | 1;
        *(uint *)(pMVar12 + 0x1c) = uVar10;
      }
      else {
        uVar10 = *(uint *)(pMVar12 + 0x1c);
      }
      lVar16 = lVar16 + lVar18;
      uVar2 = *(undefined4 *)(lVar16 + 4);
                    /* try { // try from 005453b8 to 006453df has its CatchHandler @ 00545744 */
      *(uint *)(pMVar12 + 0x1c) = uVar10 | 2;
      *(undefined4 *)(pMVar12 + 0x10) = uVar2;
      uVar2 = *(undefined4 *)(lVar16 + 8);
      *(uint *)(pMVar12 + 0x1c) = uVar10 | 6;
      *(undefined4 *)(pMVar12 + 0x14) = uVar2;
      if (lVar8 == 0) {
        iVar11 = (int)*(undefined8 *)(lVar16 + 0x10);
LAB_005453ec:
        *(int *)(pMVar12 + 0x18) = iVar11;
        *(uint *)(pMVar12 + 0x1c) = uVar10 | 0xe;
      }
      else if (*(long *)(lVar16 + 0x10) != 0) {
                    /* try { // try from 005453e0 to 006454cb has its CatchHandler @ 00545148 */
        iVar11 = (int)*(long *)(lVar16 + 0x10) - iVar7;
        goto LAB_005453ec;
      }
      local_88 = (Mesh *)(*(long *)(this + 0x50) + lVar18);
      if (local_78 == plStack_70) {
        std::vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>>::_M_insert_aux
                  ((vector<Caver::MeshData_const*,std::allocator<Caver::MeshData_const*>> *)
                   &local_80,local_78,&local_88);
      }
      else {
        *local_78 = (long)local_88;
        local_78 = local_78 + 1;
      }
      lVar20 = lVar20 + 1;
      lVar18 = lVar18 + 0x18;
    } while (lVar20 < *(int *)(this + 0x140));
  }
  puVar1 = PTR__default_vertex_data__007e5ae0;
  plVar6 = *(long **)(param_1 + 0x90);
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x800;
  if (plVar6 == (long *)puVar1) {
    plVar6 = operator_new(8);
    *plVar6 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x90) = plVar6;
  }
  FUN_00669650(plVar6,(long)*(int *)(this + 0x108),0);
  plVar6 = local_78;
  if (local_80 != local_78) {
    puVar1 = PTR_DAT_007e5de8 + 0x18;
    plVar19 = local_80;
    do {
      puVar4 = PTR__default_vertex_data__007e5ae0;
      puVar17 = (undefined4 *)*plVar19;
      plVar14 = *(long **)(param_1 + 0x90);
      lVar20 = *(long *)(puVar17 + 4);
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x800;
      lVar8 = lVar20;
                    /* try { // try from 005454cc to 006454f3 has its CatchHandler @ 005456f8 */
      if (plVar14 == (long *)puVar4) {
        plVar14 = operator_new(8);
        *plVar14 = (long)puVar1;
        *(long **)(param_1 + 0x90) = plVar14;
        lVar8 = *(long *)(puVar17 + 4);
      }
                    /* try { // try from 005454f4 to 006455df has its CatchHandler @ 00545148 */
      lVar16 = *plVar14;
      lVar18 = *(long *)(this + 0x110);
      if (-1 < *(int *)(lVar16 + -8)) {
        FUN_00668ea8(plVar14);
        lVar16 = *plVar14;
      }
      iVar7 = SizeOfDataType(*puVar17);
      if (*(int *)this != 0) {
        iVar11 = puVar17[1];
        iVar5 = puVar17[2];
        lVar21 = 0;
        uVar10 = 0;
        do {
          puVar13 = (uchar *)(lVar16 + (lVar8 - lVar18) + lVar21);
          puVar15 = (uchar *)(lVar20 + lVar21);
          if (iVar7 == 4) {
            CopyToFileBuffer32(puVar13,puVar15,iVar11);
          }
          else if (iVar7 == 2) {
            CopyToFileBuffer16(puVar13,puVar15,iVar11);
          }
          else if (iVar7 == 1) {
            CopyToFileBuffer8(puVar13,puVar15,iVar11);
          }
          uVar10 = uVar10 + 1;
          lVar21 = lVar21 + iVar5;
        } while (uVar10 < *(uint *)this);
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar6);
  }
  this_01 = *(Box **)(param_1 + 0x88);
  *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x400;
  if (this_01 == (Box *)0x0) {
    this_01 = operator_new(0x28);
    Proto::Box::Box(this_01);
    *(Box **)(param_1 + 0x88) = this_01;
  }
                    /* try { // try from 005455e0 to 00645607 has its CatchHandler @ 005456ac */
  *(undefined8 *)(this_01 + 0xc) = *(undefined8 *)(this + 0x144);
  *(undefined8 *)(this_01 + 0x14) = *(undefined8 *)(this + 0x14c);
  uVar9 = *(undefined8 *)(this + 0x154);
  *(uint *)(this_01 + 0x24) = *(uint *)(this_01 + 0x24) | 0x3f;
  *(undefined8 *)(this_01 + 0x1c) = uVar9;
                    /* try { // try from 00545608 to 006456cb has its CatchHandler @ 00545148 */
  if (local_80 != (long *)0x0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


