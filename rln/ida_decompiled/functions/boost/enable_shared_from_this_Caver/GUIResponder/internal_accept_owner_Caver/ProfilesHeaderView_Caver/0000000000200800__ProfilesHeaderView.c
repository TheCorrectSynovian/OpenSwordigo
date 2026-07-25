/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200800
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_18ProfilesHeaderViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilesHeaderView,Caver::ProfilesHeaderView>(boost::shared_ptr<Caver::ProfilesHeaderView> const*,Caver::ProfilesHeaderView *)
 *
 * Callers: 1
 *   0x00000000003A4454  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilePanelView,Caver::ProfilePanelView>(boost::shared_ptr<Caver::ProfilePanelView> const*,Caver::ProfilePanelView *)
 *
 * Callees: 1
 *   0x00000000003A4680  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilesHeaderView,Caver::ProfilesHeaderView>(boost::shared_ptr<Caver::ProfilesHeaderView> const*,Caver::ProfilesHeaderView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200808 string=0x000000000020080C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfilesHeaderView,Caver::ProfilesHeaderView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_18ProfilesHeaderViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

