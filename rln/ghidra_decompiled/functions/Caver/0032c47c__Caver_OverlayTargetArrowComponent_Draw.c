/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032c47c
 * Function: Caver::OverlayTargetArrowComponent::Draw
 * Signature: undefined __thiscall Draw(OverlayTargetArrowComponent * this, RenderingContext * param_1, Camera * param_2, Rectangle * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext*, Caver::Camera const*,
   Caver::Rectangle const&) */

void __thiscall
Caver::OverlayTargetArrowComponent::Draw
          (OverlayTargetArrowComponent *this,RenderingContext *param_1,Camera *param_2,
          Rectangle *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  Matrix4 *this_00;
  Rectangle *pRVar7;
  float extraout_s0;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 uStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if ((((this[0x9a] == (OverlayTargetArrowComponent)0x0) && (*(long *)(this + 0x90) != 0)) &&
      (*(long *)(this + 0x70) != 0)) && (*(long *)(this + 0xa0) != 0)) {
    local_e8 = *(float *)(this + 0xb0);
    uStack_e4 = *(undefined4 *)(this + 0xb4);
    uVar2 = *(undefined8 *)(this + 0xb0);
    uStack_98 = CONCAT44(uStack_98._4_4_,*(undefined4 *)(*(long *)(this + 0x70) + 0x78));
    local_a0._0_4_ = local_e8;
    local_a0._4_4_ = uStack_e4;
    Camera::ScreenPointFromWorldPosition((Vector3 *)param_2,(Rectangle *)&local_a0,(float *)param_3)
    ;
    fVar10 = *(float *)param_3 + DAT_00684320;
    if ((local_f0 < fVar10) ||
       (fVar10 = *(float *)param_3 + *(float *)(param_3 + 8) + DAT_00684324, fVar10 < local_f0)) {
      local_f0 = fVar10;
    }
    fVar10 = *(float *)(param_3 + 4) + DAT_00684320;
    if ((fStack_ec < fVar10) ||
       (fVar10 = *(float *)(param_3 + 4) + *(float *)(param_3 + 0xc) + DAT_00684324,
       fVar10 < fStack_ec)) {
      fStack_ec = fVar10;
    }
    if (this[0x98] == (OverlayTargetArrowComponent)0x0) {
      Rectangle::NearestPointInRectangle((Vector2 *)(*(long *)(this + 0x90) + 0xa4));
      local_f8 = (float)local_a0;
      uStack_f4 = local_a0._4_4_;
    }
    else {
      pRVar7 = (Rectangle *)(*(long *)(this + 0x90) + 0xa4);
      uVar8 = *(undefined8 *)pRVar7;
      uVar9 = *(undefined8 *)(*(long *)(this + 0x90) + 0xac);
      uStack_98 = CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * 0.5,
                           (float)uVar8 + (float)uVar9 * 0.5);
      local_a0 = uVar2;
      LineSegment::IntersectsRectangle
                ((LineSegment *)&local_a0,pRVar7,(Vector2 *)&local_f8,(Vector2 *)0x0);
    }
    local_a0 = CONCAT44(uStack_f4,local_f8);
    uStack_98 = CONCAT44(uStack_98._4_4_,*(undefined4 *)(*(long *)(this + 0x90) + 0x78));
    Camera::ScreenPointFromWorldPosition((Vector3 *)param_2,(Rectangle *)&local_a0,(float *)param_3)
    ;
    if (DAT_00684328 <=
        (local_f0 - local_100) * (local_f0 - local_100) +
        (fStack_ec - fStack_fc) * (fStack_ec - fStack_fc)) {
      local_108 = local_100 - local_f0;
      fStack_104 = fStack_fc - fStack_ec;
      Vector2::Normalize((Vector2 *)&local_108);
      local_110 = CONCAT44(fStack_fc,local_100);
      uVar6 = Rectangle::PointInside(param_3,(Vector2 *)&local_110);
      if ((uVar6 & 1) == 0) {
        local_a0 = CONCAT44(fStack_ec,local_f0);
        uStack_98 = CONCAT44(fStack_104 * 5000.0 + fStack_ec,local_108 * 5000.0 + local_f0);
        LineSegment::IntersectsRectangle
                  ((LineSegment *)&local_a0,param_3,(Vector2 *)0x0,(Vector2 *)&local_110);
      }
      uVar5 = _UNK_006837f8;
      uVar4 = _DAT_006837f0;
      uVar3 = _UNK_006837e8;
      uVar9 = _DAT_006837e0;
      uVar8 = _UNK_00683498;
      uVar2 = _DAT_00683490;
      local_68 = 0x3f80000000000000;
      local_110 = CONCAT44((float)((ulong)local_110 >> 0x20) -
                           fStack_104 * *(float *)(*(long *)(this + 0xa0) + 0x10) * 0.5,
                           (float)local_110 -
                           local_108 * *(float *)(*(long *)(this + 0xa0) + 0x10) * 0.5);
      uStack_98 = _UNK_00683498;
      local_a0 = _DAT_00683490;
      uStack_88 = _UNK_006837e8;
      uStack_90 = _DAT_006837e0;
      uStack_78 = _UNK_006837f8;
      local_80 = _DAT_006837f0;
      local_70 = local_110;
      this_00 = (Matrix4 *)Vector2::Angle((Vector2 *)&local_108);
      Matrix4::RotationZ(this_00,extraout_s0);
      C_Matrix4Mul((float *)&local_a0,(float *)&local_e0,(float *)&local_a0);
      RenderingContext::SetBlendingEnabled(param_1,true);
      RenderingContext::SetDefaultBlendFunc(param_1);
      RenderingContext::UseProgram(param_1,1);
      RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_a0);
      local_e0 = CONCAT44(local_e0._4_4_,0xffffffff);
      RenderingContext::SetColor(param_1,(Color *)&local_e0);
      Sprite::Draw(*(Sprite **)(this + 0xa0),param_1);
      if (*(long *)(this + 0xa8) != 0) {
        uStack_d8 = uVar8;
        local_e0 = uVar2;
        local_b0 = local_110;
        uStack_a8 = 0x3f80000000000000;
        uStack_c8 = uVar3;
        local_d0 = uVar9;
        uStack_b8 = uVar5;
        local_c0 = uVar4;
        RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_e0);
        Sprite::Draw(*(Sprite **)(this + 0xa8),param_1);
      }
    }
    else if (this[0x99] != (OverlayTargetArrowComponent)0x0) {
      this[0x9a] = (OverlayTargetArrowComponent)0x1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


