/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCF80
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_22PurchaseViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *
 * Callers: 1
 *   0x00000000003F4D1C  boost::shared_ptr<Caver::PurchaseViewController>::shared_ptr<Caver::PurchaseViewController>(Caver::PurchaseViewController *)
 *
 * Callees: 1
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCF88 string=0x00000000001FCF8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_22PurchaseViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

