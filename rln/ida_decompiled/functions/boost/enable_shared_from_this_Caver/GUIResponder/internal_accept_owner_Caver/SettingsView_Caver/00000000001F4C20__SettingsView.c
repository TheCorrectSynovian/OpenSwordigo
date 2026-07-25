/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4C20
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12SettingsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SettingsView,Caver::SettingsView>(boost::shared_ptr<Caver::SettingsView> const*,Caver::SettingsView *)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x0000000000347368  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SettingsView,Caver::SettingsView>(boost::shared_ptr<Caver::SettingsView> const*,Caver::SettingsView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4C28 string=0x00000000001F4C2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SettingsView,Caver::SettingsView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12SettingsViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

