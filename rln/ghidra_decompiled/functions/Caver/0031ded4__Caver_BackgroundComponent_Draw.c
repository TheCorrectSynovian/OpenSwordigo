/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031ded4
 * Function: Caver::BackgroundComponent::Draw
 * Signature: undefined __thiscall Draw(BackgroundComponent * this, RenderingContext * param_1, Camera * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BackgroundComponent::Draw(Caver::RenderingContext*, Caver::Camera*) const */

void __thiscall
Caver::BackgroundComponent::Draw
          (BackgroundComponent *this,RenderingContext *param_1,Camera *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  undefined8 local_140;
  float local_138;
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
  undefined8 local_a8;
  float local_a0;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar5 = *(float *)(param_2 + 0x18);
  Camera::ForwardDirection();
  if (local_138 <= 0.0) {
    fVar5 = fVar5 + DAT_00683ce4;
    fVar6 = -fVar5;
    local_a0 = fVar6 / local_138;
    local_a8 = CONCAT44((float)((ulong)local_140 >> 0x20) * local_a0,(float)local_140 * local_a0);
    local_a0 = local_138 * local_a0;
    Vector2::Vector2((Vector2 *)&local_148,(Vector3 *)&local_a8);
    fVar6 = fVar6 / *(float *)(this + 0x78);
    local_130 = (float)*(undefined8 *)(this + 0x70) * fVar6;
    fStack_12c = (float)((ulong)*(undefined8 *)(this + 0x70) >> 0x20) * fVar6;
    fStack_128 = fVar6 * *(float *)(this + 0x78);
    Vector2::Vector2((Vector2 *)&local_150,(Vector3 *)&local_130);
    fVar6 = tanf(*(float *)(param_2 + 0xf4) * 0.5);
    fVar3 = *(float *)(*(long *)(this + 0x80) + 0x10);
    fVar5 = 0.5 / (fVar5 * fVar6);
    local_130 = fVar5 * 20.0 * (DAT_00683ce8 / fVar3);
    uStack_124 = 0;
    fStack_12c = 0.0;
    fStack_128 = 0.0;
    uStack_110 = 0;
    local_118 = 0;
    fVar4 = -((local_148 - local_150) * fVar5);
    fVar6 = -((fStack_144 - fStack_14c) * fVar5);
    fVar2 = *(float *)(*(long *)(this + 0x80) + 0x14) * local_130 * 0.5 + -1.0;
    fVar5 = fVar2;
    if (fVar6 <= fVar2) {
      fVar5 = fVar6;
    }
    fVar6 = fVar3 * local_130 * 0.5 - *(float *)(param_2 + 0xf0);
    fStack_bc = -fVar2;
    if (-fVar2 <= fVar5) {
      fStack_bc = fVar5;
    }
    local_f8 = 0x3f80000000000000;
    fVar5 = fVar6;
    if (fVar4 <= fVar6) {
      fVar5 = fVar4;
    }
    local_c0 = -fVar6;
    if (-fVar6 <= fVar5) {
      local_c0 = fVar5;
    }
    local_b8 = 0x3f8000003f7d70a4;
    uStack_e8 = _UNK_00683498;
    local_f0 = _DAT_00683490;
    uStack_d8 = _UNK_006837e8;
    uStack_e0 = _DAT_006837e0;
    uStack_c8 = _UNK_006837f8;
    local_d0 = _DAT_006837f0;
    uStack_100 = _UNK_00683498;
    local_108 = _DAT_00683490;
    local_11c = local_130;
    C_Matrix4Mul((float *)&local_f0,&local_130,(float *)&local_a8);
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_a8);
    Sprite::Draw(*(Sprite **)(this + 0x80),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


