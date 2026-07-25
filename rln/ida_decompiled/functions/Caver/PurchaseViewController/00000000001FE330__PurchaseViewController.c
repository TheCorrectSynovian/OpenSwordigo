/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE330
 * Mangled: ._ZN5Caver22PurchaseViewControllerC2Ev
 * Demangled: Caver::PurchaseViewController::PurchaseViewController(void)
 *
 * Callers: 1
 *   0x00000000003F4B14  Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callees: 1
 *   0x00000000003E8308  Caver::PurchaseViewController::PurchaseViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE338 string=0x00000000001FE33C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::PurchaseViewController::PurchaseViewController(Caver::PurchaseViewController *this)
{
  return _ZN5Caver22PurchaseViewControllerC2Ev(this);
}

