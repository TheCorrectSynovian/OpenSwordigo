/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8350
 * Mangled: ._ZN5Caver6Sprite9AddVertexERKNS_7Vector2ES3_RKNS_5ColorE
 * Demangled: Caver::Sprite::AddVertex(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Color const&)
 *
 * Callers: 3
 *   0x00000000004A99F4  Caver::GUIRoundedRect::CreateSprite(void)
 *   0x00000000004C749C  Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *   0x00000000004C7E68  Caver::Sprite::AddTriangleStrip(int,Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000004C7C14  Caver::Sprite::AddVertex(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Color const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8358 string=0x00000000001F835C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::AddVertex(
        Caver::Sprite *this,
        const Caver::Vector2 *a2,
        const Caver::Vector2 *a3,
        const Caver::Color *a4)
{
  return _ZN5Caver6Sprite9AddVertexERKNS_7Vector2ES3_RKNS_5ColorE(this, a2, a3, a4);
}

