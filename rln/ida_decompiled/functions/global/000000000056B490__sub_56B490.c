/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B490
 * Mangled: sub_56B490
 * Demangled: sub_56B490
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000056B490 string=0x000000000056B494 "b"
 *   insn=0x000000000056B498 string=0x000000000056B49C """
 *   insn=0x000000000056B49C string=0x000000000056B4A0 "D"
 *   insn=0x000000000056B4A0 string=0x000000000056B4A4 "D"
 *   insn=0x000000000056B4A4 string=0x000000000056B4A8 "_"
 *   insn=0x000000000056B4AC string=0x000000000056B4B0 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56B490(__int64 *result, __int64 *a2)
{
  __int64 v2; // x3
  __int64 v3; // x2

  v2 = *result;
  if ( (*(_DWORD *)(*result - 8) & 0x80000000) != 0 )
    *(_DWORD *)(v2 - 8) = 0;
  v3 = *a2;
  if ( (*(_DWORD *)(*a2 - 8) & 0x80000000) != 0 )
    *(_DWORD *)(v3 - 8) = 0;
  *result = v3;
  *a2 = v2;
  return result;
}

