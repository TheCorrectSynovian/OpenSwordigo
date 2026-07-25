/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B9B8
 * Mangled: _ZN5Caver16RenderingContext20SetDepthWriteEnabledEb
 * Demangled: Caver::RenderingContext::SetDepthWriteEnabled(bool)
 *
 * Callers: 1
 *   0x00000000001F7C50  Caver::RenderingContext::SetDepthWriteEnabled(bool)
 *
 * Callees: 1
 *   0x00000000001FB820  .glDepthMask
 *
 * Referenced strings: 4
 *   insn=0x000000000048B9B8 string=0x000000000048B9BC "("
 *   insn=0x000000000048B9C0 string=0x000000000048B9C4 "A"
 *   insn=0x000000000048B9C4 string=0x000000000048B9CC ""
 *   insn=0x000000000048B9D4 string=0x00000000001FB820 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetDepthWriteEnabled(__int64 this, char a2)
{
  if ( (a2 & 1) != *(_BYTE *)(this + 117) )
  {
    *(_BYTE *)(this + 117) = a2 & 1;
    return glDepthMask();
  }
  return this;
}

