/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052f9e8
 * Function: Caver::PortalView::SetGotoButtonVisible
 * Signature: undefined __thiscall SetGotoButtonVisible(PortalView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::SetGotoButtonVisible(bool) */

void __thiscall Caver::PortalView::SetGotoButtonVisible(PortalView *this,bool param_1)

{
  GUIView *this_00;
  
  this_00 = *(GUIView **)(this + 0x130);
  this_00[0xe4] = (GUIView)(~param_1 & 1);
  if ((~param_1 & 1U) == 0) {
    GUIView::AddPopupAnimation(this_00);
    return;
  }
  return;
}


