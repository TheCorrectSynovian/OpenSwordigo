/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA0C0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_19StoreViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::StoreViewController,Caver::StoreViewController>(boost::shared_ptr<Caver::StoreViewController> const*,Caver::StoreViewController *)
 *
 * Callers: 1
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callees: 1
 *   0x0000000000347B00  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::StoreViewController,Caver::StoreViewController>(boost::shared_ptr<Caver::StoreViewController> const*,Caver::StoreViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA0C8 string=0x00000000001FA0CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::StoreViewController,Caver::StoreViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_19StoreViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

