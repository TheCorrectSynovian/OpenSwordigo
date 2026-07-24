/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bac60
 * Function: Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps
 * Signature: undefined __cdecl GeneratePlainSurfaceWithHatGaps(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float) */

void Caver::GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(float param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  GroundMeshGenerator *in_x0;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 *in_x8;
  int *piVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  Vector2 aVStack_120 [8];
  Vector2 aVStack_118 [8];
  undefined8 local_110;
  float local_108;
  Vector2 aVStack_100 [8];
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  float local_d0;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  InitializeMeshBuilder(in_x0,true);
  piVar9 = *(int **)in_x0;
  iVar11 = *piVar9;
  if (0 < iVar11) {
    iVar14 = 0;
    bVar6 = false;
    iVar12 = 0;
    fVar17 = 0.0;
    bVar8 = true;
    do {
      if (iVar12 < 1) {
        iVar13 = iVar11 + -1;
        if (*(char *)((long)piVar9 + 0x21) == '\0') {
          iVar13 = -1;
        }
      }
      else {
        iVar13 = iVar12 + -1;
      }
      iVar3 = iVar12 + 1;
      iVar4 = iVar3;
      if (iVar11 <= iVar3) {
        iVar4 = *(byte *)((long)piVar9 + 0x21) - 1;
      }
      lVar10 = *(long *)(piVar9 + 2);
      pfVar1 = (float *)(lVar10 + (long)iVar13 * 8);
      local_90 = *pfVar1;
      fStack_8c = pfVar1[1];
      pfVar1 = (float *)(lVar10 + (long)iVar12 * 8);
      pfVar2 = (float *)(lVar10 + (long)iVar4 * 8);
      local_98 = *pfVar1;
      fStack_94 = pfVar1[1];
      fStack_a4 = -(local_98 - local_90);
      local_a8 = fStack_94 - fStack_8c;
      local_b8 = pfVar2[1] - fStack_94;
      fStack_b4 = -(*pfVar2 - local_98);
      local_a0 = 0.0;
      local_b0 = 0.0;
      if (bVar8) {
        local_c0 = 0;
        local_c8 = local_a8;
        local_c4 = fStack_a4;
        Vector3::Normalize((Vector3 *)&local_c8);
        if (param_1 <= local_c4) {
          local_d8 = CONCAT44(fStack_b4,local_b8);
          local_d0 = local_b0;
          Vector3::Normalize((Vector3 *)&local_d8);
          if (local_d8._4_4_ < param_1) goto LAB_003baf88;
        }
        bVar8 = true;
      }
      else {
        iVar14 = iVar14 + 1;
        if (bVar6) {
LAB_003bae00:
          local_f8 = local_a8 + local_b8;
          fStack_f4 = fStack_a4 + fStack_b4;
          local_f0 = local_a0 + local_b0;
          Vector3::Normalize((Vector3 *)&local_f8);
          Vector3::Normalize((Vector3 *)&local_a8);
          Vector3::Normalize((Vector3 *)&local_b8);
          if (!bVar6) {
            lVar10 = (long)iVar13 * 4;
            uVar18 = *(undefined4 *)(*(long *)(in_x0 + 0x10) + lVar10);
            uVar19 = *(undefined4 *)(*(long *)(in_x0 + 8) + lVar10);
            Vector2::Vector2(aVStack_100,(Vector3 *)&local_a8);
            InsertPlainSurfaceVertices(uVar18,uVar19,fVar17);
          }
          if ((*(long **)(in_x0 + 0x18) != (long *)0x0) && (**(long **)(in_x0 + 0x18) != 0)) {
            pfVar1 = (float *)(*(long *)(*(long *)in_x0 + 8) + (long)iVar12 * 8);
            pfVar2 = (float *)(*(long *)(*(long *)in_x0 + 8) + (long)iVar13 * 8);
            fVar15 = *pfVar1 - *pfVar2;
            fVar16 = pfVar1[1] - pfVar2[1];
            fVar16 = fVar15 * fVar15 + fVar16 * fVar16;
            fVar15 = SQRT(fVar16);
            if (NAN(fVar15)) {
              fVar15 = sqrtf(fVar16);
            }
            fVar17 = fVar17 + fVar15;
          }
          local_110 = CONCAT44(fStack_b4,local_b8);
          local_108 = local_b0;
          Vector3::Normalize((Vector3 *)&local_110);
          lVar10 = (long)iVar12 * 4;
          uVar19 = *(undefined4 *)(*(long *)(in_x0 + 0x10) + lVar10);
          uVar18 = *(undefined4 *)(*(long *)(in_x0 + 8) + lVar10);
          bVar6 = param_1 <= local_110._4_4_;
          if (bVar6) {
            Vector2::Vector2(aVStack_118,(Vector3 *)&local_a8);
            InsertPlainSurfaceVertices(uVar19,uVar18,fVar17);
          }
          else {
            Vector2::Vector2(aVStack_120,(Vector3 *)&local_f8);
            InsertPlainSurfaceVertices(uVar19,uVar18,fVar17);
          }
          bVar6 = !bVar6;
          iVar11 = *(int *)(in_x0 + 0x30);
          MeshBuilder::AddFace((MeshBuilder *)(in_x0 + 0x20),iVar11 + -4,iVar11 + -2,iVar11 + -1);
          MeshBuilder::AddFace((MeshBuilder *)(in_x0 + 0x20),iVar11 + -3,iVar11 + -4,iVar11 + -1);
LAB_003baf88:
          bVar8 = false;
        }
        else {
          local_e0 = 0;
          local_e8 = local_a8;
          local_e4 = fStack_a4;
          Vector3::Normalize((Vector3 *)&local_e8);
          bVar8 = false;
          if (local_e4 < param_1) goto LAB_003bae00;
          bVar6 = false;
        }
      }
      piVar9 = *(int **)in_x0;
      iVar11 = *piVar9;
      iVar12 = 0;
      if (iVar11 != 0) {
        iVar12 = iVar3 / iVar11;
      }
      iVar12 = iVar3 - iVar12 * iVar11;
    } while (iVar14 < iVar11);
  }
  puVar7 = (undefined8 *)MeshBuilder::GenerateMesh((MeshBuilder *)(in_x0 + 0x20));
  *in_x8 = *puVar7;
  lVar10 = puVar7[1];
  in_x8[1] = lVar10;
  if (lVar10 != 0) {
    *(long *)(lVar10 + 8) = *(long *)(lVar10 + 8) + 1;
  }
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


