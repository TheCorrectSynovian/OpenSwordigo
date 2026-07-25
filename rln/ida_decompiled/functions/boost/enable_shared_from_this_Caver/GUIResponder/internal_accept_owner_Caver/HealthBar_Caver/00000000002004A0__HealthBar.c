/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002004A0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9HealthBarES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(boost::shared_ptr<Caver::HealthBar> const*,Caver::HealthBar *)
 *
 * Callers: 1
 *   0x00000000003D8E60  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>(boost::shared_ptr<Caver::ConsumableItemView> const*,Caver::ConsumableItemView *)
 *
 * Callees: 1
 *   0x00000000003D908C  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>(boost::shared_ptr<Caver::HealthBar> const*,Caver::HealthBar *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002004A8 string=0x00000000002004AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::HealthBar,Caver::HealthBar>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_9HealthBarES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

