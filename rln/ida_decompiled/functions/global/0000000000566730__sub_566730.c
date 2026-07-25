/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000566730
 * Mangled: sub_566730
 * Demangled: sub_566730
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000566734 string=0x0000000000566738 "?"
 *   insn=0x000000000056673C string=0x0000000000566740 "M"
 *   insn=0x0000000000566748 string=0x000000000056674C "?"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_566730(__int64 a1, __int64 a2)
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

