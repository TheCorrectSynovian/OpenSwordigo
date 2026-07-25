/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048B900
 * Mangled: _ZN5Caver16RenderingContext19SetTexturingEnabledEb
 * Demangled: Caver::RenderingContext::SetTexturingEnabled(bool)
 *
 * Callers: 1
 *   0x00000000001F3420  Caver::RenderingContext::SetTexturingEnabled(bool)
 *
 * Callees: 2
 *   0x00000000001F3C70  .glEnable
 *   0x00000000001F5860  .glDisable
 *
 * Referenced strings: 9
 *   insn=0x000000000048B900 string=0x000000000048B904 "("
 *   insn=0x000000000048B90C string=0x000000000048B910 "\t"
 *   insn=0x000000000048B910 string=0x000000000048B914 ""
 *   insn=0x000000000048B914 string=0x000000000048B918 "I"
 *   insn=0x000000000048B918 string=0x000000000048B920 "a"
 *   insn=0x000000000048B920 string=0x000000000048B924 " "
 *   insn=0x000000000048B920 string=0x000000000048B92C " "
 *   insn=0x000000000048B928 string=0x00000000001F3C70 "P'"
 *   insn=0x000000000048B930 string=0x00000000001F5860 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall Caver::RenderingContext::SetTexturingEnabled(int *this, char a2)
{
  int v2; // w9

  if ( (a2 & 1) != *((_BYTE *)this + 113) )
  {
    v2 = *this;
    *((_BYTE *)this + 113) = a2 & 1;
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

