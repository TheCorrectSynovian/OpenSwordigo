/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4740
 * Mangled: ._ZN5Caver15SkillPickerViewC2Ev
 * Demangled: Caver::SkillPickerView::SkillPickerView(void)
 *
 * Callers: 1
 *   0x00000000003724C4  Caver::SkillPickerViewController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000043BA78  Caver::SkillPickerView::SkillPickerView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4748 string=0x00000000001F474C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillPickerView::SkillPickerView(Caver::SkillPickerView *this)
{
  return _ZN5Caver15SkillPickerViewC2Ev(this);
}

