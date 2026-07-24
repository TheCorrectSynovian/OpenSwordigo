/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004e6bb8
 * Function: Caver::PurchaseView::SetBuyButtonTitle
 * Signature: undefined __thiscall SetBuyButtonTitle(PurchaseView * this, string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PurchaseView::SetBuyButtonTitle(std::string const&) */

void __thiscall Caver::PurchaseView::SetBuyButtonTitle(PurchaseView *this,string *param_1)

{
                    /* try { // try from 004e6bcc to 005e6bd3 has its CatchHandler @ 004e6c5c */
  GUIButton::SetTitle(*(GUIButton **)(this + 0x128),param_1);
  UpdateBuyButtonSize(this);
  return;
}


