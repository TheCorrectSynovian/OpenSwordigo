/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051ab64
 * Function: Caver::ItemInfoView::Dismiss
 * Signature: undefined __thiscall Dismiss(ItemInfoView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ItemInfoView::Dismiss() */

void __thiscall Caver::ItemInfoView::Dismiss(ItemInfoView *this)

{
  AddAnimations(this,true);
  GUIView::DismissModalView((GUIView *)this,(GUIView *)0x0);
  return;
}


