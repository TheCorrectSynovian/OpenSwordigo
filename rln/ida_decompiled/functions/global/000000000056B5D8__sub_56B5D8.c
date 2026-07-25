/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B5D8
 * Mangled: sub_56B5D8
 * Demangled: sub_56B5D8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000056B5D8 string=0x000000000056B5DC "b"
 *   insn=0x000000000056B5E0 string=0x000000000056B5E4 """
 *   insn=0x000000000056B5E4 string=0x000000000056B5E8 "D"
 *   insn=0x000000000056B5E8 string=0x000000000056B5EC "D"
 *   insn=0x000000000056B5EC string=0x000000000056B5F0 "_"
 *   insn=0x000000000056B5F4 string=0x000000000056B5F8 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56B5D8(__int64 *result, __int64 *a2)
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

