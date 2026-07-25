/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201BF0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_23GUINavigationControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GUINavigationController,Caver::GUINavigationController>(boost::shared_ptr<Caver::GUINavigationController> const*,Caver::GUINavigationController *)
 *
 * Callers: 1
 *   0x0000000000211B1C  boost::shared_ptr<Caver::GUINavigationController>::shared_ptr<Caver::GUINavigationController>(Caver::GUINavigationController *)
 *
 * Callees: 1
 *   0x0000000000211C28  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GUINavigationController,Caver::GUINavigationController>(boost::shared_ptr<Caver::GUINavigationController> const*,Caver::GUINavigationController *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201BF8 string=0x0000000000201BFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::GUINavigationController,Caver::GUINavigationController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_23GUINavigationControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

