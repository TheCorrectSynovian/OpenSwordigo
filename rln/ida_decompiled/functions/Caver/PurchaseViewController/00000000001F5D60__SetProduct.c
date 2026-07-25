/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5D60
 * Mangled: ._ZN5Caver22PurchaseViewController10SetProductERKN5boost10shared_ptrINS_12StoreProductEEE
 * Demangled: Caver::PurchaseViewController::SetProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callers: 1
 *   0x00000000003F4B14  Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callees: 1
 *   0x00000000003EA940  Caver::PurchaseViewController::ProductRequestCompletion(std::string const&,boost::shared_ptr<Caver::StoreProduct> const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5D68 string=0x00000000001F5D6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::PurchaseViewController::SetProduct()
{
  JUMPOUT(0x3EAD7C);
}

