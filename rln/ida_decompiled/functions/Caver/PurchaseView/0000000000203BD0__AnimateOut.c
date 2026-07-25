/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203BD0
 * Mangled: ._ZN5Caver12PurchaseView10AnimateOutEv
 * Demangled: Caver::PurchaseView::AnimateOut(void)
 *
 * Callers: 2
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003EB75C  Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Callees: 1
 *   0x00000000003E6BE0  Caver::PurchaseView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203BD8 string=0x0000000000203BDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PurchaseView::AnimateOut(Caver::PurchaseView *this)
{
  JUMPOUT(0x3E7534);
}

