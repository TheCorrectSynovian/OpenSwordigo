/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA5C0
 * Mangled: .glBlendFunc
 * Demangled: .glBlendFunc
 *
 * Callers: 4
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000048AFB0  Caver::RenderingContext::RenderingContext(Caver::RenderingAPI)
 *   0x000000000048B874  Caver::RenderingContext::SetBlendFunc(uint,uint)
 *   0x000000000048B8A0  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *
 * Callees: 1
 *   0x00000000006FE8B8  glBlendFunc
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA5C8 string=0x00000000001FA5CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glBlendFunc()
{
  return glBlendFunc();
}

