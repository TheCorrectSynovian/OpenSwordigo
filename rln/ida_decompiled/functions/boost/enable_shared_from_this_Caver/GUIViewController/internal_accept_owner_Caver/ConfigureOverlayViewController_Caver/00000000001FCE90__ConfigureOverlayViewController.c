/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCE90
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_30ConfigureOverlayViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>(boost::shared_ptr<Caver::ConfigureOverlayViewController> const*,Caver::ConfigureOverlayViewController *)
 *
 * Callers: 1
 *   0x0000000000345AD4  boost::shared_ptr<Caver::ConfigureOverlayViewController>::shared_ptr<Caver::ConfigureOverlayViewController>(Caver::ConfigureOverlayViewController *)
 *
 * Callees: 1
 *   0x0000000000347734  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>(boost::shared_ptr<Caver::ConfigureOverlayViewController> const*,Caver::ConfigureOverlayViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCE98 string=0x00000000001FCE9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::ConfigureOverlayViewController,Caver::ConfigureOverlayViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_30ConfigureOverlayViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

