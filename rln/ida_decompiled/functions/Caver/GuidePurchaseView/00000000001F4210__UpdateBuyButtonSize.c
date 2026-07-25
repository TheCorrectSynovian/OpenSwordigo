/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4210
 * Mangled: ._ZN5Caver17GuidePurchaseView19UpdateBuyButtonSizeEv
 * Demangled: Caver::GuidePurchaseView::UpdateBuyButtonSize(void)
 *
 * Callers: 3
 *   0x00000000003662D0  Caver::GuidePurchaseViewController::SetBuyButtonEnabled(bool)
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *   0x0000000000404520  Caver::GuidePurchaseView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x0000000000404520  Caver::GuidePurchaseView::LayoutSubviews(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4218 string=0x00000000001F421C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GuidePurchaseView::UpdateBuyButtonSize(Caver::GuidePurchaseView *this)
{
  JUMPOUT(0x4049A8);
}

