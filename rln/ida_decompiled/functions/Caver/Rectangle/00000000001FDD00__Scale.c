/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD00
 * Mangled: ._ZN5Caver9Rectangle5ScaleERKNS_7Vector2E
 * Demangled: Caver::Rectangle::Scale(Caver::Vector2 const&)
 *
 * Callers: 2
 *   0x00000000004A9208  Caver::GUIAnimatedSprite::Update(float)
 *   0x00000000004C3008  Caver::Font::Scale(float)
 *
 * Callees: 1
 *   0x00000000004B1F40  Caver::Rectangle::Scale(Caver::Vector2 const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FDD04 string=0x00000000004B1F40 " "
 *   insn=0x00000000001FDD08 string=0x00000000001FDD0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::Scale(Caver::Rectangle *this, const Caver::Vector2 *a2)
{
  return _ZN5Caver9Rectangle5ScaleERKNS_7Vector2E(this, a2);
}

