/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC800
 * Mangled: ._ZN5Caver15SkillPickerView15SetSlotSelectedEib
 * Demangled: Caver::SkillPickerView::SetSlotSelected(int,bool)
 *
 * Callers: 3
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000043E070  Caver::SkillPickerView::MenuItemSlotSelected(Caver::MenuItemSlot *)
 *   0x000000000043E2A0  Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000043D058  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC808 string=0x00000000001FC80C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillPickerView::SetSlotSelected(Caver::SkillPickerView *this, int a2, bool a3)
{
  return _ZN5Caver15SkillPickerView15SetSlotSelectedEib(this, a2, a3);
}

