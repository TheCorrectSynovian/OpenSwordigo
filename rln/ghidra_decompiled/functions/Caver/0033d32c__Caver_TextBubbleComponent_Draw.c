/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0033d32c
 * Function: Caver::TextBubbleComponent::Draw
 * Signature: undefined __thiscall Draw(TextBubbleComponent * this, RenderingContext * param_1, Camera * param_2, Rectangle * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::TextBubbleComponent::Draw(Caver::RenderingContext*, Caver::Camera const*, Caver::Rectangle
   const&) */

void __thiscall
Caver::TextBubbleComponent::Draw
          (TextBubbleComponent *this,RenderingContext *param_1,Camera *param_2,Rectangle *param_3)

{
  long lVar1;
  GUITextBubble *this_00;
  Vector2 aVStack_138 [16];
  float local_128;
  float fStack_124;
  undefined8 local_120;
  float local_118;
  float fStack_114;
  float local_110 [6];
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x78) != 0) {
    local_88 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
    local_80 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
    Camera::ScreenPointFromWorldPosition((Vector3 *)param_2,(Rectangle *)&local_88,(float *)param_3)
    ;
    local_120 = CONCAT44(fStack_114 * *(float *)(param_1 + 0x58),
                         local_118 * *(float *)(param_1 + 0x58));
    Vector2::Rounded();
    local_118 = local_128 * (1.0 / *(float *)(param_1 + 0x58));
    fStack_114 = (1.0 / *(float *)(param_1 + 0x58)) * fStack_124;
    local_98 = 0x3f80000000000000;
    uStack_c8 = _UNK_00683498;
    local_d0 = _DAT_00683490;
    uStack_b8 = _UNK_006837e8;
    uStack_c0 = _DAT_006837e0;
    uStack_a8 = _UNK_006837f8;
    local_b0 = _DAT_006837f0;
    local_110[0] = *(float *)(this + 0x70);
    local_110[3] = 0.0;
    local_110[4] = 0.0;
    local_110[1] = 0.0;
    local_110[2] = 0.0;
    uStack_f0 = 0;
    local_f8 = 0;
    uStack_dc = 0;
    local_e4 = 0;
    local_d4 = 0x3f800000;
    local_110[5] = local_110[0];
    local_e8 = local_110[0];
    local_a0 = local_118;
    fStack_9c = fStack_114;
    C_Matrix4Mul((float *)&local_d0,local_110,(float *)&local_88);
    RenderingContext::SetMatrix(param_1,(Matrix4 *)&local_88);
    if (this[0x76] == (TextBubbleComponent)0x0) {
      this_00 = *(GUITextBubble **)(this + 0x78);
      this[0x76] = (TextBubbleComponent)0x1;
      Rectangle::RectangleByInsetting(param_3,15.0);
      Rectangle::TranslatedRectangle(aVStack_138);
      GUITextBubble::SetMaxBounds(this_00,(Rectangle *)local_110);
    }
    GUITextBubble::Draw(*(GUITextBubble **)(this + 0x78),param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


