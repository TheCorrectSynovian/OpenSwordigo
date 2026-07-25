/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEDB0
 * Mangled: ._ZN5Caver6Sprite23AddTransformedRectangleERKNS_9RectangleES3_RKNS_7Matrix4ERKNS_5ColorE
 * Demangled: Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Matrix4 const&,Caver::Color const&)
 *
 * Callers: 1
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004C7614  Caver::Sprite::AddTransformedRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Matrix4 const&,Caver::Color const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEDB8 string=0x00000000001FEDBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::AddTransformedRectangle(
        Caver::Sprite *this,
        const Caver::Rectangle *a2,
        const Caver::Rectangle *a3,
        const Caver::Matrix4 *a4,
        const Caver::Color *a5)
{
  return _ZN5Caver6Sprite23AddTransformedRectangleERKNS_9RectangleES3_RKNS_7Matrix4ERKNS_5ColorE(this, a2, a3, a4, a5);
}

