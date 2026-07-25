/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9D00
 * Mangled: ._ZN5Caver16RenderingContext12WhiteTextureEv
 * Demangled: Caver::RenderingContext::WhiteTexture(void)
 *
 * Callers: 1
 *   0x000000000048B4BC  Caver::RenderingContext::SetAlpha(float)
 *
 * Callees: 1
 *   0x000000000048B4BC  Caver::RenderingContext::SetAlpha(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9D08 string=0x00000000001F9D0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::RenderingContext::WhiteTexture(Caver::RenderingContext *this)
{
  JUMPOUT(0x48B660);
}

