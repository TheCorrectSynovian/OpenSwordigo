/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055D6F4
 * Mangled: sub_55D6F4
 * Demangled: sub_55D6F4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000051F654  sub_51F654
 *
 * Referenced strings: 6
 *   insn=0x000000000055D728 string=0x000000000055D72C " "
 *   insn=0x000000000055D72C string=0x000000000055D730 "`R"
 *   insn=0x000000000055D744 string=0x000000000055D748 "_"
 *   insn=0x000000000055D748 string=0x000000000055D74C "M"
 *   insn=0x000000000055D74C string=0x000000000055D750 "aN"
 *   insn=0x000000000055D754 string=0x000000000055D758 "bR"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55D6F4(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // x0

  if ( sub_51F654(a1 + 13) )
    return a1;
  if ( !a2 && !a3 )
  {
    a1[20] = 1;
    return a1;
  }
  if ( !a2 || a3 <= 0 )
    return a1;
  a1[19] = a2;
  result = a1;
  a1[20] = a3;
  return result;
}

