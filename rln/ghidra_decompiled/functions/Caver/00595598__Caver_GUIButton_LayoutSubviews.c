/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00595598
 * Function: Caver::GUIButton::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(GUIButton * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::LayoutSubviews() */

void __thiscall Caver::GUIButton::LayoutSubviews(GUIButton *this)

{
  long lVar1;
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(GUIRoundedRect **)(this + 0x128) != (GUIRoundedRect *)0x0) {
    GUIRoundedRect::CreateWithOuterBounds
              (*(GUIRoundedRect **)(this + 0x128),(Rectangle *)(this + 0x84));
  }
  if (*(GUIRoundedRect **)(this + 0x130) != (GUIRoundedRect *)0x0) {
    GUIRoundedRect::CreateWithOuterBounds
              (*(GUIRoundedRect **)(this + 0x130),(Rectangle *)(this + 0x84));
  }
  if (*(GUIRoundedRect **)(this + 0x138) != (GUIRoundedRect *)0x0) {
    GUIRoundedRect::CreateWithOuterBounds
              (*(GUIRoundedRect **)(this + 0x138),(Rectangle *)(this + 0x84));
  }
  if (*(GUIView **)(this + 0x140) != (GUIView *)0x0) {
    local_30 = (*(float *)(this + 0x8c) - *(float *)(this + 0x1a0)) - *(float *)(this + 0x1a4);
    fStack_2c = (*(float *)(this + 0x90) - *(float *)(this + 0x1a8)) - *(float *)(this + 0x1ac);
    local_38 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x84) >> 0x20) +
                        *(float *)(this + 0x1a8),
                        (float)*(undefined8 *)(this + 0x84) + *(float *)(this + 0x1a0));
    GUIView::SetFrame(*(GUIView **)(this + 0x140),(Rectangle *)&local_38);
  }
  GUIView::LayoutSubviews((GUIView *)this);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00595658 to 0069566b has its CatchHandler @ 005946d8 */
  __stack_chk_fail();
}


