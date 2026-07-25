/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5DE0
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_18ConsumableItemViewES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>(boost::shared_ptr<Caver::ConsumableItemView> const*,Caver::ConsumableItemView *)
 *
 * Callers: 1
 *   0x00000000003D8D54  boost::shared_ptr<Caver::ConsumableItemView>::shared_ptr<Caver::ConsumableItemView>(Caver::ConsumableItemView *)
 *
 * Callees: 1
 *   0x00000000003D8E60  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>(boost::shared_ptr<Caver::ConsumableItemView> const*,Caver::ConsumableItemView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5DE8 string=0x00000000001F5DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConsumableItemView,Caver::ConsumableItemView>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_18ConsumableItemViewES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

