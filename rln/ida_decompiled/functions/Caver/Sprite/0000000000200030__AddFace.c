/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200030
 * Mangled: ._ZN5Caver6Sprite7AddFaceEiii
 * Demangled: Caver::Sprite::AddFace(int,int,int)
 *
 * Callers: 2
 *   0x00000000004C749C  Caver::Sprite::AddQuad(Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const*)
 *   0x00000000004C7E68  Caver::Sprite::AddTriangleStrip(int,Caver::Vector2 const*,Caver::Vector2 const*,Caver::Color const&)
 *
 * Callees: 1
 *   0x00000000004C7D60  Caver::Sprite::AddFace(int,int,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200038 string=0x000000000020003C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::AddFace(Caver::Sprite *this, int a2, int a3, int a4)
{
  return _ZN5Caver6Sprite7AddFaceEiii(this, a2, a3, a4);
}

