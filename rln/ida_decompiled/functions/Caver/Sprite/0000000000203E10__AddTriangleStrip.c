/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203E10
 * Mangled: ._ZN5Caver6Sprite16AddTriangleStripEiPKNS_7Vector2ES3_RKNS_5ColorE
 * Demangled: Caver::Sprite::AddTriangleStrip(int,Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const&)
 *
 * Callers: 1
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004C7E68  Caver::Sprite::AddTriangleStrip(int,Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203E18 string=0x0000000000203E1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::AddTriangleStrip(
        Caver::Sprite *this,
        int a2,
        const Caver::Vector2 *a3,
        const Caver::Vector2 *a4,
        const Caver::Color *a5)
{
  return _ZN5Caver6Sprite16AddTriangleStripEiPKNS_7Vector2ES3_RKNS_5ColorE(this, a2, a3, a4, a5);
}

