/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F39B0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_10PortalViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PortalView,Caver::PortalView>(boost::shared_ptr<Caver::PortalView> const*,Caver::PortalView *)
 *
 * Callers: 1
 *   0x0000000000371AF0  boost::shared_ptr<Caver::PortalView>::shared_ptr<Caver::PortalView>(Caver::PortalView *)
 *
 * Callees: 1
 *   0x0000000000371BFC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PortalView,Caver::PortalView>(boost::shared_ptr<Caver::PortalView> const*,Caver::PortalView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F39B8 string=0x00000000001F39BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PortalView,Caver::PortalView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_10PortalViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

