/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ba724
 * Function: Caver::GroundMeshGenerator::InsertCapForRoundHat
 * Signature: undefined __cdecl InsertCapForRoundHat(bool param_1, Vector2 * param_2, float param_3, float param_4, Vector3 * param_5, Vector3 * param_6, float param_7)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGenerator::InsertCapForRoundHat(bool, Caver::Vector2 const&, float, float,
   Caver::Vector3 const&, Caver::Vector3 const&, float) */

void Caver::GroundMeshGenerator::InsertCapForRoundHat
               (bool param_1,Vector2 *param_2,float param_3,float param_4,Vector3 *param_5,
               Vector3 *param_6,float param_7)

{
  MeshBuilder *this;
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  Vector2 *pVVar10;
  Vector3 *pVVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  float local_120 [2];
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  ulong local_fc;
  undefined8 uStack_f4;
  undefined4 local_ec;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c0;
  float local_b8;
  ulong local_b4;
  undefined8 uStack_ac;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined8 local_9c;
  undefined8 uStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  
  pVVar10 = (Vector2 *)(ulong)param_1;
  lVar9 = tpidr_el0;
  lVar14 = *(long *)(lVar9 + 0x28);
  InsertRoundHatVertices(pVVar10,param_3,param_4,param_5,param_6,param_7);
  iVar7 = *(int *)(pVVar10 + 0x30);
  lVar15 = *(long *)(pVVar10 + 0x38);
  this = (MeshBuilder *)(pVVar10 + 0x20);
  iVar13 = iVar7 + -1;
  puVar17 = (undefined8 *)(lVar15 + (long)iVar13 * 0x44);
  iVar8 = iVar7 + -3;
  puVar19 = (undefined8 *)(lVar15 + (long)iVar8 * 0x44);
  uVar22 = *puVar19;
  uStack_ac = *(undefined8 *)((long)puVar17 + 0x14);
  local_a4 = *(undefined4 *)((long)puVar17 + 0x1c);
  local_a0 = *(undefined1 *)(puVar17 + 4);
  local_9f = *(undefined1 *)((long)puVar17 + 0x21);
  local_9e = *(undefined1 *)((long)puVar17 + 0x22);
  local_9d = *(undefined1 *)((long)puVar17 + 0x23);
  uStack_94 = *(undefined8 *)((long)puVar17 + 0x2c);
  local_9c = *(undefined8 *)((long)puVar17 + 0x24);
  lVar20 = (long)iVar7 + -4;
  uStack_84 = *(undefined8 *)((long)puVar17 + 0x3c);
  local_8c = *(undefined8 *)((long)puVar17 + 0x34);
  puVar1 = (undefined8 *)(lVar15 + lVar20 * 0x44);
  uVar23 = *puVar1;
  local_b4 = *(ulong *)((long)puVar17 + 0xc) & 0xffffffff00000000;
  local_c0 = CONCAT44(((float)((ulong)*puVar17 >> 0x20) - (float)((ulong)uVar22 >> 0x20)) +
                      (float)((ulong)uVar23 >> 0x20),
                      ((float)*puVar17 - (float)uVar22) + (float)uVar23);
  local_b8 = (*(float *)(puVar17 + 1) - *(float *)(puVar19 + 1)) + *(float *)(puVar1 + 1);
  MeshBuilder::AddVertex(this,(Vertex *)&local_c0);
  lVar15 = *(long *)(pVVar10 + 0x38);
  puVar17 = (undefined8 *)(lVar15 + (long)(iVar7 + -2) * 0x44);
  puVar19 = (undefined8 *)(lVar15 + (long)iVar8 * 0x44);
  uVar22 = *puVar19;
  uStack_f4 = *(undefined8 *)((long)puVar17 + 0x14);
  puVar1 = (undefined8 *)(lVar15 + lVar20 * 0x44);
  local_ec = *(undefined4 *)((long)puVar17 + 0x1c);
  local_e8 = *(undefined1 *)(puVar17 + 4);
  local_e7 = *(undefined1 *)((long)puVar17 + 0x21);
  local_e6 = *(undefined1 *)((long)puVar17 + 0x22);
  local_e5 = *(undefined1 *)((long)puVar17 + 0x23);
  uStack_dc = *(undefined8 *)((long)puVar17 + 0x2c);
  local_e4 = *(undefined8 *)((long)puVar17 + 0x24);
  uStack_cc = *(undefined8 *)((long)puVar17 + 0x3c);
  local_d4 = *(undefined8 *)((long)puVar17 + 0x34);
  uVar23 = *puVar1;
  local_fc = *(ulong *)((long)puVar17 + 0xc) & 0xffffffff00000000;
  local_108 = CONCAT44(((float)((ulong)*puVar17 >> 0x20) - (float)((ulong)uVar22 >> 0x20)) +
                       (float)((ulong)uVar23 >> 0x20),
                       ((float)*puVar17 - (float)uVar22) + (float)uVar23);
  local_100 = *(float *)(puVar1 + 1) - (*(float *)(puVar17 + 1) - *(float *)(puVar19 + 1));
  MeshBuilder::AddVertex(this,(Vertex *)&local_108);
  pVVar11 = *(Vector3 **)(pVVar10 + 0x18);
  if ((pVVar11 != (Vector3 *)0x0) && (*(long *)pVVar11 != 0)) {
    lVar16 = *(long *)(pVVar10 + 0x38);
    lVar15 = 0;
    lVar18 = lVar20 * 0x44;
    fVar25 = *(float *)(lVar16 + lVar18 + 4);
    while( true ) {
      lVar16 = lVar16 + lVar18 + lVar15;
      uVar2 = *(undefined4 *)(lVar16 + 0x88);
      fVar4 = *(float *)(lVar16 + 0x8c);
      uVar24 = *(undefined8 *)(lVar16 + 0x90);
      uVar21 = *(undefined8 *)(lVar16 + 0xbc);
      local_120[0] = fVar25 - fVar4;
      uVar22 = *(undefined8 *)(lVar16 + 0x98);
      uVar23 = *(undefined8 *)(lVar16 + 0xa0);
      uVar3 = *(undefined4 *)(lVar16 + 0xc4);
      uVar5 = *(undefined4 *)(lVar16 + 200);
      uVar6 = *(undefined4 *)(lVar16 + 0xa8);
      if (((ulong)param_2 & 1) == 0) {
        local_120[0] = -local_120[0];
      }
      local_120[0] = local_120[0] + param_7;
      *(int *)((ulong)local_120 | 4) = (int)uVar24;
      local_118 = 0;
      TextureMapping::TexCoordForPosition(pVVar11);
      lVar16 = *(long *)(pVVar10 + 0x38) + lVar18 + lVar15;
      *(undefined4 *)(lVar16 + 0x88) = uVar2;
      *(float *)(lVar16 + 0x8c) = fVar4;
      *(undefined8 *)(lVar16 + 0xac) = local_110;
      *(undefined8 *)(lVar16 + 0x98) = uVar22;
      *(undefined8 *)(lVar16 + 0xa0) = uVar23;
      *(undefined8 *)(lVar16 + 0x90) = uVar24;
      *(undefined4 *)(lVar16 + 0xa8) = uVar6;
      *(undefined4 *)(lVar16 + 0xb4) = 0;
      *(undefined4 *)(lVar16 + 0xb8) = 0;
      *(undefined8 *)(lVar16 + 0xbc) = uVar21;
      *(undefined4 *)(lVar16 + 0xc4) = uVar3;
      *(undefined4 *)(lVar16 + 200) = uVar5;
      if (lVar15 == 0xcc) break;
      lVar16 = *(long *)(pVVar10 + 0x38);
      pVVar11 = *(Vector3 **)(pVVar10 + 0x18);
      lVar15 = lVar15 + 0x44;
    }
  }
  iVar12 = (int)lVar20;
  if (((ulong)param_2 & 1) == 0) {
    MeshBuilder::AddFace(this,iVar12,iVar7,iVar7 + 1);
    MeshBuilder::AddFace(this,iVar12,iVar13,iVar7);
    MeshBuilder::AddFace(this,iVar12,iVar8,iVar13);
    iVar12 = iVar8;
  }
  else {
    MeshBuilder::AddFace(this,iVar12,iVar7 + 1,iVar7);
    MeshBuilder::AddFace(this,iVar12,iVar7,iVar13);
    MeshBuilder::AddFace(this,iVar12,iVar13,iVar8);
    iVar12 = iVar13;
    iVar13 = iVar8;
  }
  MeshBuilder::AddFace(this,iVar12,iVar7 + -2,iVar13);
  if (*(long *)(lVar9 + 0x28) == lVar14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


