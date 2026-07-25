/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202050
 * Mangled: ._ZN5Caver17GuidePurchaseView10AnimateOutEv
 * Demangled: Caver::GuidePurchaseView::AnimateOut(void)
 *
 * Callers: 3
 *   0x0000000000366280  Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(Caver::GuidePurchaseView *)
 *   0x00000000003662A8  `non-virtual thunk to'Caver::GuidePurchaseViewController::GuidePurchaseViewCloseButtonPressed(Caver::GuidePurchaseView *)
 *   0x0000000000367C84  Caver::GuidePurchaseViewController::HandlePurchaseSuccess(void)
 *
 * Callees: 1
 *   0x0000000000404A8C  Caver::GuidePurchaseView::AnimateIn(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202058 string=0x000000000020205C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GuidePurchaseView::AnimateOut(Caver::GuidePurchaseView *this)
{
  JUMPOUT(0x4056D0);
}

