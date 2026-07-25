/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5BC0
 * Mangled: ._ZN5Caver8FontText13TranslateLineEiRKNS_7Vector2E
 * Demangled: Caver::FontText::TranslateLine(int,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000004C6280  Caver::FontText::AlignHorizontally(Caver::GUITextAlignment)
 *
 * Callees: 1
 *   0x00000000004C6588  Caver::FontText::TranslateLine(int,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5BC8 string=0x00000000001F5BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontText::TranslateLine(Caver::FontText *this, int a2, const Caver::Vector2 *a3)
{
  return _ZN5Caver8FontText13TranslateLineEiRKNS_7Vector2E(this, a2, a3);
}

