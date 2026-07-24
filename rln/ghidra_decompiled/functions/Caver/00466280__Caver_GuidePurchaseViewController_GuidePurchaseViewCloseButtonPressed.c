/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00466280
 * Function: Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed
 * Signature: undefined __cdecl GuidePurchaseViewCloseButtonPressed(GuidePurchaseView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(Caver::GuidePurchaseView*)
    */

void Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed
               (GuidePurchaseView *param_1)

{
  GuidePurchaseView::AnimateOut();
  GUIViewController::DismissModalViewController(*(GUIViewController **)(param_1 + 0x28));
  return;
}


