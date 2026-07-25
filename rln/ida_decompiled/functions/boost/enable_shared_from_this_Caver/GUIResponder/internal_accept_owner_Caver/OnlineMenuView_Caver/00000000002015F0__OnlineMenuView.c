/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002015F0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14OnlineMenuViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *
 * Callers: 1
 *   0x00000000003958B0  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::BadgeCountView,Caver::BadgeCountView>(boost::shared_ptr<Caver::BadgeCountView> const*,Caver::BadgeCountView *)
 *
 * Callees: 1
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002015F8 string=0x00000000002015FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_14OnlineMenuViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

