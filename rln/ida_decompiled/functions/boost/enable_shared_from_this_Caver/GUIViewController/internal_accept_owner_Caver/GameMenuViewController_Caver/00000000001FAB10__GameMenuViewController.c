/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAB10
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_22GameMenuViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>(boost::shared_ptr<Caver::GameMenuViewController> const*,Caver::GameMenuViewController *)
 *
 * Callers: 1
 *   0x0000000000357024  boost::shared_ptr<Caver::GameMenuViewController>::shared_ptr<Caver::GameMenuViewController>(Caver::GameMenuViewController *)
 *
 * Callees: 1
 *   0x0000000000364F2C  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>(boost::shared_ptr<Caver::GameMenuViewController> const*,Caver::GameMenuViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAB18 string=0x00000000001FAB1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GameMenuViewController,Caver::GameMenuViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_22GameMenuViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

