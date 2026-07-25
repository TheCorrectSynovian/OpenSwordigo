/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA480
 * Mangled: ._ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12MenuItemSlotES5_EEvPKNS_10shared_ptrIT_EEPT0_
 * Demangled: boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(boost::shared_ptr<Caver::MenuItemSlot> const*,Caver::MenuItemSlot *)
 *
 * Callers: 1
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *
 * Callees: 1
 *   0x0000000000400394  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>(boost::shared_ptr<Caver::MenuItemSlot> const*,Caver::MenuItemSlot *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA488 string=0x00000000001FA48C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MenuItemSlot,Caver::MenuItemSlot>()
{
  return _ZNK5boost23enable_shared_from_thisIN5Caver12GUIResponderEE22_internal_accept_ownerINS1_12MenuItemSlotES5_EEvPKNS_10shared_ptrIT_EEPT0_();
}

