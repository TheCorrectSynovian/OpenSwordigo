/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bb010
 * Function: Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat
 * Signature: undefined __cdecl GenerateSurfaceMeshWithRoundHat(float param_1, float param_2, float param_3, float param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat(float, float, float, float) */

void Caver::GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat
               (float param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  MeshBuilder *this;
  float *pfVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  GroundMeshGenerator *in_x0;
  ulong uVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 *in_x8;
  int *piVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 local_190;
  float local_178;
  float fStack_174;
  undefined8 local_170;
  float local_168;
  undefined8 local_160;
  float local_158;
  undefined4 uStack_154;
  float local_150;
  undefined8 local_148;
  float local_140;
  float local_138 [4];
  float local_128 [4];
  float local_118;
  float fStack_114;
  float local_110;
  float local_108;
  float local_104;
  undefined4 local_100;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  *(float *)(in_x0 + 0x78) = param_2;
  *(float *)(in_x0 + 0x7c) = param_3;
  *(float *)(in_x0 + 0x80) = param_4;
  InitializeMeshBuilder(in_x0,true);
  piVar10 = *(int **)in_x0;
  iVar12 = *piVar10;
  if (0 < iVar12) {
    iVar17 = 0;
    bVar6 = false;
    iVar13 = 0;
    this = (MeshBuilder *)(in_x0 + 0x20);
    fVar23 = 0.0;
    bVar9 = true;
    uVar24 = NEON_fmov(0x40400000,4);
    do {
      if (iVar13 < 1) {
        iVar14 = iVar12 + -1;
        if (*(char *)((long)piVar10 + 0x21) == '\0') {
          iVar14 = -1;
        }
      }
      else {
        iVar14 = iVar13 + -1;
      }
      iVar2 = iVar13 + 1;
      iVar4 = iVar2;
      if (iVar12 <= iVar2) {
        iVar4 = *(byte *)((long)piVar10 + 0x21) - 1;
      }
      lVar11 = *(long *)(piVar10 + 2);
      local_190 = *(undefined8 *)(lVar11 + (long)iVar14 * 8);
      local_b8 = *(undefined8 *)(lVar11 + (long)iVar13 * 8);
      pfVar1 = (float *)(lVar11 + (long)iVar4 * 8);
      fVar20 = (float)((ulong)local_190 >> 0x20);
      fVar21 = (float)local_b8;
      fVar18 = (float)local_190;
      fVar22 = (float)((ulong)local_b8 >> 0x20);
      local_c8 = fVar22 - fVar20;
      fVar25 = -(fVar21 - fVar18);
      local_d8 = pfVar1[1] - fVar22;
      fVar26 = -(*pfVar1 - fVar21);
      local_c0 = 0.0;
      local_d0 = 0.0;
      fStack_d4 = fVar26;
      fStack_c4 = fVar25;
      local_b0 = local_190;
      if (bVar9) {
        local_e0 = 0;
        local_e8 = local_c8;
        local_e4 = fVar25;
        Vector3::Normalize((Vector3 *)&local_e8);
        if (local_e4 < param_1) {
          local_f8 = CONCAT44(fStack_d4,local_d8);
          local_f0 = local_d0;
          Vector3::Normalize((Vector3 *)&local_f8);
          if (param_1 <= local_f8._4_4_) goto LAB_003bb4d0;
        }
        bVar9 = true;
      }
      else {
        iVar17 = iVar17 + 1;
        if (bVar6) {
LAB_003bb1bc:
          local_118 = local_c8 + local_d8;
          fStack_114 = fStack_c4 + fStack_d4;
          local_110 = local_c0 + local_d0;
          lVar15 = (long)iVar14;
          lVar16 = (long)iVar13;
          Vector3::Normalize((Vector3 *)&local_118);
          Vector3::Normalize((Vector3 *)&local_c8);
          Vector3::Normalize((Vector3 *)&local_d8);
          lVar11 = *(long *)(in_x0 + 8);
          local_150 = fVar26 - (fVar21 - fVar18);
          fVar19 = *(float *)(lVar11 + lVar16 * 4);
          local_128[1] = 0.0;
          local_158 = fVar19 - *(float *)(lVar11 + (long)iVar4 * 4);
          local_128[0] = -(*(float *)(lVar11 + lVar15 * 4) - fVar19);
          local_138[0] = -local_158;
          local_158 = local_128[0] - local_158;
          local_138[1] = 0.0;
          uStack_154 = 0;
          local_138[2] = fVar26;
          local_128[2] = fVar25;
          Vector3::Normalize((Vector3 *)&local_158);
          local_148 = CONCAT44(uStack_154,local_158);
          local_140 = local_150;
          Vector3::Normalize((Vector3 *)local_128);
          Vector3::Normalize((Vector3 *)local_138);
          fVar25 = (float)((ulong)uVar24 >> 0x20);
          if (!bVar6) {
            uVar7 = Polygon::VertexAtIndexIsConvexCCW(*(Polygon **)in_x0,iVar14);
            if ((uVar7 & 1) != 0) {
              local_160 = CONCAT44(fVar20 - fVar22,fVar18 - fVar21);
              Vector2::Normalize((Vector2 *)&local_160);
              fVar20 = (float)((ulong)local_160 >> 0x20) * fVar25 + fVar20;
              local_190 = CONCAT44(fVar20,(float)local_160 * (float)uVar24 + fVar18);
              local_b0 = local_190;
            }
            lVar11 = lVar15 * 4;
            InsertCapForRoundHat
                      (SUB81(in_x0,0),(Vector2 *)0x0,*(float *)(*(long *)(in_x0 + 0x10) + lVar11),
                       *(float *)(*(long *)(in_x0 + 8) + lVar11),(Vector3 *)&local_b0,
                       (Vector3 *)&local_c8,fVar23);
            InsertRoundHatVertices
                      ((Vector2 *)in_x0,*(float *)(*(long *)(in_x0 + 0x10) + lVar11),
                       *(float *)(*(long *)(in_x0 + 8) + lVar11),(Vector3 *)&local_b0,
                       (Vector3 *)&local_c8,fVar23);
          }
          if ((*(long **)(in_x0 + 0x18) != (long *)0x0) && (**(long **)(in_x0 + 0x18) != 0)) {
            pfVar1 = (float *)(*(long *)(*(long *)in_x0 + 8) + lVar16 * 8);
            pfVar3 = (float *)(*(long *)(*(long *)in_x0 + 8) + lVar15 * 8);
            fVar18 = *pfVar1 - *pfVar3;
            fVar26 = pfVar1[1] - pfVar3[1];
            fVar26 = fVar18 * fVar18 + fVar26 * fVar26;
            fVar18 = SQRT(fVar26);
            if (NAN(fVar18)) {
              fVar18 = sqrtf(fVar26);
            }
            fVar23 = fVar23 + fVar18;
          }
          local_170 = CONCAT44(fStack_d4,local_d8);
          local_168 = local_d0;
          Vector3::Normalize((Vector3 *)&local_170);
          if (param_1 <= local_170._4_4_) {
            InsertRoundHatVertices
                      ((Vector2 *)in_x0,*(float *)(*(long *)(in_x0 + 0x10) + lVar16 * 4),
                       *(float *)(*(long *)(in_x0 + 8) + lVar16 * 4),(Vector3 *)&local_b8,
                       (Vector3 *)&local_118,fVar23);
            bVar6 = true;
          }
          else {
            uVar7 = Polygon::VertexAtIndexIsConvexCCW(*(Polygon **)in_x0,iVar13);
            if ((uVar7 & 1) != 0) {
              local_178 = fVar21 - (float)local_190;
              fStack_174 = fVar22 - fVar20;
              Vector2::Normalize((Vector2 *)&local_178);
              local_b8 = CONCAT44(fStack_174 * fVar25 + fVar22,local_178 * (float)uVar24 + fVar21);
            }
            InsertRoundHatVertices
                      ((Vector2 *)in_x0,*(float *)(*(long *)(in_x0 + 0x10) + lVar16 * 4),
                       *(float *)(*(long *)(in_x0 + 8) + lVar16 * 4),(Vector3 *)&local_b8,
                       (Vector3 *)&local_c8,fVar23);
            bVar6 = false;
          }
          iVar12 = *(int *)(in_x0 + 0x30);
          iVar13 = iVar12 + -3;
          MeshBuilder::AddFace(this,iVar12 + -8,iVar12 + -4,iVar13);
          iVar14 = iVar12 + -7;
          MeshBuilder::AddFace(this,iVar14,iVar12 + -8,iVar13);
          iVar4 = iVar12 + -2;
          MeshBuilder::AddFace(this,iVar14,iVar13,iVar4);
          iVar13 = iVar12 + -6;
          MeshBuilder::AddFace(this,iVar13,iVar14,iVar4);
          MeshBuilder::AddFace(this,iVar13,iVar4,iVar12 + -1);
          MeshBuilder::AddFace(this,iVar12 + -5,iVar13,iVar12 + -1);
          if (!bVar6) {
            InsertCapForRoundHat
                      (SUB81(in_x0,0),(Vector2 *)0x1,
                       *(float *)(*(long *)(in_x0 + 0x10) + lVar16 * 4),
                       *(float *)(*(long *)(in_x0 + 8) + lVar16 * 4),(Vector3 *)&local_b8,
                       (Vector3 *)&local_c8,fVar23);
          }
LAB_003bb4d0:
          bVar9 = false;
        }
        else {
          local_100 = 0;
          local_108 = local_c8;
          local_104 = fVar25;
          Vector3::Normalize((Vector3 *)&local_108);
          bVar9 = false;
          if (param_1 <= local_104) goto LAB_003bb1bc;
          bVar6 = false;
        }
      }
      piVar10 = *(int **)in_x0;
      iVar12 = *piVar10;
      iVar13 = 0;
      if (iVar12 != 0) {
        iVar13 = iVar2 / iVar12;
      }
      iVar13 = iVar2 - iVar13 * iVar12;
    } while (iVar17 < iVar12);
  }
  puVar8 = (undefined8 *)MeshBuilder::GenerateMesh((MeshBuilder *)(in_x0 + 0x20));
  *in_x8 = *puVar8;
  lVar11 = puVar8[1];
  in_x8[1] = lVar11;
  if (lVar11 != 0) {
    *(long *)(lVar11 + 8) = *(long *)(lVar11 + 8) + 1;
  }
  if (*(long *)(lVar5 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


