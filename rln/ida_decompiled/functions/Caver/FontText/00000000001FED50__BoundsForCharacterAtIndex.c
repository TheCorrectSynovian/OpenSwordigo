/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FED50
 * Mangled: ._ZN5Caver8FontText25BoundsForCharacterAtIndexEi
 * Demangled: Caver::FontText::BoundsForCharacterAtIndex(int)
 *
 * Callers: 1
 *   0x000000000049823C  Caver::GUILabel::BoundsForCharacterAtIndex(int)
 *
 * Callees: 1
 *   0x00000000004C6684  Caver::FontText::BoundsForCharacterAtIndex(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FED58 string=0x00000000001FED5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontText::BoundsForCharacterAtIndex(Caver::FontText *this, int a2)
{
  return _ZN5Caver8FontText25BoundsForCharacterAtIndexEi(this, a2);
}

