/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b6760
 * Function: Caver::RotatingBackgroundComponent::Draw
 * Signature: undefined __thiscall Draw(RotatingBackgroundComponent * this, RenderingContext * param_1, Camera * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext*, Caver::Camera*) const */

void __thiscall
Caver::RotatingBackgroundComponent::Draw
          (RotatingBackgroundComponent *this,RenderingContext *param_1,Camera *param_2)

{
  long lVar1;
  undefined8 uVar2;
  Matrix4 *this_00;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_248;
  float fStack_244;
  undefined8 local_240;
  float local_238;
  float afStack_230 [16];
  float afStack_1f0 [16];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  float local_17c;
  undefined8 local_178;
  float afStack_170 [16];
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined8 uStack_124;
  float local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  float fStack_bc;
  undefined8 local_b8;
  float local_a8;
  float fStack_a4;
  float local_a0;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  fVar6 = *(float *)(param_2 + 0x18);
  Camera::ForwardDirection();
  if (local_238 <= 0.0) {
    fVar6 = fVar6 + DAT_00689cc4;
    fVar7 = -fVar6;
    local_a0 = fVar7 / local_238;
    local_a8 = (float)local_240 * local_a0;
    fStack_a4 = (float)((ulong)local_240 >> 0x20) * local_a0;
    local_a0 = local_238 * local_a0;
    Vector2::Vector2((Vector2 *)&local_248,(Vector3 *)&local_a8);
    fVar7 = fVar7 / *(float *)(this + 0x78);
    local_130 = (float)*(undefined8 *)(this + 0x70) * fVar7;
    fStack_12c = (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20) * fVar7;
    fStack_128 = *(float *)(this + 0x78) * fVar7;
    Vector2::Vector2((Vector2 *)&local_1b0,(Vector3 *)&local_130);
    fVar7 = tanf(*(float *)(param_2 + 0xf4) * 0.5);
    uStack_188 = _UNK_006837f8;
    local_190 = _DAT_006837f0;
    uStack_198 = _UNK_006837e8;
    local_1a0 = _DAT_006837e0;
    uStack_1a8 = _UNK_00683498;
    uVar2 = _DAT_00683490;
    fVar6 = 0.5 / (fVar6 * fVar7);
    local_130 = fVar6 * 20.0;
    local_f8 = 0x3f80000000000000;
    uStack_124 = 0;
    fStack_12c = 0.0;
    fStack_128 = 0.0;
    uStack_110 = 0;
    local_118 = 0;
    fVar5 = -((local_248 - (float)local_1b0) * fVar6);
    fVar7 = -((fStack_244 - local_1b0._4_4_) * fVar6);
    fVar4 = *(float *)(*(long *)(this + 0x80) + 0x14) * local_130 * 0.5 + -1.0;
    fVar6 = fVar4;
    if (fVar7 <= fVar4) {
      fVar6 = fVar7;
    }
    fVar7 = *(float *)(*(long *)(this + 0x80) + 0x10) * local_130 * 0.5 - *(float *)(param_2 + 0xf0)
    ;
    fStack_bc = -fVar4;
    if (-fVar4 <= fVar6) {
      fStack_bc = fVar6;
    }
    fVar6 = fVar7;
    if (fVar5 <= fVar7) {
      fVar6 = fVar5;
    }
    local_c0 = -fVar7;
    if (-fVar7 <= fVar6) {
      local_c0 = fVar6;
    }
    local_b8 = 0x3f80000000000000;
    uStack_e8 = _UNK_00683498;
    local_f0 = _DAT_00683490;
    uStack_d8 = _UNK_006837e8;
    uStack_e0 = _DAT_006837e0;
    uStack_c8 = _UNK_006837f8;
    local_d0 = _DAT_006837f0;
    uStack_100 = _UNK_00683498;
    local_108 = _DAT_00683490;
    local_11c = local_130;
    C_Matrix4Mul((float *)&local_f0,&local_130,afStack_170);
    local_180 = 0;
    local_178 = 0x3f80000000000000;
    local_17c = *(float *)(*(long *)(this + 0x80) + 0x14) * -0.25;
    local_1b0 = uVar2;
    this_00 = (Matrix4 *)C_Matrix4Mul(afStack_170,(float *)&local_1b0,afStack_1f0);
    Matrix4::RotationZ(this_00,*(float *)(this + 0x90));
    C_Matrix4Mul(afStack_1f0,afStack_230,&local_a8);
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_a8);
    _local_a8 = CONCAT44(fStack_a4,0xffffffff);
    RenderingContext::SetColor(param_1,(Color *)&local_a8);
    Sprite::Draw(*(Sprite **)(this + 0x80),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


