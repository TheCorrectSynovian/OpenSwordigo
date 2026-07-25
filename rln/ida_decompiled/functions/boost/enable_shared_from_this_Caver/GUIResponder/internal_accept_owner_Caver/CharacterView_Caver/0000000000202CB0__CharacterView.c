/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202CB0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13CharacterViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CharacterView,Caver::CharacterView>(boost::shared_ptr<Caver::CharacterView> const*,Caver::CharacterView *)
 *
 * Callers: 1
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *
 * Callees: 1
 *   0x00000000003474AC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CharacterView,Caver::CharacterView>(boost::shared_ptr<Caver::CharacterView> const*,Caver::CharacterView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202CB8 string=0x0000000000202CBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::CharacterView,Caver::CharacterView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_13CharacterViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

