/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002007F0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7ManaBarES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ManaBar,Caver::ManaBar>(boost::shared_ptr<Caver::ManaBar> const*,Caver::ManaBar *)
 *
 * Callers: 1
 *   0x00000000003D908C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(boost::shared_ptr<Caver::HealthBar> const*,Caver::HealthBar *)
 *
 * Callees: 1
 *   0x00000000003D92B8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ManaBar,Caver::ManaBar>(boost::shared_ptr<Caver::ManaBar> const*,Caver::ManaBar *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002007F8 string=0x00000000002007FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ManaBar,Caver::ManaBar>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_7ManaBarES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

