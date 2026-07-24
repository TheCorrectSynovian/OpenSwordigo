/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b95e0
 * Function: Caver::GroundMeshGenerator::GenerateFrontMesh
 * Signature: undefined __thiscall GenerateFrontMesh(GroundMeshGenerator * this, int param_1, Vector2 * param_2, float * param_3, TextureMapping * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGenerator::GenerateFrontMesh(int, Caver::Vector2 const*, float const*,
   Caver::TextureMapping const*) */

void __thiscall
Caver::GroundMeshGenerator::GenerateFrontMesh
          (GroundMeshGenerator *this,int param_1,Vector2 *param_2,float *param_3,
          TextureMapping *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  ushort *puVar8;
  Mesh *pMVar9;
  Vector2 *pVVar10;
  long *in_x8;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ushort *puVar18;
  undefined8 *puVar19;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  long local_68;
  
  pVVar10 = (Vector2 *)(ulong)(uint)param_1;
  iVar6 = (int)this;
  lVar5 = tpidr_el0;
  iVar3 = iVar6 + -2;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar15 = (ulong)(iVar3 * 3);
  uVar16 = uVar15 * 2;
  if (CARRY8(uVar15,uVar15)) {
    uVar16 = 0xffffffffffffffff;
  }
  puVar8 = operator_new__(uVar16);
  TriangulatePolygon(pVVar10,iVar6,puVar8);
  pMVar9 = operator_new(0x160);
  Mesh::Mesh(pMVar9);
  *in_x8 = (long)pMVar9;
  boost::detail::shared_count::shared_count<Caver::Mesh>((shared_count *)(in_x8 + 1),pMVar9);
  boost::detail::sp_enable_shared_from_this();
  uVar7 = DAT_00689dd8;
  lVar11 = *in_x8;
  *(undefined4 *)(lVar11 + 0x28) = 0;
  *(undefined8 *)(lVar11 + 0x30) = 0;
  *(undefined8 *)(lVar11 + 0x20) = uVar7;
  lVar11 = *in_x8;
  *(undefined8 *)(lVar11 + 0x38) = uVar7;
  *(undefined4 *)(lVar11 + 0x40) = 0;
  *(undefined8 *)(lVar11 + 0x48) = 0;
  if ((param_3 != (float *)0x0) && (lVar11 = *(long *)param_3, lVar11 != 0)) {
    pMVar9 = (Mesh *)*in_x8;
    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
    plVar12 = *(long **)(pMVar9 + 0xd8);
    *(long *)(pMVar9 + 0xd8) = lVar11;
    if ((plVar12 != (long *)0x0) &&
       (iVar4 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar4, iVar4 == 0)) {
      (**(code **)(*plVar12 + 8))(plVar12);
      pMVar9 = (Mesh *)*in_x8;
    }
    Mesh::SetNumTexCoordSets(pMVar9,1);
    puVar13 = *(undefined8 **)(*in_x8 + 0x50);
    *puVar13 = DAT_00689de0;
    *(undefined4 *)(puVar13 + 1) = 0;
    puVar13[2] = 0;
  }
  Mesh::CreateInterleavedData((Mesh *)*in_x8,iVar3 * 3,iVar3,0);
  lVar11 = *in_x8;
  puVar13 = *(undefined8 **)(lVar11 + 0x30);
  puVar19 = *(undefined8 **)(lVar11 + 0x48);
  if (*(int *)(lVar11 + 0x140) < 1) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    puVar17 = *(undefined8 **)(*(long *)(lVar11 + 0x50) + 0x10);
  }
  if (2 < iVar6) {
    lVar11 = 0;
    puVar18 = puVar8 + 2;
    do {
      local_90 = *(float *)(pVVar10 + (ulong)puVar18[-2] * 8);
      local_88 = *(float *)(param_2 + (ulong)puVar18[-2] * 4);
      fStack_8c = *(float *)(pVVar10 + (ulong)puVar18[-2] * 8 + 4);
      local_84 = *(float *)(pVVar10 + (ulong)puVar18[-1] * 8);
      local_7c = *(float *)(param_2 + (ulong)puVar18[-1] * 4);
      fStack_80 = *(float *)(pVVar10 + (ulong)puVar18[-1] * 8 + 4);
      local_78 = *(float *)(pVVar10 + (ulong)*puVar18 * 8);
      local_70 = *(float *)(param_2 + (ulong)*puVar18 * 4);
      fStack_74 = *(float *)(pVVar10 + (ulong)*puVar18 * 8 + 4);
      fStack_9c = (local_7c - local_88) * (local_78 - local_84) -
                  (local_70 - local_7c) * (local_84 - local_90);
      local_a0 = (local_70 - local_7c) * (fStack_80 - fStack_8c) -
                 (local_7c - local_88) * (fStack_74 - fStack_80);
      local_98 = (local_84 - local_90) * (fStack_74 - fStack_80) -
                 (fStack_80 - fStack_8c) * (local_78 - local_84);
      Vector3::Normalize((Vector3 *)&local_a0);
      lVar14 = *in_x8;
      uVar16 = (ulong)*(uint *)(lVar14 + 0x28);
      *puVar13 = CONCAT44(fStack_8c,local_90);
      puVar1 = (undefined8 *)((long)puVar13 + uVar16);
      *(float *)(puVar13 + 1) = local_88;
      *puVar1 = CONCAT44(fStack_80,local_84);
      *(float *)(puVar1 + 1) = local_7c;
      *(undefined8 *)((long)puVar1 + uVar16) = CONCAT44(fStack_74,local_78);
      *(float *)((undefined8 *)((long)puVar1 + uVar16) + 1) = local_70;
      uVar15 = (ulong)*(uint *)(lVar14 + 0x40);
      *puVar19 = CONCAT44(fStack_9c,local_a0);
      puVar1 = (undefined8 *)((long)puVar19 + uVar15);
      *(float *)(puVar19 + 1) = local_98;
      *puVar1 = CONCAT44(fStack_9c,local_a0);
      *(float *)(puVar1 + 1) = local_98;
      *(undefined8 *)((long)puVar1 + uVar15) = CONCAT44(fStack_9c,local_a0);
      *(float *)((undefined8 *)((long)puVar1 + uVar15) + 1) = local_98;
      if (puVar17 != (undefined8 *)0x0) {
        TextureMapping::TexCoordForPosition((Vector3 *)param_3);
        *puVar17 = local_a8;
        uVar2 = *(uint *)(*(long *)(*in_x8 + 0x50) + 8);
        TextureMapping::TexCoordForPosition((Vector3 *)param_3);
        puVar17 = (undefined8 *)((long)puVar17 + (ulong)uVar2);
        *puVar17 = local_a8;
        uVar2 = *(uint *)(*(long *)(*in_x8 + 0x50) + 8);
        TextureMapping::TexCoordForPosition((Vector3 *)param_3);
        puVar17 = (undefined8 *)((long)puVar17 + (ulong)uVar2);
        *puVar17 = local_a8;
        puVar17 = (undefined8 *)((long)puVar17 + (ulong)*(uint *)(*(long *)(*in_x8 + 0x50) + 8));
      }
      puVar13 = (undefined8 *)((long)puVar13 + uVar16 * 3);
      puVar19 = (undefined8 *)((long)puVar19 + uVar15 * 3);
      lVar11 = lVar11 + 1;
      puVar18 = puVar18 + 3;
    } while (lVar11 < iVar3);
  }
  operator_delete__(puVar8);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


