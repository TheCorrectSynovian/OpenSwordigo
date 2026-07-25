/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F43C0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_20PortalViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PortalViewController,Caver::PortalViewController>(boost::shared_ptr<Caver::PortalViewController> const*,Caver::PortalViewController *)
 *
 * Callers: 1
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *
 * Callees: 1
 *   0x000000000036543C  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PortalViewController,Caver::PortalViewController>(boost::shared_ptr<Caver::PortalViewController> const*,Caver::PortalViewController *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F43C8 string=0x00000000001F43CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PortalViewController,Caver::PortalViewController>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver17GUIViewControllerEE22_internal_accept_ownerINS1_20PortalViewControllerES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

