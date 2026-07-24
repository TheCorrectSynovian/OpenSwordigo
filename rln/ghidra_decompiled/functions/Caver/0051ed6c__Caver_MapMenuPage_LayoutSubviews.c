/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051ed6c
 * Function: Caver::MapMenuPage::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(MapMenuPage * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MapMenuPage::LayoutSubviews() */

void __thiscall Caver::MapMenuPage::LayoutSubviews(MapMenuPage *this)

{
  long lVar1;
  float fVar2;
  GUIView *this_00;
  GUILabel *this_01;
  long lVar3;
  long lVar4;
  Rectangle *this_02;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 local_88;
  undefined4 local_80;
  float local_7c;
  float local_78;
  float fStack_74;
  Vector2 aVStack_70 [16];
  long local_60 [2];
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = *(undefined4 *)(this + 0x8c);
  local_88 = DAT_00693288;
  local_7c = *(float *)(this + 0x90) + -10.0;
  GUIView::SetFrame(*(GUIView **)(this + 0x1b8),(Rectangle *)&local_88);
  this_00 = *(GUIView **)(this + 0x1e8);
  if (this_00 != (GUIView *)0x0) {
    local_48 = DAT_006946e8;
    local_40 = CONCAT44(*(undefined4 *)(this_00 + 0x80),*(float *)(this + 0x8c) + DAT_00688634);
    GUIView::SetFrame(this_00,(Rectangle *)&local_48);
    StripeView::SetTitleHorizOffset(*(StripeView **)(this + 0x1e8),30.0);
  }
  this_01 = *(GUILabel **)(this + 0x1d8);
  if (this_01 != (GUILabel *)0x0) {
    *(undefined4 *)(this_01 + 0x130) = 4;
    GUILabel::UpdateBounds(this_01);
    local_48 = (ulong)(uint)(*(float *)(this + 0x88) + *(float *)(this + 0x90) + -20.0) << 0x20;
    local_40 = CONCAT44(*(undefined4 *)(*(long *)(*(GUIView **)(this + 0x1d8) + 0xf0) + 0x48),
                        *(undefined4 *)(this + 0x8c));
    GUIView::SetFrame(*(GUIView **)(this + 0x1d8),(Rectangle *)&local_48);
  }
  fVar2 = DAT_00683944;
  lVar4 = *(long *)(this + 0x1c8);
  lVar3 = *(long *)(this + 0x1b8);
  fVar5 = (*(float *)(this + 0x8c) - *(float *)(lVar4 + 0x7c)) * 0.5;
  fVar6 = (*(float *)(this + 0x90) - *(float *)(lVar4 + 0x80)) * 0.5;
  if (DAT_00683944 < ABS(fVar5 - *(float *)(lVar3 + 0x108))) {
    *(undefined4 *)(lVar3 + 0x124) = 0;
  }
  *(undefined1 *)(lVar3 + 0x104) = 1;
  *(float *)(lVar3 + 0x108) = fVar5;
  if (fVar2 < ABS(fVar6 - *(float *)(lVar3 + 0x134))) {
    *(undefined4 *)(lVar3 + 0x150) = 0;
  }
  *(undefined1 *)(lVar3 + 0x130) = 1;
  *(float *)(lVar3 + 0x134) = fVar6;
  *(float *)(lVar3 + 0x100) = fVar5;
  *(float *)(lVar3 + 300) = fVar6;
  if (*(char *)(lVar4 + 0x3f8) != '\0') {
    local_40 = *(undefined8 *)(lVar3 + 0x7c);
    uVar7 = *(undefined8 *)
             (**(long **)(*(long *)(lVar4 + 0x118) + *(long *)(lVar4 + 0x400) * 0x10) + 8);
    local_50 = CONCAT44((float)((ulong)uVar7 >> 0x20) - (float)((ulong)local_40 >> 0x20) * 0.5,
                        (float)uVar7 - (float)local_40 * 0.5);
    Vector2::Rounded();
    local_48 = local_60[0];
    this_02 = *(Rectangle **)(this + 0x1b8);
    GUIView::ConvertRectFromView(this_02,(GUIView *)&local_48);
    local_78 = -*(float *)(*(long *)(this + 0x1b8) + 0x100);
    fStack_74 = -*(float *)(*(long *)(this + 0x1b8) + 300);
    Rectangle::TranslatedRectangle(aVStack_70);
    GUIScrollView::ScrollRectToVisible((GUIScrollView *)this_02,(Rectangle *)local_60,false);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


