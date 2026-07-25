/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201BA0
 * Mangled: ._ZN5Caver6Sprite14TranslateFacesEiiRKNS_7Vector2E
 * Demangled: Caver::Sprite::TranslateFaces(int,int,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000004C6588  Caver::FontText::TranslateLine(int,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004C84D4  Caver::Sprite::TranslateFaces(int,int,Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201BA4 string=0x00000000004C84D4 "_"
 *   insn=0x0000000000201BA8 string=0x0000000000201BAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::TranslateFaces(Caver::Sprite *this, int a2, int a3, const Caver::Vector2 *a4)
{
  return _ZN5Caver6Sprite14TranslateFacesEiiRKNS_7Vector2E(this, a2, a3, a4);
}

