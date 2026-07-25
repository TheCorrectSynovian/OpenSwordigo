/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9B20
 * Mangled: ._ZN5Caver12PurchaseView14SetProductInfoERKSsSt6vectorISsSaISsEES2_f
 * Demangled: Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *
 * Callers: 1
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9B28 string=0x00000000001F9B2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PurchaseView::SetProductInfo()
{
  return _ZN5Caver12PurchaseView14SetProductInfoERKSsSt6vectorISsSaISsEES2_f();
}

