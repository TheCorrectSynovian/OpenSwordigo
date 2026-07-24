/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0054e094
 * Function: Caver::PODLoader::CreateModel
 * Signature: undefined __cdecl CreateModel(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PODLoader::CreateModel() */

void Caver::PODLoader::CreateModel(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long *in_x0;
  Model *pMVar5;
  long *in_x8;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  Mesh *local_130;
  long *local_128;
  float local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  float local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pMVar5 = operator_new(0x30);
  puVar3 = PTR_DAT_007e5de8;
  *in_x8 = (long)pMVar5;
  *(undefined8 *)(pMVar5 + 0x20) = 0;
  *(undefined8 *)(pMVar5 + 0x28) = 0;
  *(undefined8 *)(pMVar5 + 0x10) = 0;
  *(undefined8 *)(pMVar5 + 0x18) = 0;
  *(undefined **)pMVar5 = puVar3 + 0x18;
  *(undefined8 *)(pMVar5 + 8) = 0;
  boost::detail::shared_count::shared_count<Caver::Model>((shared_count *)(in_x8 + 1),pMVar5);
  boost::detail::sp_enable_shared_from_this();
  lVar7 = *in_x0;
  iVar9 = *(int *)(lVar7 + 0x48) + -1;
  if (-1 < iVar9) {
    puVar11 = (undefined8 *)(*(long *)(lVar7 + 0x50) + (long)iVar9 * 0x60 + 8);
    do {
      iVar4 = strncmp((char *)*puVar11,"Bone",4);
      if (iVar4 == 0) {
                    /* try { // try from 0054e15c to 0064e167 has its CatchHandler @ 0054dbd8 */
        lVar7 = *in_x8;
                    /* catch() { ... } // from try @ 0054df34 with catch @ 0054e164 */
                    /* catch() { ... } // from try @ 0054e17c with catch @ 0054e168 */
        CreateSkeleton();
        plVar2 = plStack_98;
        if (plStack_98 != (long *)0x0) {
                    /* try { // try from 0054e178 to 0064e17b has its CatchHandler @ 0054e18c */
                    /* try { // try from 0054e17c to 0064e19f has its CatchHandler @ 0054e168 */
          plStack_98[1] = plStack_98[1] + 1;
        }
        plVar8 = *(long **)(lVar7 + 0x28);
        *(undefined8 *)(lVar7 + 0x20) = local_a0;
        *(long **)(lVar7 + 0x28) = plStack_98;
                    /* catch() { ... } // from try @ 0054e178 with catch @ 0054e18c */
        if ((plVar8 != (long *)0x0) && (lVar7 = plVar8[1], plVar8[1] = lVar7 + -1, lVar7 + -1 == 0))
        {
                    /* try { // try from 0054e1a0 to 0064e27b has its CatchHandler @ 0054e1a0
                       catch() { ... } // from try @ 0054e1a0 with catch @ 0054e1a0
                       catch() { ... } // from try @ 0054e280 with catch @ 0054e1a0
                       catch() { ... } // from try @ 0054e368 with catch @ 0054e1a0
                       catch() { ... } // from try @ 0054e54c with catch @ 0054e1a0
                       catch() { ... } // from try @ 0054e584 with catch @ 0054e1a0
                       catch() { ... } // from try @ 0054e6dc with catch @ 0054e1a0
                       catch() { ... } // from try @ 0054e858 with catch @ 0054e1a0
                       catch() { ... } // from try @ 0054e8c0 with catch @ 0054e1a0
                       catch() { ... } // from try @ 0054e928 with catch @ 0054e1a0
                       catch() { ... } // from try @ 0054e9b4 with catch @ 0054e1a0 */
          (**(code **)(*plVar8 + 0x10))(plVar8);
          lVar7 = plVar8[2];
          plVar8[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar8 + 0x18))(plVar8);
          }
        }
        if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0))
        {
          (**(code **)(*plVar2 + 0x10))(plVar2);
          lVar7 = plVar2[2];
          plVar2[2] = lVar7 + -1;
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar2 + 0x18))(plVar2);
          }
        }
        lVar7 = *in_x0;
        iVar9 = *(int *)(lVar7 + 0x4c);
        goto joined_r0x0054e218;
      }
      iVar9 = iVar9 + -1;
      puVar11 = puVar11 + -0xc;
    } while (-1 < iVar9);
  }
  iVar9 = *(int *)(lVar7 + 0x4c);
joined_r0x0054e218:
  if (iVar9 != 0) {
    lVar10 = 0;
    uVar6 = 0;
    do {
      lVar7 = *(long *)(lVar7 + 0x50);
      CreateMesh((int)in_x0);
      CPVRTModelPOD::GetWorldMatrix
                ((CPVRTModelPOD *)*in_x0,(PVRTMATRIXf *)&local_a0,(SPODNode *)(lVar7 + lVar10));
      local_120 = *(float *)((long)in_x0 + 0xac);
      uStack_114 = 0;
      local_11c = 0;
      uStack_100 = 0;
      local_108 = 0;
      uStack_ec = 0;
      local_f4 = 0;
      local_e4 = 0x3f800000;
      local_10c = local_120;
      local_f8 = local_120;
                    /* try { // try from 0054e27c to 0064e27f has its CatchHandler @ 0054e92c */
      C_Matrix4Mul(&local_120,(float *)&local_a0,(float *)&local_e0);
                    /* try { // try from 0054e280 to 0064e35b has its CatchHandler @ 0054e1a0 */
      plStack_98 = plStack_d8;
      local_a0 = local_e0;
      uStack_88 = uStack_c8;
      uStack_90 = uStack_d0;
      uStack_78 = uStack_b8;
      local_80 = local_c0;
      uStack_68 = uStack_a8;
      uStack_70 = uStack_b0;
      Mesh::TransformVertices(local_130,(Matrix4 *)&local_a0);
      Mesh::NormalizeNormals(local_130);
      lVar7 = *in_x8;
      puVar11 = *(undefined8 **)(lVar7 + 0x10);
      if (puVar11 == *(undefined8 **)(lVar7 + 0x18)) {
        std::vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>::
        _M_insert_aux((vector<boost::shared_ptr<Caver::Mesh>,std::allocator<boost::shared_ptr<Caver::Mesh>>>
                       *)(lVar7 + 8),puVar11,&local_130);
        plVar2 = local_128;
      }
      else {
        *puVar11 = local_130;
        puVar11[1] = local_128;
        if (local_128 != (long *)0x0) {
          local_128[1] = local_128[1] + 1;
        }
        *(undefined8 **)(lVar7 + 0x10) = puVar11 + 2;
        plVar2 = local_128;
      }
      local_128 = plVar2;
      if ((plVar2 != (long *)0x0) && (lVar7 = plVar2[1], plVar2[1] = lVar7 + -1, lVar7 + -1 == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar7 = plVar2[2];
        plVar2[2] = lVar7 + -1;
        if (lVar7 + -1 == 0) {
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar7 = *in_x0;
      uVar6 = uVar6 + 1;
      lVar10 = lVar10 + 0x60;
    } while (uVar6 < *(uint *)(lVar7 + 0x4c));
  }
                    /* try { // try from 0054e35c to 0064e367 has its CatchHandler @ 0054e8dc */
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0054e368 to 0064e3b7 has its CatchHandler @ 0054e1a0 */
  return;
}


