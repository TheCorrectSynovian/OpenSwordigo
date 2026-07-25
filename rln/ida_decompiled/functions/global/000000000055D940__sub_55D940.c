/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055D940
 * Mangled: sub_55D940
 * Demangled: sub_55D940
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000055D960 string=0x000000000055D964 "B4@"
 *   insn=0x000000000055D964 string=0x000000000055D968 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_55D940(_QWORD *a1)
{
  unsigned int v1; // w2

  v1 = 0;
  if ( a1[4] < a1[5] )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *, __int64))(*a1 + 104LL))(a1, 0xFFFFFFFFLL) == -1 )
      return (unsigned int)-1;
    else
      return 0;
  }
  return v1;
}

