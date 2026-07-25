/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004980FC
 * Mangled: _ZN5Caver8GUILabel7AddTextERKSsNS_5ColorE
 * Demangled: Caver::GUILabel::AddText(std::string const&,Caver::Color)
 *
 * Callers: 1
 *   0x00000000001FF420  Caver::GUILabel::AddText(std::string const&,Caver::Color)
 *
 * Callees: 2
 *   0x00000000001F5CC0  Caver::GUILabel::AddText(std::string const&)
 *   0x00000000001FFD70  Caver::FontText::SetColor(Caver::Color const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000498108 string=0x000000000049810C "`"
 *   insn=0x000000000049812C string=0x00000000001F5CC0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUILabel::AddText(__int64 a1, int a2, Caver::Color *a3)
{
  Caver::FontText::SetColor(*(Caver::FontText **)(a1 + 288), a3);
  return Caver::GUILabel::AddText();
}

