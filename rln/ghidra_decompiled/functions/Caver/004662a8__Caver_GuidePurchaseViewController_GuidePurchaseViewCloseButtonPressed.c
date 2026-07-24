/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004662a8
 * Function: Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed
 * Signature: undefined __thiscall GuidePurchaseViewCloseButtonPressed(GuidePurchaseViewController * this, GuidePurchaseView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* non-virtual thunk to
   Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(Caver::GuidePurchaseView*)
    */

void __thiscall
Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed
          (GuidePurchaseViewController *this,GuidePurchaseView *param_1)

{
  GuidePurchaseView::AnimateOut();
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + -0x20));
  return;
}


