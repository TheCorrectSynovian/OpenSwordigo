/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052093C
 * Mangled: sub_52093C
 * Demangled: sub_52093C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000052093C string=0x0000000000520940 "F"
 *   insn=0x0000000000520948 string=0x000000000052094C "%hd8"
 *   insn=0x0000000000520954 string=0x0000000000520958 "ex$"
 *   insn=0x0000000000520960 string=0x0000000000520964 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

unsigned __int64 __fastcall sub_52093C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // x4

  v4 = 0;
  if ( a2 < a3 )
  {
    do
    {
      *(_DWORD *)(a4 + 4 * v4) = *(_DWORD *)(a1 + 4LL * *(unsigned __int8 *)(a2 + v4) + 156);
      ++v4;
    }
    while ( v4 != a3 - a2 );
  }
  return a3;
}

