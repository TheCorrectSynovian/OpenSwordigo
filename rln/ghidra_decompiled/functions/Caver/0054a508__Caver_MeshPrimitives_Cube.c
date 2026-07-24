/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054a508
 * Function: Caver::MeshPrimitives::Cube
 * Signature: undefined __cdecl Cube(bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MeshPrimitives::Cube(bool) */

void Caver::MeshPrimitives::Cube(bool param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  Mesh *pMVar8;
  undefined1 in_w2;
  size_t sVar9;
  undefined8 *in_x8;
  long lVar10;
  void *pvVar11;
  size_t __n;
  long *plVar12;
  void *__dest;
  undefined1 auVar13 [16];
  undefined8 local_1b0;
  long *local_1a8;
  Mesh *local_1a0;
  long *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)PTR_staticCube__007e6248;
  if (*(long *)PTR_staticCube__007e6248 == 0) {
    memcpy(&local_190,&DAT_00694fc4,0x120);
    local_190 = CONCAT44((float)((ulong)local_190 >> 0x20) * 0.5,(float)local_190 * 0.5);
    uStack_188 = CONCAT44((float)((ulong)uStack_188 >> 0x20) * 0.5,(float)uStack_188 * 0.5);
                    /* catch() { ... } // from try @ 00549fa8 with catch @ 0054a598 */
    local_180 = CONCAT44((float)((ulong)local_180 >> 0x20) * 0.5,(float)local_180 * 0.5);
    uStack_178 = CONCAT44((float)((ulong)uStack_178 >> 0x20) * 0.5,(float)uStack_178 * 0.5);
                    /* catch() { ... } // from try @ 00549fcc with catch @ 0054a59c */
    local_170 = CONCAT44((float)((ulong)local_170 >> 0x20) * 0.5,(float)local_170 * 0.5);
    uStack_168 = CONCAT44((float)((ulong)uStack_168 >> 0x20) * 0.5,(float)uStack_168 * 0.5);
    local_160 = CONCAT44((float)((ulong)local_160 >> 0x20) * 0.5,(float)local_160 * 0.5);
    uStack_158 = CONCAT44((float)((ulong)uStack_158 >> 0x20) * 0.5,(float)uStack_158 * 0.5);
    local_150 = CONCAT44((float)((ulong)local_150 >> 0x20) * 0.5,(float)local_150 * 0.5);
    uStack_148 = CONCAT44((float)((ulong)uStack_148 >> 0x20) * 0.5,(float)uStack_148 * 0.5);
                    /* try { // try from 0054a5c0 to 0064a5c7 has its CatchHandler @ 0054a5cc */
                    /* try { // try from 0054a5c8 to 0064a6bb has its CatchHandler @ 00549d84 */
    local_140 = CONCAT44((float)((ulong)local_140 >> 0x20) * 0.5,(float)local_140 * 0.5);
    uStack_138 = CONCAT44((float)((ulong)uStack_138 >> 0x20) * 0.5,(float)uStack_138 * 0.5);
                    /* catch() { ... } // from try @ 0054a5c0 with catch @ 0054a5cc */
                    /* catch() { ... } // from try @ 00549fbc with catch @ 0054a5d0
                       catch() { ... } // from try @ 0054a024 with catch @ 0054a5d0 */
    local_130 = CONCAT44((float)((ulong)local_130 >> 0x20) * 0.5,(float)local_130 * 0.5);
    uStack_128 = CONCAT44((float)((ulong)uStack_128 >> 0x20) * 0.5,(float)uStack_128 * 0.5);
    local_120 = CONCAT44((float)((ulong)local_120 >> 0x20) * 0.5,(float)local_120 * 0.5);
    uStack_118 = CONCAT44((float)((ulong)uStack_118 >> 0x20) * 0.5,(float)uStack_118 * 0.5);
    local_110 = CONCAT44((float)((ulong)local_110 >> 0x20) * 0.5,(float)local_110 * 0.5);
    uStack_108 = CONCAT44((float)((ulong)uStack_108 >> 0x20) * 0.5,(float)uStack_108 * 0.5);
    local_100 = CONCAT44((float)((ulong)local_100 >> 0x20) * 0.5,(float)local_100 * 0.5);
    uStack_f8 = CONCAT44((float)((ulong)uStack_f8 >> 0x20) * 0.5,(float)uStack_f8 * 0.5);
    local_f0 = CONCAT44((float)((ulong)local_f0 >> 0x20) * 0.5,(float)local_f0 * 0.5);
    uStack_e8 = CONCAT44((float)((ulong)uStack_e8 >> 0x20) * 0.5,(float)uStack_e8 * 0.5);
    local_e0 = CONCAT44((float)((ulong)local_e0 >> 0x20) * 0.5,(float)local_e0 * 0.5);
    uStack_d8 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) * 0.5,(float)uStack_d8 * 0.5);
    local_d0 = CONCAT44((float)((ulong)local_d0 >> 0x20) * 0.5,(float)local_d0 * 0.5);
    uStack_c8 = CONCAT44((float)((ulong)uStack_c8 >> 0x20) * 0.5,(float)uStack_c8 * 0.5);
    local_c0 = CONCAT44((float)((ulong)local_c0 >> 0x20) * 0.5,(float)local_c0 * 0.5);
    uStack_b8 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) * 0.5,(float)uStack_b8 * 0.5);
    local_b0 = CONCAT44((float)((ulong)local_b0 >> 0x20) * 0.5,(float)local_b0 * 0.5);
    uStack_a8 = CONCAT44((float)((ulong)uStack_a8 >> 0x20) * 0.5,(float)uStack_a8 * 0.5);
                    /* catch() { ... } // from try @ 00549dd4 with catch @ 0054a63c */
    local_a0 = CONCAT44((float)((ulong)local_a0 >> 0x20) * 0.5,(float)local_a0 * 0.5);
    uStack_98 = CONCAT44((float)((ulong)uStack_98 >> 0x20) * 0.5,(float)uStack_98 * 0.5);
                    /* catch() { ... } // from try @ 00549de8 with catch @ 0054a648 */
    local_90 = CONCAT44((float)((ulong)local_90 >> 0x20) * 0.5,(float)local_90 * 0.5);
    uStack_88 = CONCAT44((float)((ulong)uStack_88 >> 0x20) * 0.5,(float)uStack_88 * 0.5);
    local_80 = CONCAT44((float)((ulong)local_80 >> 0x20) * 0.5,(float)local_80 * 0.5);
    uStack_78 = CONCAT44((float)((ulong)uStack_78 >> 0x20) * 0.5,(float)uStack_78 * 0.5);
    pMVar8 = operator_new(0x160);
    Mesh::Mesh(pMVar8);
    local_1a0 = pMVar8;
    boost::detail::shared_count::shared_count<Caver::Mesh>((shared_count *)&local_198,pMVar8);
    boost::detail::sp_enable_shared_from_this(&local_1a0,pMVar8,pMVar8);
    pMVar8 = local_1a0;
    uVar4 = _UNK_00694f98;
    uVar3 = _DAT_00694f90;
    auVar13 = NEON_fmov(0x3f800000,4);
    *(long *)(local_1a0 + 0xa8) = auVar13._8_8_;
    *(long *)(local_1a0 + 0xa0) = auVar13._0_8_;
    *(long *)(local_1a0 + 0xb8) = auVar13._8_8_;
    *(long *)(local_1a0 + 0xb0) = auVar13._0_8_;
    *(undefined8 *)(local_1a0 + 0xc) = uVar4;
    *(undefined8 *)(local_1a0 + 4) = uVar3;
    iVar5 = MeshData::valueSize((MeshData *)(local_1a0 + 8));
    Mesh::AllocIndexBuffer(pMVar8,iVar5 * 0x24);
    pvVar11 = *(void **)(local_1a0 + 0x120);
    *(void **)(local_1a0 + 0x18) = pvVar11;
    iVar5 = MeshData::valueSize((MeshData *)(local_1a0 + 8));
    memcpy(pvVar11,&DAT_00694fa0,(long)(iVar5 * 0x24));
    uVar3 = DAT_00689dd8;
    *(undefined4 *)local_1a0 = 0x18;
    *(undefined8 *)(local_1a0 + 0x20) = uVar3;
    *(undefined8 *)(local_1a0 + 0x38) = uVar3;
    iVar6 = MeshData::valueSize((MeshData *)(local_1a0 + 0x20));
    iVar5 = *(int *)(local_1a0 + 0x3c);
    iVar7 = MeshData::valueSize((MeshData *)(local_1a0 + 0x38));
    iVar6 = iVar6 * 3;
    __n = (long)iVar7 * (long)iVar5;
    iVar7 = (int)__n + iVar6;
    Mesh::AllocVertexBuffer(local_1a0,iVar7 * 0x18);
    iVar5 = 0;
    __dest = *(void **)(local_1a0 + 0x110);
    *(int *)(local_1a0 + 0x28) = iVar7;
    *(int *)(local_1a0 + 0x40) = iVar7;
    pvVar11 = (void *)((long)__dest + (long)iVar6);
    *(void **)(local_1a0 + 0x30) = __dest;
    *(void **)(local_1a0 + 0x48) = pvVar11;
    do {
                    /* try { // try from 0054a77c to 0064a7af has its CatchHandler @ 0054a77c
                       catch() { ... } // from try @ 0054a77c with catch @ 0054a77c
                       catch() { ... } // from try @ 0054a7c4 with catch @ 0054a77c */
      memcpy(__dest,(void *)((long)&local_190 + (long)(*(int *)(local_1a0 + 0x24) * iVar5) * 4),
             (long)iVar6);
      __dest = (void *)((long)__dest + (ulong)*(uint *)(local_1a0 + 0x28));
      sVar9 = __n;
                    /* try { // try from 0054a7b0 to 0064a7c3 has its CatchHandler @ 0054a874 */
      memcpy(pvVar11,&DAT_006950e4 + (long)(*(int *)(local_1a0 + 0x3c) * iVar5) * 4,__n);
      in_w2 = (undefined1)sVar9;
      iVar5 = iVar5 + 1;
                    /* try { // try from 0054a7c4 to 0064a8e3 has its CatchHandler @ 0054a77c */
      pvVar11 = (void *)((long)pvVar11 + (ulong)*(uint *)(local_1a0 + 0x40));
    } while (iVar5 != 0x18);
    MeshInstance::InstanceWithMesh((MeshInstance *)&local_1a0,(shared_ptr *)0x1,(bool)in_w2);
    puVar2 = (undefined8 *)PTR_staticCube__007e6248;
    if (local_1a8 != (long *)0x0) {
      local_1a8[1] = local_1a8[1] + 1;
    }
    plVar12 = *(long **)((long)puVar2 + 8);
    *puVar2 = local_1b0;
    *(long **)((long)puVar2 + 8) = local_1a8;
    if ((plVar12 != (long *)0x0) &&
       (lVar10 = plVar12[1], plVar12[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      lVar10 = plVar12[2];
      plVar12[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
      }
    }
    if ((local_1a8 != (long *)0x0) &&
       (lVar10 = local_1a8[1], local_1a8[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*local_1a8 + 0x10))(local_1a8);
      lVar10 = local_1a8[2];
                    /* catch() { ... } // from try @ 0054a7b0 with catch @ 0054a874 */
      local_1a8[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_1a8 + 0x18))(local_1a8);
      }
    }
    if ((local_198 != (long *)0x0) &&
       (lVar10 = local_198[1], local_198[1] = lVar10 + -1, lVar10 + -1 == 0)) {
      (**(code **)(*local_198 + 0x10))(local_198);
      lVar10 = local_198[2];
      local_198[2] = lVar10 + -1;
      if (lVar10 + -1 == 0) {
        (**(code **)(*local_198 + 0x18))(local_198);
      }
    }
  }
  if (param_1) {
    lVar10 = puVar2[1];
    *in_x8 = *puVar2;
    in_x8[1] = lVar10;
    if (lVar10 != 0) {
      *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
    }
  }
  else {
                    /* catch() { ... } // from try @ 0054a910 with catch @ 0054a8e4
                       catch() { ... } // from try @ 0054a9c8 with catch @ 0054a8e4 */
    MeshInstance::InstanceWithMesh((MeshInstance *)*puVar2,(shared_ptr *)0x0,(bool)in_w2);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 0054a908 to 0064a90f has its CatchHandler @ 0054a97c */
                    /* try { // try from 0054a910 to 0064a99f has its CatchHandler @ 0054a8e4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


