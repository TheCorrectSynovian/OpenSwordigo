/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E6BB8
 * Mangled: _ZN5Caver12PurchaseView17SetBuyButtonTitleERKSs
 * Demangled: Caver::PurchaseView::SetBuyButtonTitle(std::string const&)
 *
 * Callers: 1
 *   0x00000000001F98F0  Caver::PurchaseView::SetBuyButtonTitle(std::string const&)
 *
 * Callees: 2
 *   0x00000000001FC220  Caver::GUIButton::SetTitle(std::string const&)
 *   0x0000000000203960  Caver::PurchaseView::UpdateBuyButtonSize(void)
 *
 * Referenced strings: 3
 *   insn=0x00000000003E6BC4 string=0x00000000003E6BC8 "`"
 *   insn=0x00000000003E6BCC string=0x00000000001FC220 "0'"
 *   insn=0x00000000003E6BD8 string=0x00000000003E6BDC "as"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PurchaseView::SetBuyButtonTitle(Caver::GUIButton **a1)
{
  Caver::GUIButton::SetTitle(a1[37]);
  Caver::PurchaseView::UpdateBuyButtonSize((Caver::PurchaseView *)a1);
}

