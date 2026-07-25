/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4910
 * Mangled: ._ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver12MenuItemSlotEEEEEvPT_
 * Demangled: boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *
 * Callers: 2
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000043E2A0  Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000043E760  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4918 string=0x00000000001F491C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(void *a1)
{
  return _ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver12MenuItemSlotEEEEEvPT_(a1);
}

