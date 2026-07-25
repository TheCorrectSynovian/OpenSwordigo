/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F98F0
 * Mangled: ._ZN5Caver12PurchaseView17SetBuyButtonTitleERKSs
 * Demangled: Caver::PurchaseView::SetBuyButtonTitle(std::string const&)
 *
 * Callers: 1
 *   0x00000000003EAF20  Caver::PurchaseViewController::EnableBuyButton(void)
 *
 * Callees: 1
 *   0x00000000003E6BB8  Caver::PurchaseView::SetBuyButtonTitle(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F98F8 string=0x00000000001F98FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PurchaseView::SetBuyButtonTitle()
{
  return _ZN5Caver12PurchaseView17SetBuyButtonTitleERKSs();
}

