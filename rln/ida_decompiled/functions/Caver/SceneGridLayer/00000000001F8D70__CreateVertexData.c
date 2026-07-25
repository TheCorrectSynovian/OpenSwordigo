/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8D70
 * Mangled: ._ZN5Caver14SceneGridLayer16CreateVertexDataEv
 * Demangled: Caver::SceneGridLayer::CreateVertexData(void)
 *
 * Callers: 2
 *   0x000000000046D924  Caver::SceneGridLayer::Init(Caver::Rectangle const&,float,float,float,float)
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000046DA64  Caver::SceneGridLayer::CreateVertexData(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8D78 string=0x00000000001F8D7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneGridLayer::CreateVertexData(Caver::SceneGridLayer *this)
{
  return _ZN5Caver14SceneGridLayer16CreateVertexDataEv(this);
}

