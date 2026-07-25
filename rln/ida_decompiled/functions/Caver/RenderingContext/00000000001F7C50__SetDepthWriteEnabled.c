/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7C50
 * Mangled: ._ZN5Caver16RenderingContext20SetDepthWriteEnabledEb
 * Demangled: Caver::RenderingContext::SetDepthWriteEnabled(bool)
 *
 * Callers: 1
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000048B9B8  Caver::RenderingContext::SetDepthWriteEnabled(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7C54 string=0x000000000048B9B8 "\t"
 *   insn=0x00000000001F7C58 string=0x00000000001F7C5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetDepthWriteEnabled(Caver::RenderingContext *this, bool a2)
{
  return _ZN5Caver16RenderingContext20SetDepthWriteEnabledEb(this, a2);
}

