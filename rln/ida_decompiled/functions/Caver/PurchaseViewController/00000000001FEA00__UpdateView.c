/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEA00
 * Mangled: ._ZN5Caver22PurchaseViewController10UpdateViewEv
 * Demangled: Caver::PurchaseViewController::UpdateView(void)
 *
 * Callers: 3
 *   0x00000000003E8354  Caver::PurchaseViewController::LoadView(void)
 *   0x00000000003EA4EC  Caver::PurchaseViewController::FetchProduct(std::string const&)
 *   0x00000000003EA940  Caver::PurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Callees: 1
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEA08 string=0x00000000001FEA0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::PurchaseViewController::UpdateView(Caver::PurchaseViewController *this)
{
  JUMPOUT(0x3E8C80);
}

