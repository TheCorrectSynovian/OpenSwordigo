/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3420
 * Mangled: ._ZN5Caver16RenderingContext19SetTexturingEnabledEb
 * Demangled: Caver::RenderingContext::SetTexturingEnabled(bool)
 *
 * Callers: 1
 *   0x000000000046E364  Caver::SceneGridLayer::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048B900  Caver::RenderingContext::SetTexturingEnabled(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3424 string=0x000000000048B900 "\t"
 *   insn=0x00000000001F3428 string=0x00000000001F342C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetTexturingEnabled(Caver::RenderingContext *this, bool a2)
{
  return _ZN5Caver16RenderingContext19SetTexturingEnabledEb(this, a2);
}

