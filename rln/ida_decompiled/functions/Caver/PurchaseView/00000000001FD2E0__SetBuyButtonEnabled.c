/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD2E0
 * Mangled: ._ZN5Caver12PurchaseView19SetBuyButtonEnabledEb
 * Demangled: Caver::PurchaseView::SetBuyButtonEnabled(bool)
 *
 * Callers: 2
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003EAF20  Caver::PurchaseViewController::EnableBuyButton(void)
 *
 * Callees: 1
 *   0x00000000003E6B00  Caver::PurchaseView::SetBuyButtonEnabled(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD2E8 string=0x00000000001FD2EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PurchaseView::SetBuyButtonEnabled(Caver::PurchaseView *this, bool a2)
{
  return _ZN5Caver12PurchaseView19SetBuyButtonEnabledEb(this, a2);
}

