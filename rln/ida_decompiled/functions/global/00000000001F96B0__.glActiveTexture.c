/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F96B0
 * Mangled: .glActiveTexture
 * Demangled: .glActiveTexture
 *
 * Callers: 2
 *   0x0000000000225D00  Caver::ModelComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x000000000048B4BC  Caver::RenderingContext::SetAlpha(float)
 *
 * Callees: 1
 *   0x00000000006FE828  glActiveTexture
 *
 * Referenced strings: 1
 *   insn=0x00000000001F96B8 string=0x00000000001F96BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glActiveTexture()
{
  return glActiveTexture();
}

