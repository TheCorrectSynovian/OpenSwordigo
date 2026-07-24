/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ba45c
 * Function: Caver::GroundMeshGenerator::InsertRoundHatVertices
 * Signature: undefined __cdecl InsertRoundHatVertices(Vector2 * param_1, float param_2, float param_3, Vector3 * param_4, Vector3 * param_5, float param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::GroundMeshGenerator::InsertRoundHatVertices(Caver::Vector2 const&, float, float,
   Caver::Vector3 const&, Caver::Vector3 const&, float) */

void Caver::GroundMeshGenerator::InsertRoundHatVertices
               (Vector2 *param_1,float param_2,float param_3,Vector3 *param_4,Vector3 *param_5,
               float param_6)

{
  MeshBuilder *this;
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vector3 *pVVar4;
  undefined8 *in_x3;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_1b0;
  float local_1a8;
  float local_1a4;
  float fStack_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  ulong local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  ulong uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  float local_160;
  float local_15c;
  float fStack_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  uint local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 local_90;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_e0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_138 = 0;
  uStack_134 = 0;
  local_140 = 0;
  uStack_13c = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_188 = 0;
  uStack_184 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  local_17c = 0;
  fVar6 = (float)*(undefined8 *)param_4 + 0.0;
  fVar7 = (float)((ulong)*(undefined8 *)param_4 >> 0x20) + 0.0;
  local_118 = CONCAT44(fVar7,fVar6);
  fVar8 = *(float *)(param_1 + 0x7c) + param_3;
  local_c8 = param_2 - *(float *)(param_1 + 0x7c);
  fVar9 = fVar8 + *(float *)(param_1 + 0x80);
  fVar10 = fVar8 + _DAT_00684434;
  fVar11 = fVar7 + *(float *)(param_1 + 0x78) * DAT_00689df0;
  fVar12 = fVar7 - *(float *)(param_1 + 0x78);
  local_90 = 0;
  local_d8 = 0;
  local_120 = 0;
  local_168 = 0;
  local_170 = 0;
  local_c4 = 0;
  local_10c = 0;
  local_154 = 0;
  local_19c = 0;
  local_108 = *(undefined8 *)param_5;
  local_100 = *(uint *)(param_5 + 8);
  uStack_b4 = 0;
  uStack_fc = 0;
  local_150 = *in_x3;
  local_148 = *(undefined4 *)(in_x3 + 1);
  local_198 = CONCAT44(-(float)((ulong)local_108 >> 0x20),-(float)local_108);
  local_190 = (ulong)(local_100 ^ 0x80000000);
  uStack_144 = 0;
  pVVar4 = *(Vector3 **)(param_1 + 0x18);
  local_1a8 = fVar6;
  local_1a4 = fVar12;
  fStack_1a0 = fVar10;
  local_160 = fVar6;
  local_15c = fVar11;
  fStack_158 = fVar9;
  local_110 = fVar8;
  local_d0 = local_118;
  local_c0 = local_108;
  local_b8 = local_100;
  if ((pVVar4 != (Vector3 *)0x0) && (*(long *)pVVar4 != 0)) {
    TextureMapping::TexCoordForPosition(pVVar4);
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_ac = (undefined4)local_1b0;
    uVar2 = uStack_ac;
    uStack_a8 = (undefined4)((ulong)local_1b0 >> 0x20);
    uVar3 = uStack_a8;
    TextureMapping::TexCoordForPosition(*(Vector3 **)(param_1 + 0x18));
    uStack_ec = 0;
    uStack_e8 = 0;
    fVar6 = (fVar6 - fVar6) * (fVar6 - fVar6);
    pVVar4 = *(Vector3 **)(param_1 + 0x18);
    fVar7 = fVar6 + (fVar11 - fVar7) * (fVar11 - fVar7) + (fVar9 - fVar8) * (fVar9 - fVar8);
    uStack_f4 = uVar2;
    uStack_f0 = uVar3;
    if (NAN(SQRT(fVar7))) {
      sqrtf(fVar7);
    }
    TextureMapping::TexCoordForPosition(pVVar4);
    uStack_134 = 0;
    uStack_130 = uStack_130 & 0xffffffff00000000;
    pVVar4 = *(Vector3 **)(param_1 + 0x18);
    uStack_13c = uVar2;
    uStack_138 = uVar3;
    if (NAN(SQRT(fVar7))) {
      sqrtf(fVar7);
    }
    fVar6 = fVar6 + (fVar12 - fVar11) * (fVar12 - fVar11) + (fVar10 - fVar9) * (fVar10 - fVar9);
    if (NAN(SQRT(fVar6))) {
      sqrtf(fVar6);
    }
    TextureMapping::TexCoordForPosition(pVVar4);
    uStack_178 = uStack_178 & 0xffffffff00000000;
    uStack_184 = uVar2;
    uStack_180 = uVar3;
  }
  local_17c = 0;
  this = (MeshBuilder *)(param_1 + 0x20);
  MeshBuilder::AddVertex(this,(Vertex *)&local_d0);
  MeshBuilder::AddVertex(this,(Vertex *)&local_118);
  MeshBuilder::AddVertex(this,(Vertex *)&local_160);
  MeshBuilder::AddVertex(this,(Vertex *)&local_1a8);
  if (*(long *)(lVar1 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


