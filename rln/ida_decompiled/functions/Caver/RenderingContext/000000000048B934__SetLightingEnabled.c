/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B934
 * Mangled: _ZN5Caver16RenderingContext18SetLightingEnabledEb
 * Demangled: Caver::RenderingContext::SetLightingEnabled(bool)
 *
 * Callers: 1
 *   0x00000000001FC9F0  Caver::RenderingContext::SetLightingEnabled(bool)
 *
 * Callees: 2
 *   0x00000000001F3C70  .glEnable
 *   0x00000000001F5860  .glDisable
 *
 * Referenced strings: 7
 *   insn=0x000000000048B934 string=0x000000000048B938 "("
 *   insn=0x000000000048B940 string=0x000000000048B944 "\t"
 *   insn=0x000000000048B944 string=0x000000000048B948 ""
 *   insn=0x000000000048B948 string=0x000000000048B94C "I"
 *   insn=0x000000000048B94C string=0x000000000048B954 "a"
 *   insn=0x000000000048B95C string=0x00000000001F3C70 "P'"
 *   insn=0x000000000048B964 string=0x00000000001F5860 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::RenderingContext::SetLightingEnabled(int *this, char a2)
{
  int v2; // w9

  if ( (a2 & 1) != *((_BYTE *)this + 114) )
  {
    v2 = *this;
    *((_BYTE *)this + 114) = a2 & 1;
    if ( !v2 )
    {
      if ( (a2 & 1) != 0 )
        return (int *)glEnable();
      else
        return (int *)glDisable();
    }
  }
  return this;
}

