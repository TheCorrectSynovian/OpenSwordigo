/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9190
 * Mangled: ._ZN5Caver5Color38ColorByReversingAlphaPremultiplicationEv
 * Demangled: Caver::Color::ColorByReversingAlphaPremultiplication(void)
 *
 * Callers: 2
 *   0x000000000048AD94  Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x000000000048A6F0  Caver::Color::ColorByReversingAlphaPremultiplication(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9194 string=0x000000000048A6F0 "\t"
 *   insn=0x00000000001F9198 string=0x00000000001F919C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Color::ColorByReversingAlphaPremultiplication(Caver::Color *this)
{
  return _ZN5Caver5Color38ColorByReversingAlphaPremultiplicationEv(this);
}

