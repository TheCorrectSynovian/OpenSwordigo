/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203880
 * Mangled: ._ZN5Caver16RenderingContext18SetCullFaceEnabledEb
 * Demangled: Caver::RenderingContext::SetCullFaceEnabled(bool)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048B968  Caver::RenderingContext::SetCullFaceEnabled(bool)
 *
 * Referenced strings: 2
 *   insn=0x0000000000203884 string=0x000000000048B968 "\t"
 *   insn=0x0000000000203888 string=0x000000000020388C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetCullFaceEnabled(Caver::RenderingContext *this, bool a2)
{
  return _ZN5Caver16RenderingContext18SetCullFaceEnabledEb(this, a2);
}

