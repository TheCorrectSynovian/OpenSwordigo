/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4A30
 * Mangled: ._ZN5Caver6Sprite16CreateVertexDataEiPKNS_7Vector2EiPt
 * Demangled: Caver::Sprite::CreateVertexData(int,Caver::Vector2 const*,int,ushort *)
 *
 * Callers: 1
 *   0x00000000004C81BC  Caver::Sprite::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *
 * Callees: 1
 *   0x00000000004C82F8  Caver::Sprite::CreateVertexData(int,Caver::Vector2 const*,int,ushort *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4A38 string=0x00000000001F4A3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::CreateVertexData(
        Caver::Sprite *this,
        int a2,
        const Caver::Vector2 *a3,
        int a4,
        unsigned __int16 *a5)
{
  return _ZN5Caver6Sprite16CreateVertexDataEiPKNS_7Vector2EiPt(this, a2, a3, a4, a5);
}

