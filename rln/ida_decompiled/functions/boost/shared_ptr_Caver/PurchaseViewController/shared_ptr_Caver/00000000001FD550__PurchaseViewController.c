/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD550
 * Mangled: ._ZN5boost10shared_ptrIN5Caver22PurchaseViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *
 * Callers: 1
 *   0x00000000003F4B14  Caver::StoreViewController::PurchaseProduct(boost::shared_ptr<Caver::StoreProduct> const&)
 *
 * Callees: 1
 *   0x00000000003F4D1C  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD558 string=0x00000000001FD55C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>()
{
  return _ZN5boost10shared_ptrIN5Caver22PurchaseViewControllerEEC2IS2_EEPT_();
}

