/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DEC0
 * Mangled: sub_53DEC0
 * Demangled: sub_53DEC0
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5F40  .fseek
 *   0x00000000001FC310  .ftell
 *
 * Referenced strings: 6
 *   insn=0x000000000053DED8 string=0x000000000053DEE8 "`"@"
 *   insn=0x000000000053DEDC string=0x000000000053DEE0 "B"
 *   insn=0x000000000053DEE0 string=0x000000000053DEE4 "B"
 *   insn=0x000000000053DEEC string=0x00000000001F5F40 "P'"
 *   insn=0x000000000053DEF4 string=0x000000000053DEF8 "`"@"
 *   insn=0x000000000053DEFC string=0x00000000001FC310 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53DEC0(__int64 a1, __int64 a2, int a3)
{
  int v4; // w2
  int v6; // w0
  __int64 v7; // x1

  v4 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
      v4 = 1;
    else
      v4 = 2;
  }
  v6 = fseek(*(FILE **)(a1 + 64), a2, v4);
  v7 = -1;
  if ( !v6 )
    return ftell(*(FILE **)(a1 + 64));
  return v7;
}

