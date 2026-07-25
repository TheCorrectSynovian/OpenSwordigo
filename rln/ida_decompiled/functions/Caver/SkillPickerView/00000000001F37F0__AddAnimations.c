/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F37F0
 * Mangled: ._ZN5Caver15SkillPickerView13AddAnimationsEb
 * Demangled: Caver::SkillPickerView::AddAnimations(bool)
 *
 * Callers: 5
 *   0x000000000043D058  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x000000000043DFE0  Caver::SkillPickerView::Dismiss(void)
 *   0x000000000043E028  Caver::SkillPickerView::TouchBegan(Caver::FWTouch const&)
 *   0x000000000043E070  Caver::SkillPickerView::MenuItemSlotSelected(Caver::MenuItemSlot *)
 *   0x000000000043E2A0  Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000043D4B0  Caver::SkillPickerView::AddAnimations(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F37F8 string=0x00000000001F37FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillPickerView::AddAnimations(Caver::SkillPickerView *this, bool a2)
{
  return _ZN5Caver15SkillPickerView13AddAnimationsEb(this, a2);
}

