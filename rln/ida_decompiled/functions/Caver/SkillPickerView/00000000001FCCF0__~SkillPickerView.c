/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCCF0
 * Mangled: ._ZN5Caver15SkillPickerViewD2Ev
 * Demangled: Caver::SkillPickerView::~SkillPickerView()
 *
 * Callers: 1
 *   0x000000000043E2A0  Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000043E2A0  Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCCF8 string=0x00000000001FCCFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SkillPickerView::~SkillPickerView(Caver::SkillPickerView *this)
{
  JUMPOUT(0x43E508);
}

