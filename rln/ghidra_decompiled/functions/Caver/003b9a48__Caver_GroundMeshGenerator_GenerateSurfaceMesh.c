/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b9a48
 * Function: Caver::GroundMeshGenerator::GenerateSurfaceMesh
 * Signature: undefined __thiscall GenerateSurfaceMesh(GroundMeshGenerator * this, int param_1, Vector2 * param_2, float * param_3, float * param_4, TextureMapping * param_5)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGenerator::GenerateSurfaceMesh(int, Caver::Vector2 const*, float const*, float
   const*, Caver::TextureMapping const*) */

void __thiscall
Caver::GroundMeshGenerator::GenerateSurfaceMesh
          (GroundMeshGenerator *this,int param_1,Vector2 *param_2,float *param_3,float *param_4,
          TextureMapping *param_5)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  long lVar8;
  undefined8 uVar9;
  Mesh *pMVar10;
  ulong uVar11;
  int iVar12;
  long *in_x8;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  int iVar16;
  short sVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  short *psVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_90;
  float local_8c;
  undefined4 uStack_88;
  undefined8 local_80;
  long local_78;
  
  uVar11 = (ulong)(uint)param_1;
  lVar8 = tpidr_el0;
  local_78 = *(long *)(lVar8 + 0x28);
  pMVar10 = operator_new(0x160);
  Mesh::Mesh(pMVar10);
  *in_x8 = (long)pMVar10;
  boost::detail::shared_count::shared_count<Caver::Mesh>((shared_count *)(in_x8 + 1),pMVar10);
  boost::detail::sp_enable_shared_from_this();
  uVar9 = DAT_00689de8;
  lVar13 = *in_x8;
  *(undefined4 *)(lVar13 + 0x10) = 0;
  *(undefined8 *)(lVar13 + 8) = uVar9;
  *(undefined8 *)(lVar13 + 0x18) = 0;
  uVar9 = DAT_00689dd8;
  lVar13 = *in_x8;
  *(undefined8 *)(lVar13 + 0x20) = DAT_00689dd8;
  *(undefined4 *)(lVar13 + 0x28) = 0;
  *(undefined8 *)(lVar13 + 0x30) = 0;
  lVar13 = *in_x8;
  *(undefined8 *)(lVar13 + 0x38) = uVar9;
  *(undefined4 *)(lVar13 + 0x40) = 0;
  *(undefined8 *)(lVar13 + 0x48) = 0;
  if ((param_4 != (float *)0x0) && (lVar13 = *(long *)param_4, lVar13 != 0)) {
    pMVar10 = (Mesh *)*in_x8;
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    plVar14 = *(long **)(pMVar10 + 0xd8);
    *(long *)(pMVar10 + 0xd8) = lVar13;
    if ((plVar14 != (long *)0x0) &&
       (iVar12 = (int)plVar14[1] + -1, *(int *)(plVar14 + 1) = iVar12, iVar12 == 0)) {
      (**(code **)(*plVar14 + 8))(plVar14);
      pMVar10 = (Mesh *)*in_x8;
    }
    Mesh::SetNumTexCoordSets(pMVar10,1);
    puVar15 = *(undefined8 **)(*in_x8 + 0x50);
    *puVar15 = DAT_00689de0;
    *(undefined4 *)(puVar15 + 1) = 0;
    puVar15[2] = 0;
  }
  iVar12 = (int)this;
  Mesh::CreateInterleavedData((Mesh *)*in_x8,iVar12 << 1,iVar12 << 1,iVar12 * 6);
  lVar13 = *in_x8;
  pfVar20 = *(float **)(lVar13 + 0x30);
  pfVar21 = *(float **)(lVar13 + 0x48);
  if (*(int *)(lVar13 + 0x140) < 1) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    puVar15 = *(undefined8 **)(*(long *)(lVar13 + 0x50) + 0x10);
  }
  if (0 < iVar12) {
    psVar23 = *(short **)(lVar13 + 0x18);
    sVar17 = 0;
    fVar27 = 0.0;
    pfVar22 = (float *)(uVar11 + 4);
    lVar13 = 0;
    do {
      lVar3 = lVar13 + 1;
      iVar24 = iVar12;
      if (lVar13 != 0) {
        iVar24 = (int)lVar13;
      }
      iVar16 = (int)lVar3;
      if (iVar12 <= lVar3) {
        iVar16 = 0;
      }
      lVar1 = uVar11 + (long)iVar24 * 8;
      pfVar2 = (float *)(uVar11 + (long)iVar16 * 8);
      local_90 = (*pfVar22 - *(float *)(lVar1 + -4)) + (pfVar2[1] - *pfVar22);
      local_8c = -(*pfVar2 - pfVar22[-1]) - (pfVar22[-1] - *(float *)(lVar1 + -8));
      Vector2::Normalize((Vector2 *)&local_90);
      fVar25 = pfVar22[-1];
      fVar26 = *pfVar22;
      fVar5 = *(float *)(param_2 + lVar13 * 4);
      fVar6 = param_3[lVar13];
      *pfVar20 = fVar25;
      pfVar20[1] = fVar26;
      pfVar20[2] = fVar5;
      lVar13 = *in_x8;
      uVar18 = (ulong)*(uint *)(lVar13 + 0x28);
      pfVar20 = (float *)((long)pfVar20 + uVar18);
      *pfVar20 = fVar25;
      pfVar20[1] = fVar26;
      pfVar20[2] = fVar6;
      *pfVar21 = local_90;
      pfVar21[1] = local_8c;
      pfVar21[2] = 0.0;
      uVar19 = (ulong)*(uint *)(lVar13 + 0x40);
      pfVar21 = (float *)((long)pfVar21 + uVar19);
      *pfVar21 = local_90;
      pfVar21[1] = local_8c;
      pfVar21[2] = 0.0;
      if (puVar15 != (undefined8 *)0x0) {
        uStack_88 = 0;
        local_90 = fVar27;
        local_8c = fVar5;
        TextureMapping::TexCoordForPosition((Vector3 *)param_4);
        *puVar15 = local_80;
        uVar4 = *(uint *)(*(long *)(*in_x8 + 0x50) + 8);
        uStack_88 = 0;
        local_90 = fVar27;
        local_8c = fVar6;
        TextureMapping::TexCoordForPosition((Vector3 *)param_4);
        puVar15 = (undefined8 *)((long)puVar15 + (ulong)uVar4);
        *puVar15 = local_80;
        fVar25 = pfVar2[1] - *pfVar22;
        fVar26 = (*pfVar2 - pfVar22[-1]) * (*pfVar2 - pfVar22[-1]) + fVar25 * fVar25;
        fVar25 = SQRT(fVar26);
        puVar15 = (undefined8 *)((long)puVar15 + (ulong)*(uint *)(*(long *)(*in_x8 + 0x50) + 8));
        if (NAN(fVar25)) {
          fVar25 = sqrtf(fVar26);
        }
        fVar27 = fVar27 + fVar25;
      }
      psVar23[1] = sVar17 + 1;
      psVar23[3] = sVar17 + 1;
      pfVar20 = (float *)((long)pfVar20 + uVar18);
      pfVar21 = (float *)((long)pfVar21 + uVar19);
      *psVar23 = sVar17;
      pfVar22 = pfVar22 + 2;
      sVar17 = sVar17 + 2;
      sVar7 = (short)(iVar16 << 1);
      psVar23[2] = sVar7;
      psVar23[5] = sVar7;
      psVar23[4] = (ushort)(iVar16 << 1) | 1;
      psVar23 = psVar23 + 6;
      lVar13 = lVar3;
    } while (lVar3 < iVar12);
  }
  if (*(long *)(lVar8 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


