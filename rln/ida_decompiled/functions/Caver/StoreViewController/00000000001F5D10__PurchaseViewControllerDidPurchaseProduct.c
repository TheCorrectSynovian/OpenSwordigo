/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5D10
 * Mangled: ._ZN5Caver19StoreViewController40PurchaseViewControllerDidPurchaseProductEPNS_22PurchaseViewControllerE
 * Demangled: Caver::StoreViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *
 * Callers: 1
 *   0x00000000003F4D1C  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *
 * Callees: 1
 *   0x00000000003F4D1C  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5D18 string=0x00000000001F5D1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::StoreViewController::PurchaseViewControllerDidPurchaseProduct()
{
  JUMPOUT(0x3F4E04);
}

