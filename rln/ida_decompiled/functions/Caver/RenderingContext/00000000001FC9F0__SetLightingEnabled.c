/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC9F0
 * Mangled: ._ZN5Caver16RenderingContext18SetLightingEnabledEb
 * Demangled: Caver::RenderingContext::SetLightingEnabled(bool)
 *
 * Callers: 2
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048B934  Caver::RenderingContext::SetLightingEnabled(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC9F4 string=0x000000000048B934 "\t"
 *   insn=0x00000000001FC9F8 string=0x00000000001FC9FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetLightingEnabled(Caver::RenderingContext *this, bool a2)
{
  return _ZN5Caver16RenderingContext18SetLightingEnabledEb(this, a2);
}

