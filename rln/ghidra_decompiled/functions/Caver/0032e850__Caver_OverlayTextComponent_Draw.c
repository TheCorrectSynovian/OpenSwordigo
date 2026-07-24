/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032e850
 * Function: Caver::OverlayTextComponent::Draw
 * Signature: undefined __thiscall Draw(OverlayTextComponent * this, RenderingContext * param_1, Camera * param_2, Rectangle * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::OverlayTextComponent::Draw(Caver::RenderingContext*, Caver::Camera const*,
   Caver::Rectangle const&) */

void __thiscall
Caver::OverlayTextComponent::Draw
          (OverlayTextComponent *this,RenderingContext *param_1,Camera *param_2,Rectangle *param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  float fVar4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  float local_60;
  float fStack_5c;
  undefined8 local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (this[0x80] != (OverlayTextComponent)0x0) {
    UpdateText(this);
  }
  if (this[0xa8] != (OverlayTextComponent)0x0) {
    UpdateSprite(this);
  }
  if (*(long *)(this + 0xa0) != 0) {
    local_90 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(*(long *)(this + 0x28) + 0x78));
    Camera::ScreenPointFromWorldPosition((Vector3 *)param_2,(Rectangle *)&local_90,(float *)param_3)
    ;
    local_60 = local_98 + *(float *)(this + 0x98);
    fStack_5c = local_94 + *(float *)(this + 0x9c);
    local_58 = 0x3f80000000000000;
    uStack_88 = _UNK_00683498;
    local_90 = _DAT_00683490;
    uStack_78 = _UNK_006837e8;
    uStack_80 = _DAT_006837e0;
    uStack_68 = _UNK_006837f8;
    local_70 = _DAT_006837f0;
    RenderingContext::SetBlendingEnabled(param_1,true);
    RenderingContext::SetDefaultBlendFunc(param_1);
    RenderingContext::UseProgram(param_1,1);
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_90);
    uVar3 = (uint)(*(float *)(this + 0xac) * DAT_00683ffc);
    if (0xfe < (int)uVar3) {
      uVar3 = 0xff;
    }
    local_a0 = (float)((uVar3 & 0xff) * 0x1010101);
    RenderingContext::SetColor(param_1,(Color *)&local_a0);
    Sprite::Draw(*(Sprite **)(this + 0xa0),param_1);
  }
  if (*(long *)(this + 0x88) != 0) {
    local_90 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(*(long *)(this + 0x28) + 0x78));
    Camera::ScreenPointFromWorldPosition((Vector3 *)param_2,(Rectangle *)&local_90,(float *)param_3)
    ;
    lVar2 = *(long *)(this + 0x88);
    if (this[0x81] == (OverlayTextComponent)0x0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = -(float)(int)(*(float *)(lVar2 + 0x48) * 0.5);
    }
    local_a0 = fVar4 + local_98 + *(float *)(this + 0x78);
    fStack_9c = (local_94 -
                (float)(int)((*(float *)(lVar2 + 0x44) + *(float *)(lVar2 + 0x4c)) * 0.5)) +
                *(float *)(this + 0x7c);
    Vector2::Rounded();
    local_58 = 0x3f80000000000000;
    local_60 = (float)local_90;
    fStack_5c = local_90._4_4_;
    uStack_88 = _UNK_00683498;
    local_90 = _DAT_00683490;
    uStack_78 = _UNK_006837e8;
    uStack_80 = _DAT_006837e0;
    local_a0 = local_60;
    fStack_9c = fStack_5c;
    uStack_68 = _UNK_006837f8;
    local_70 = _DAT_006837f0;
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_90);
    RenderingContext::SetAlpha(param_1,*(float *)(this + 0xac));
    FontText::Draw(*(FontText **)(this + 0x88),param_1);
    RenderingContext::SetAlpha(param_1,1.0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


