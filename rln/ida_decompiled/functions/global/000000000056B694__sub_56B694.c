/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B694
 * Mangled: sub_56B694
 * Demangled: sub_56B694
 *
 * Callers: 1
 *   0x00000000005480EC  sub_5480EC
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000056B694 string=0x000000000056B698 "b"
 *   insn=0x000000000056B69C string=0x000000000056B6A0 """
 *   insn=0x000000000056B6A0 string=0x000000000056B6A4 "D"
 *   insn=0x000000000056B6A4 string=0x000000000056B6A8 "D"
 *   insn=0x000000000056B6A8 string=0x000000000056B6AC "_"
 *   insn=0x000000000056B6B0 string=0x000000000056B6B4 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56B694(__int64 *result, __int64 *a2)
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

