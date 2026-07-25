/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C6684
 * Mangled: _ZN5Caver8FontText25BoundsForCharacterAtIndexEi
 * Demangled: Caver::FontText::BoundsForCharacterAtIndex(int)
 *
 * Callers: 1
 *   0x00000000001FED50  Caver::FontText::BoundsForCharacterAtIndex(int)
 *
 * Callees: 1
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *
 * Referenced strings: 11
 *   insn=0x00000000004C6684 string=0x00000000004C6688 "!"
 *   insn=0x00000000004C6688 string=0x00000000004C668C "*1K"
 *   insn=0x00000000004C6688 string=0x00000000004C66CC "*"
 *   insn=0x00000000004C668C string=0x00000000004C6690 "-"
 *   insn=0x00000000004C66A0 string=0x00000000004C66A4 ""
 *   insn=0x00000000004C66A4 string=0x00000000004C66A8 "+|@"
 *   insn=0x00000000004C66B8 string=0x00000000004C66BC "i)\t"
 *   insn=0x00000000004C66BC string=0x00000000004C66C0 " A"
 *   insn=0x00000000004C66CC string=0x00000000004C66D0 "@1"
 *   insn=0x00000000004C66D4 string=0x00000000004C66D8 "b"
 *   insn=0x00000000004C66D8 string=0x00000000001F9C60 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__usercall Caver::FontText::BoundsForCharacterAtIndex@<X0>(__int64 *this@<X0>, int a2@<W1>, __int64 *a3@<X8>)
{
  __int64 v3; // x10

  if ( a2 < 0 )
    return Caver::Rectangle::TranslatedRectangle(
             a3,
             (Caver::Rectangle *)(*this + 76),
             (const Caver::Vector2 *)(this + 28));
  v3 = this[22];
  if ( 0x8E38E38E38E38E39LL * ((this[23] - v3) >> 2) <= a2 )
    return Caver::Rectangle::TranslatedRectangle(
             a3,
             (Caver::Rectangle *)(*this + 76),
             (const Caver::Vector2 *)(this + 28));
  *(_OWORD *)a3 = *(_OWORD *)(v3 + 36LL * a2 + 4);
  return this;
}

