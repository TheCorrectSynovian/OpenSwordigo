/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0038849c
 * Function: Caver::MagicExplosionComponent::Draw
 * Signature: undefined __thiscall Draw(MagicExplosionComponent * this, RenderingContext * param_1, Matrix4 * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::MagicExplosionComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&) const */

void __thiscall
Caver::MagicExplosionComponent::Draw
          (MagicExplosionComponent *this,RenderingContext *param_1,Matrix4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Matrix4 *pMVar8;
  FloatColor *extraout_x1;
  uint uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float afStack_2a0 [16];
  float afStack_260 [16];
  float afStack_220 [16];
  float local_1e0 [6];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined4 local_1a4;
  float afStack_1a0 [16];
  float local_160 [6];
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  undefined8 local_134;
  undefined8 uStack_12c;
  undefined4 local_124;
  float afStack_120 [16];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  
  lVar1 = tpidr_el0;
  lVar10 = *(long *)(lVar1 + 0x28);
  RenderingContext::SetBlendingEnabled(param_1,true);
  RenderingContext::SetDefaultBlendFunc(param_1);
  RenderingContext::UseProgram(param_1,2);
  RenderingContext::SetVertexAttribPointer
            (param_1,0x8074,3,0x1406,0x10,*(undefined8 *)(this + 0x168));
  RenderingContext::SetVertexAttribPointer
            (param_1,0x8076,4,0x1401,0x10,*(long *)(this + 0x168) + 0xc);
  uVar7 = _UNK_006837f8;
  uVar6 = _DAT_006837f0;
  uVar5 = _UNK_006837e8;
  uVar4 = _DAT_006837e0;
  uVar3 = _UNK_00683498;
  uVar2 = _DAT_00683490;
  local_b0 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
  local_a8 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
  uStack_a4 = 0x3f800000;
  uStack_d8 = _UNK_00683498;
  local_e0 = _DAT_00683490;
  uStack_c8 = _UNK_006837e8;
  local_d0 = _DAT_006837e0;
  uStack_b8 = _UNK_006837f8;
  local_c0 = _DAT_006837f0;
  pMVar8 = (Matrix4 *)C_Matrix4Mul((float *)param_2,(float *)&local_e0,afStack_120);
  Matrix4::RotationZ(pMVar8,*(float *)(this + 0xf4));
  C_Matrix4Mul(afStack_120,local_160,afStack_1a0);
  local_1e0[0] = *(float *)(this + 0xf8);
  local_1e0[3] = 0.0;
  local_1e0[4] = 0.0;
  local_1e0[1] = 0.0;
  local_1e0[2] = 0.0;
  uStack_1c0 = 0;
  local_1c8 = 0;
  uStack_1ac = 0;
  local_1b4 = 0;
  local_1a4 = 0x3f800000;
  local_1e0[5] = local_1e0[0];
  local_1b8 = local_1e0[0];
  C_Matrix4Mul(afStack_1a0,local_1e0,(float *)&local_98);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_98);
  RenderingContext::DrawElements
            (param_1,4,*(int *)(this + 0x178) * 3,0x1401,*(undefined8 *)(this + 0x170));
  local_b0 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
  local_a8 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
  uStack_d8 = uVar3;
  local_e0 = uVar2;
  uStack_a4 = 0x3f800000;
  uStack_c8 = uVar5;
  local_d0 = uVar4;
  uStack_b8 = uVar7;
  local_c0 = uVar6;
  pMVar8 = (Matrix4 *)C_Matrix4Mul((float *)param_2,(float *)&local_e0,afStack_220);
  Matrix4::RotationZ(pMVar8,*(float *)(this + 0xfc));
  C_Matrix4Mul(afStack_220,local_160,afStack_260);
  local_1e0[0] = *(float *)(this + 0x100);
  local_1e0[3] = 0.0;
  local_1e0[4] = 0.0;
  local_1e0[1] = 0.0;
  local_1e0[2] = 0.0;
  uStack_1c0 = 0;
  local_1c8 = 0;
  uStack_1ac = 0;
  local_1b4 = 0;
  local_1a4 = 0x3f800000;
  local_1e0[5] = local_1e0[0];
  local_1b8 = local_1e0[0];
  C_Matrix4Mul(afStack_260,local_1e0,(float *)&local_98);
  RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_98);
  RenderingContext::DrawElements
            (param_1,4,*(int *)(this + 0x178) * 3,0x1401,*(undefined8 *)(this + 0x170));
  if (this[0xf1] != (MagicExplosionComponent)0x0) {
    local_98 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb0) >> 0x20) *
                        (float)((ulong)*(undefined8 *)(this + 0xc0) >> 0x20),
                        (float)*(undefined8 *)(this + 0xb0) * (float)*(undefined8 *)(this + 0xc0));
    uStack_90 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0xb8) >> 0x20) *
                         (float)((ulong)*(undefined8 *)(this + 200) >> 0x20),
                         (float)*(undefined8 *)(this + 0xb8) * (float)*(undefined8 *)(this + 200));
    Color::FromFloatColor((Color *)&local_98,extraout_x1);
    fVar14 = *(float *)(this + 0xe8) * 0.5;
    if (fVar14 < *(float *)(this + 0x160)) {
      fVar14 = 1.0 - (*(float *)(this + 0x160) - fVar14) / fVar14;
      fVar16 = (float)NEON_ucvtf((uint)local_1e0[0] & 0xff);
      fVar17 = (float)NEON_ucvtf((uint)local_1e0[0] >> 8 & 0xff);
      fVar15 = (float)NEON_ucvtf((uint)local_1e0[0] >> 0x10 & 0xff);
      uVar9 = (uint)(fVar14 * fVar16);
      fVar16 = (float)NEON_ucvtf((uint)local_1e0[0] >> 0x18);
      uVar11 = (uint)(fVar14 * fVar17);
      uVar12 = (uint)(fVar14 * fVar15);
      if (0xfe < (int)uVar9) {
        uVar9 = 0xff;
      }
      iVar13 = (int)(fVar14 * fVar16);
      if (0xfe < (int)uVar11) {
        uVar11 = 0xff;
      }
      if (0xfe < (int)uVar12) {
        uVar12 = 0xff;
      }
      if (0xfe < iVar13) {
        iVar13 = 0xff;
      }
      local_1e0[0] = (float)(uVar9 & 0xff | (uVar11 & 0xff) << 8 | (uVar12 & 0xff) << 0x10 |
                            iVar13 << 0x18);
    }
    RenderingContext::UseProgram(param_1,1);
    RenderingContext::SetColor(param_1,(Color *)local_1e0);
    local_b0 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    local_a8 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
    uStack_d8 = uVar3;
    local_e0 = uVar2;
    uStack_c8 = uVar5;
    local_d0 = uVar4;
    uStack_a4 = 0x3f800000;
    uStack_b8 = uVar7;
    local_c0 = uVar6;
    C_Matrix4Mul((float *)param_2,(float *)&local_e0,afStack_2a0);
    local_160[0] = *(float *)(this + 0x160);
    local_160[3] = 0.0;
    local_160[4] = 0.0;
    local_160[1] = 0.0;
    local_160[2] = 0.0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_12c = 0;
    local_134 = 0;
    local_124 = 0x3f800000;
    local_160[5] = local_160[0];
    local_138 = local_160[0];
    C_Matrix4Mul(afStack_2a0,local_160,(float *)&local_98);
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_98);
    Sprite::Draw((Sprite *)(this + 0x108),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


