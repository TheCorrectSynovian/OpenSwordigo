/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDF80
 * Mangled: ._ZN5boost20checked_array_deleteINS_10shared_ptrIN5Caver8GUILabelEEEEEvPT_
 * Demangled: boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>>(boost::shared_ptr<Caver::GUILabel> *)
 *
 * Callers: 2
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000043E2A0  Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000043E760  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDF88 string=0x00000000001FDF8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::checked_array_delete<boost::shared_ptr<Caver::GUILabel>>()
{
  JUMPOUT(0x43E884);
}

