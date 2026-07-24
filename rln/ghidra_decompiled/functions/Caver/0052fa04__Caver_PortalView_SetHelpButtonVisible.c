/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052fa04
 * Function: Caver::PortalView::SetHelpButtonVisible
 * Signature: undefined __thiscall SetHelpButtonVisible(PortalView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::SetHelpButtonVisible(bool) */

void __thiscall Caver::PortalView::SetHelpButtonVisible(PortalView *this,bool param_1)

{
  *(byte *)(*(long *)(this + 0x140) + 0xe4) = ~param_1 & 1;
  return;
}


