/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B990
 * Mangled: _ZN5Caver16RenderingContext19SetDepthTestEnabledEb
 * Demangled: Caver::RenderingContext::SetDepthTestEnabled(bool)
 *
 * Callers: 1
 *   0x0000000000202770  Caver::RenderingContext::SetDepthTestEnabled(bool)
 *
 * Callees: 2
 *   0x00000000001F3C70  .glEnable
 *   0x00000000001F5860  .glDisable
 *
 * Referenced strings: 7
 *   insn=0x000000000048B990 string=0x000000000048B994 "("
 *   insn=0x000000000048B998 string=0x000000000048B99C "A"
 *   insn=0x000000000048B99C string=0x000000000048B9A4 ""
 *   insn=0x000000000048B9A4 string=0x000000000048B9A8 " n"
 *   insn=0x000000000048B9A8 string=0x000000000048B9AC "A"
 *   insn=0x000000000048B9B0 string=0x00000000001F3C70 "P'"
 *   insn=0x000000000048B9B4 string=0x00000000001F5860 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetDepthTestEnabled(__int64 this, char a2)
{
  if ( (a2 & 1) != *(_BYTE *)(this + 116) )
  {
    *(_BYTE *)(this + 116) = a2 & 1;
    if ( (a2 & 1) != 0 )
      return glEnable();
    else
      return glDisable();
  }
  return this;
}

