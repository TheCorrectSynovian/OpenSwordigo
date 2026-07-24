/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bb564
 * Function: Caver::GroundMeshGenerator::GenerateFrontMesh
 * Signature: undefined __cdecl GenerateFrontMesh(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGenerator::GenerateFrontMesh() */

void Caver::GroundMeshGenerator::GenerateFrontMesh(void)

{
  MeshBuilder *this;
  float *pfVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GroundMeshGenerator *in_x0;
  ushort *puVar8;
  Vector3 *pVVar9;
  undefined8 *puVar10;
  undefined8 *in_x8;
  long lVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  ushort *puVar15;
  long lVar16;
  undefined8 local_180;
  float local_178;
  float fStack_174;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_120;
  float local_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float fStack_74;
  float local_70;
  
  lVar5 = tpidr_el0;
  lVar11 = *(long *)(lVar5 + 0x28);
  InitializeMeshBuilder(in_x0,false);
  piVar13 = *(int **)in_x0;
  iVar4 = *piVar13;
  lVar14 = (long)iVar4 + -2;
  uVar2 = lVar14 * 6;
  if (CARRY8(lVar14 * 3,lVar14 * 3)) {
    uVar2 = 0xffffffffffffffff;
  }
  puVar8 = operator_new__(uVar2);
  TriangulatePolygon(*(Vector2 **)(piVar13 + 2),*piVar13,puVar8);
  if (2 < iVar4) {
    lVar16 = 0;
    this = (MeshBuilder *)(in_x0 + 0x20);
    puVar15 = puVar8 + 2;
    do {
      lVar3 = *(long *)(in_x0 + 8);
      lVar12 = *(long *)(*(long *)in_x0 + 8);
      local_88 = *(float *)(lVar3 + (ulong)puVar15[-2] * 4);
      pfVar1 = (float *)(lVar12 + (ulong)puVar15[-2] * 8);
      local_90 = *pfVar1;
      fStack_8c = pfVar1[1];
      pfVar1 = (float *)(lVar12 + (ulong)puVar15[-1] * 8);
      local_84 = *pfVar1;
      local_7c = *(float *)(lVar3 + (ulong)puVar15[-1] * 4);
      fStack_80 = pfVar1[1];
      pfVar1 = (float *)(lVar12 + (ulong)*puVar15 * 8);
      local_78 = *pfVar1;
      local_70 = *(float *)(lVar3 + (ulong)*puVar15 * 4);
      fStack_74 = pfVar1[1];
      fStack_174 = (local_7c - local_88) * (local_78 - local_84) -
                   (local_70 - local_7c) * (local_84 - local_90);
      local_178 = (local_70 - local_7c) * (fStack_80 - fStack_8c) -
                  (local_7c - local_88) * (fStack_74 - fStack_80);
      local_170 = (local_84 - local_90) * (fStack_74 - fStack_80) -
                  (fStack_80 - fStack_8c) * (local_78 - local_84);
      Vector3::Normalize((Vector3 *)&local_178);
      local_d8 = CONCAT44(fStack_8c,local_90);
      local_120 = CONCAT44(fStack_80,local_84);
      local_98 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      local_b8 = 0;
      uStack_b4 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      local_e0 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      local_100 = 0;
      uStack_fc = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      local_d0 = local_88;
      uStack_cc = 0;
      local_168 = CONCAT44(fStack_74,local_78);
      local_128 = 0;
      uStack_140 = 0;
      uStack_13c = 0;
      local_148 = 0;
      uStack_144 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      local_118 = local_7c;
      uStack_114 = 0;
      local_160 = local_70;
      uStack_15c = 0;
      local_c8 = local_178;
      fStack_c4 = fStack_174;
      local_110 = local_178;
      fStack_10c = fStack_174;
      local_c0 = local_170;
      uStack_bc = 0;
      local_108 = local_170;
      uStack_104 = 0;
      local_158 = local_178;
      fStack_154 = fStack_174;
      local_150 = local_170;
      uStack_14c = 0;
      pVVar9 = *(Vector3 **)(in_x0 + 0x18);
      if ((pVVar9 != (Vector3 *)0x0) && (*(long *)pVVar9 != 0)) {
        TextureMapping::TexCoordForPosition(pVVar9);
        uStack_b4 = (undefined4)local_180;
        uVar6 = uStack_b4;
        uStack_b0 = (undefined4)((ulong)local_180 >> 0x20);
        uVar7 = uStack_b0;
        uStack_ac = 0;
        uStack_a8 = 0;
        TextureMapping::TexCoordForPosition(*(Vector3 **)(in_x0 + 0x18));
        uStack_f4 = 0;
        uStack_f0 = uStack_f0 & 0xffffffff00000000;
        uStack_fc = uVar6;
        uStack_f8 = uVar7;
        TextureMapping::TexCoordForPosition(*(Vector3 **)(in_x0 + 0x18));
        uStack_138 = uStack_138 & 0xffffffff00000000;
        uStack_144 = uVar6;
        uStack_140 = uVar7;
      }
      uStack_13c = 0;
      MeshBuilder::AddVertex(this,(Vertex *)&local_d8);
      MeshBuilder::AddVertex(this,(Vertex *)&local_120);
      MeshBuilder::AddVertex(this,(Vertex *)&local_168);
      lVar16 = lVar16 + 1;
      puVar15 = puVar15 + 3;
    } while (lVar16 < (int)lVar14);
  }
  puVar10 = (undefined8 *)MeshBuilder::GenerateMesh((MeshBuilder *)(in_x0 + 0x20));
  *in_x8 = *puVar10;
  lVar14 = puVar10[1];
  in_x8[1] = lVar14;
  if (lVar14 != 0) {
    *(long *)(lVar14 + 8) = *(long *)(lVar14 + 8) + 1;
  }
  operator_delete__(puVar8);
  if (*(long *)(lVar5 + 0x28) != lVar11) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


