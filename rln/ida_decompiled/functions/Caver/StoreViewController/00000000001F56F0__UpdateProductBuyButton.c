/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F56F0
 * Mangled: ._ZN5Caver19StoreViewController22UpdateProductBuyButtonERKSs
 * Demangled: Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *
 * Callers: 5
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000003F3CD8  Caver::StoreViewController::Update(float)
 *   0x00000000003F4210  Caver::StoreViewController::RestoreCompletion(std::vector<std::string,std::allocator<std::string>> const&,std::string const&)
 *   0x00000000003F4D1C  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *
 * Callees: 1
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F56F8 string=0x00000000001F56FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StoreViewController::UpdateProductBuyButton()
{
  return _ZN5Caver19StoreViewController22UpdateProductBuyButtonERKSs();
}

