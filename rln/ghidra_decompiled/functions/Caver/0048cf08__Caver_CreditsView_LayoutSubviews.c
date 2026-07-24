/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0048cf08
 * Function: Caver::CreditsView::LayoutSubviews
 * Signature: undefined __thiscall LayoutSubviews(CreditsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CreditsView::LayoutSubviews() */

void __thiscall Caver::CreditsView::LayoutSubviews(CreditsView *this)

{
  long lVar1;
  GUIView *this_00;
  float local_38;
  float fStack_34;
  undefined4 local_30;
  float local_2c;
  long local_28;
  
                    /* try { // try from 0048cf18 to 0058cfcb has its CatchHandler @ 0048cd94 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  GUIView::LayoutSubviews((GUIView *)this);
  this_00 = *(GUIView **)(this + 0x100);
  local_2c = *(float *)(this_00 + 0x80);
  local_30 = *(undefined4 *)(this_00 + 0x7c);
  local_38 = *(float *)(this + 0x84) + 0.0;
  fStack_34 = (*(float *)(this + 0x88) + *(float *)(this + 0x90)) - local_2c;
  GUIView::SetFrame(this_00,(Rectangle *)&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


