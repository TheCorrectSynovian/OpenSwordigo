/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F79B0
 * Mangled: ._ZN5Caver13GradientColor46GradientColorByReversingAlphaPremultiplicationEv
 * Demangled: Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *
 * Callers: 1
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x000000000048AD94  Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F79B8 string=0x00000000001F79BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GradientColor::GradientColorByReversingAlphaPremultiplication(Caver::GradientColor *this)
{
  return _ZN5Caver13GradientColor46GradientColorByReversingAlphaPremultiplicationEv(this);
}

