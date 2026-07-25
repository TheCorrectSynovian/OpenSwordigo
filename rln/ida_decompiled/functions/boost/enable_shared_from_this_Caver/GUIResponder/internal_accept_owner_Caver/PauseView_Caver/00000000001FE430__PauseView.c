/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE430
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9PauseViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>(boost::shared_ptr<Caver::PauseView> const*,Caver::PauseView *)
 *
 * Callers: 1
 *   0x00000000003704B8  boost::shared_ptr<Caver::PauseView>::shared_ptr<Caver::PauseView>(Caver::PauseView *)
 *
 * Callees: 1
 *   0x00000000003705C4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>(boost::shared_ptr<Caver::PauseView> const*,Caver::PauseView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE438 string=0x00000000001FE43C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::PauseView,Caver::PauseView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9PauseViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

