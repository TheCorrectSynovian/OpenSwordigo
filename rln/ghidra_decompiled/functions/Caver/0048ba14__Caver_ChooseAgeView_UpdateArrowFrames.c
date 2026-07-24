/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048ba14
 * Function: Caver::ChooseAgeView::UpdateArrowFrames
 * Signature: undefined __thiscall UpdateArrowFrames(ChooseAgeView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ChooseAgeView::UpdateArrowFrames() */

void __thiscall Caver::ChooseAgeView::UpdateArrowFrames(ChooseAgeView *this)

{
  long lVar1;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  undefined4 local_68;
  float fStack_64;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GUISlider::IndicatorCenter();
  local_48 = *(float *)(*(long *)(this + 0x138) + 0x7c);
  fStack_44 = *(float *)(*(long *)(this + 0x138) + 0x80);
  local_58 = CONCAT44((fStack_3c + (float)((ulong)DAT_00690d10 >> 0x20)) - fStack_44 * 0.5,
                      (local_40 + (float)DAT_00690d10) - local_48);
  GUIView::ConvertPointFromView((Vector2 *)this,(GUIView *)&local_58);
  Vector2::Rounded();
  local_50 = local_70;
  GUIView::SetFrame(*(GUIView **)(this + 0x138),(Rectangle *)&local_50);
  local_68 = *(undefined4 *)(*(long *)(this + 0x148) + 0x7c);
  fStack_64 = *(float *)(*(long *)(this + 0x148) + 0x80);
  local_78 = local_40 + 16.0;
  fStack_74 = (fStack_3c + -1.0) - fStack_64 * 0.5;
  GUIView::ConvertPointFromView((Vector2 *)this,(GUIView *)&local_78);
  Vector2::Rounded();
  local_70 = local_58;
  GUIView::SetFrame(*(GUIView **)(this + 0x148),(Rectangle *)&local_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


