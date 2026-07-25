/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043DFD8
 * Mangled: _ZN5Caver15SkillPickerView6UpdateEf
 * Demangled: Caver::SkillPickerView::Update(float)
 *
 * Callers: 1
 *   0x000000000043D4B0  Caver::SkillPickerView::AddAnimations(bool)
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillPickerView::Update(Caver::GUIView *this, float a2)
{
  return Caver::GUIView::Update(this, a2);
}

