/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB9B0
 * Mangled: ._ZN5Caver19StoreViewController15PurchaseProductERKN5boost10shared_ptrINS_12StoreProductEEE
 * Demangled: Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callers: 1
 *   0x00000000003F2524  Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x00000000003F4B14  Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB9B8 string=0x00000000001FB9BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::StoreViewController::PurchaseProduct()
{
  return _ZN5Caver19StoreViewController15PurchaseProductERKN5boost10shared_ptrINS_12StoreProductEEE();
}

