/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B968
 * Mangled: _ZN5Caver16RenderingContext18SetCullFaceEnabledEb
 * Demangled: Caver::RenderingContext::SetCullFaceEnabled(bool)
 *
 * Callers: 1
 *   0x0000000000203880  Caver::RenderingContext::SetCullFaceEnabled(bool)
 *
 * Callees: 2
 *   0x00000000001F3C70  .glEnable
 *   0x00000000001F5860  .glDisable
 *
 * Referenced strings: 6
 *   insn=0x000000000048B968 string=0x000000000048B96C "("
 *   insn=0x000000000048B970 string=0x000000000048B974 "A"
 *   insn=0x000000000048B974 string=0x000000000048B97C ""
 *   insn=0x000000000048B980 string=0x000000000048B984 "A"
 *   insn=0x000000000048B988 string=0x00000000001F3C70 "P'"
 *   insn=0x000000000048B98C string=0x00000000001F5860 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RenderingContext::SetCullFaceEnabled(__int64 this, char a2)
{
  if ( (a2 & 1) != *(_BYTE *)(this + 115) )
  {
    *(_BYTE *)(this + 115) = a2 & 1;
    if ( (a2 & 1) != 0 )
      return glEnable();
    else
      return glDisable();
  }
  return this;
}

