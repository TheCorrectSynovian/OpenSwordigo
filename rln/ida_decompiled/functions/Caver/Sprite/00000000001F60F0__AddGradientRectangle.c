/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F60F0
 * Mangled: ._ZN5Caver6Sprite20AddGradientRectangleERKNS_9RectangleES3_RKN5boost10shared_ptrINS_13GradientColorEEE
 * Demangled: Caver::Sprite::AddGradientRectangle(Caver::Rectangle const&,Caver::Rectangle const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Callers: 1
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004C78A4  Caver::Sprite::AddGradientRectangle(Caver::Rectangle const&,Caver::Rectangle const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F60F8 string=0x00000000001F60FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::AddGradientRectangle(Caver::Sprite *this, Caver::Rectangle *a2)
{
  return _ZN5Caver6Sprite20AddGradientRectangleERKNS_9RectangleES3_RKN5boost10shared_ptrINS_13GradientColorEEE(this, a2);
}

