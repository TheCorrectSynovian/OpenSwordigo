/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203960
 * Mangled: ._ZN5Caver12PurchaseView19UpdateBuyButtonSizeEv
 * Demangled: Caver::PurchaseView::UpdateBuyButtonSize(void)
 *
 * Callers: 2
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003E6BB8  Caver::PurchaseView::SetBuyButtonTitle(std::string const&)
 *
 * Callees: 1
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203968 string=0x000000000020396C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PurchaseView::UpdateBuyButtonSize(Caver::PurchaseView *this)
{
  JUMPOUT(0x3E6A10);
}

