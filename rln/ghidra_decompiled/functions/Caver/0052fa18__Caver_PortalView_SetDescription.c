/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0052fa18
 * Function: Caver::PortalView::SetDescription
 * Signature: undefined __thiscall SetDescription(PortalView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PortalView::SetDescription(std::string const&) */

void __thiscall Caver::PortalView::SetDescription(PortalView *this,string *param_1)

{
  StripeView::SetTitle(*(StripeView **)(this + 0x160),param_1);
  return;
}


