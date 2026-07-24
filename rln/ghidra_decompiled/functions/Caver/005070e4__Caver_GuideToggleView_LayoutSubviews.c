/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005070e4
 * Function: Caver::GuideToggleView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GuideToggleView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuideToggleView::LayoutSubviews() */

void __thiscall Caver::GuideToggleView::LayoutSubviews(GuideToggleView *this)

{
  long lVar1;
  long lVar2;
  GUIView *this_00;
  float fVar3;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  this_00 = *(GUIView **)(this + 0x108);
  Vector2::Rounded();
  local_40 = *(undefined8 *)(this_00 + 0x7c);
  GUIView::SetFrame(this_00,(Rectangle *)&local_48);
  local_48 = *(undefined8 *)(this + 0x84);
  local_40 = CONCAT44(*(float *)(this + 0x90) + -2.0,
                      (*(float *)(*(long *)(this + 0x108) + 0x74) + -2.0) - (float)local_48);
  GUIView::SetFrame(*(GUIView **)(this + 0xf8),(Rectangle *)&local_48);
  lVar2 = *(long *)(this + 0x108);
  fVar3 = *(float *)(lVar2 + 0x84) + -10.0;
  *(undefined4 *)(lVar2 + 0x98) = *(undefined4 *)(lVar2 + 0x88);
  *(float *)(lVar2 + 0x94) = fVar3;
  *(float *)(lVar2 + 0x9c) =
       (fVar3 + ((*(float *)(lVar2 + 0x84) + *(float *)(lVar2 + 0x8c)) - fVar3) + 10.0) - fVar3;
  *(undefined4 *)(lVar2 + 0xa0) = *(undefined4 *)(lVar2 + 0x90);
  GUIView::SetTouchBoundsToIncludeSubviewTouchBounds((GUIView *)this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


