/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043AF84
 * Mangled: _ZN5Caver12SettingsView6UpdateEf
 * Demangled: Caver::SettingsView::Update(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE6C0  Caver::GUIView::Update(float)
 *
 * Referenced strings: 3
 *   insn=0x000000000043AF90 string=0x000000000043AF94 ""
 *   insn=0x000000000043AF9C string=0x000000000043AFA0 "`"
 *   insn=0x000000000043AFA4 string=0x000000000043AFA8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::SettingsView::Update(Caver::SettingsView *this, float a2)
{
  float result; // s0

  Caver::GUIView::Update(this, a2);
  result = *((float *)this + 110) + a2;
  *((float *)this + 110) = result;
  return result;
}

