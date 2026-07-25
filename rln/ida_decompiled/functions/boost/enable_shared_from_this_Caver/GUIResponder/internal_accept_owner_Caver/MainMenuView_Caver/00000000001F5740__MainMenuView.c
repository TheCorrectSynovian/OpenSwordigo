/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5740
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12MainMenuViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>(boost::shared_ptr<Caver::MainMenuView> const*,Caver::MainMenuView *)
 *
 * Callers: 1
 *   0x000000000036FA90  boost::shared_ptr<Caver::MainMenuView>::shared_ptr<Caver::MainMenuView>(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x000000000036FB9C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>(boost::shared_ptr<Caver::MainMenuView> const*,Caver::MainMenuView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5748 string=0x00000000001F574C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MainMenuView,Caver::MainMenuView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12MainMenuViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

