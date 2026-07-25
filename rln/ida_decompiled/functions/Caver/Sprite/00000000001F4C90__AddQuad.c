/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4C90
 * Mangled: ._ZN5Caver6Sprite7AddQuadEPKNS_7Vector2ES3_PKNS_5ColorE
 * Demangled: Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *
 * Callers: 4
 *   0x00000000004C733C  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x00000000004C7614  Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Matrix4 const&,Caver::Color const&)
 *   0x00000000004C78A4  Caver::Sprite::AddGradientRectangle(Caver::Rectangle const&,Caver::Rectangle const&,boost::shared_ptr<Caver::GradientColor> const&)
 *   0x00000000004C7AA4  Caver::Sprite::AddLine(Caver::Vector2 const&,Caver::Vector2 const&,float,Caver::Rectangle const&,Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000004C749C  Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4C98 string=0x00000000001F4C9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::AddQuad(
        Caver::Sprite *this,
        const Caver::Vector2 *a2,
        const Caver::Vector2 *a3,
        const Caver::Color *a4)
{
  return _ZN5Caver6Sprite7AddQuadEPKNS_7Vector2ES3_PKNS_5ColorE(this, a2, a3, a4);
}

