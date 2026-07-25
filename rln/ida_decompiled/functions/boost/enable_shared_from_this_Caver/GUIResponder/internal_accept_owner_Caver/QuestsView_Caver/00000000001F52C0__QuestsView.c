/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F52C0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_10QuestsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::QuestsView,Caver::QuestsView>(boost::shared_ptr<Caver::QuestsView> const*,Caver::QuestsView *)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x0000000000347224  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::QuestsView,Caver::QuestsView>(boost::shared_ptr<Caver::QuestsView> const*,Caver::QuestsView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F52C8 string=0x00000000001F52CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::QuestsView,Caver::QuestsView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_10QuestsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

