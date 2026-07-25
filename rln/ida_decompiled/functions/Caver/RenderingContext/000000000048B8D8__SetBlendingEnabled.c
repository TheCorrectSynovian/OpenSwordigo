/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B8D8
 * Mangled: _ZN5Caver16RenderingContext18SetBlendingEnabledEb
 * Demangled: Caver::RenderingContext::SetBlendingEnabled(bool)
 *
 * Callers: 1
 *   0x00000000001FC450  Caver::RenderingContext::SetBlendingEnabled(bool)
 *
 * Callees: 2
 *   0x00000000001F3C70  .glEnable
 *   0x00000000001F5860  .glDisable
 *
 * Referenced strings: 7
 *   insn=0x000000000048B8D8 string=0x000000000048B8DC "("
 *   insn=0x000000000048B8E0 string=0x000000000048B8E4 "A"
 *   insn=0x000000000048B8E4 string=0x000000000048B8EC ""
 *   insn=0x000000000048B8EC string=0x000000000048B8F0 "@|"
 *   insn=0x000000000048B8F0 string=0x000000000048B8F4 "A"
 *   insn=0x000000000048B8F8 string=0x00000000001F3C70 "P'"
 *   insn=0x000000000048B8FC string=0x00000000001F5860 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetBlendingEnabled(__int64 this, char a2)
{
  if ( (a2 & 1) != *(_BYTE *)(this + 112) )
  {
    *(_BYTE *)(this + 112) = a2 & 1;
    if ( (a2 & 1) != 0 )
      return glEnable();
    else
      return glDisable();
  }
  return this;
}

