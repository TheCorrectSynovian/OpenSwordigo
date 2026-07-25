/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F72E0
 * Mangled: ._ZN5Caver27AndroidPurchaseStoreProductERKSs
 * Demangled: Caver::AndroidPurchaseStoreProduct(std::string const&)
 *
 * Callers: 1
 *   0x00000000004BDCC8  Caver::StoreController_Android::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&,Caver::TargetAction<void ()(std::string const&,bool,std::string const&)>)
 *
 * Callees: 1
 *   0x000000000047A450  Caver::AndroidPurchaseStoreProduct(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F72E8 string=0x00000000001F72EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AndroidPurchaseStoreProduct()
{
  return _ZN5Caver27AndroidPurchaseStoreProductERKSs();
}

