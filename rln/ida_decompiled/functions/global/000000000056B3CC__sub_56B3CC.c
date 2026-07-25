/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056B3CC
 * Mangled: sub_56B3CC
 * Demangled: sub_56B3CC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000056B3D0 string=0x000000000056B3D4 "?"
 *   insn=0x000000000056B3D8 string=0x000000000056B3DC "M"
 *   insn=0x000000000056B3E4 string=0x000000000056B3E8 "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_56B3CC(__int64 a1, __int64 a2)
{
  __int64 v2; // x1
  __int64 result; // x0

  v2 = a1 - a2;
  result = 0x7FFFFFFF;
  if ( v2 <= 0x7FFFFFFF )
  {
    if ( v2 >= (__int64)0xFFFFFFFF80000000LL )
      return (unsigned int)v2;
    else
      return 0x80000000LL;
  }
  return result;
}

