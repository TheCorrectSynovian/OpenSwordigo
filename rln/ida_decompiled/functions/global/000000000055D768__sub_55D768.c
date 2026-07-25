/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000055D768
 * Mangled: sub_55D768
 * Demangled: sub_55D768
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x000000000051F654  sub_51F654
 *
 * Referenced strings: 6
 *   insn=0x000000000055D79C string=0x000000000055D7A0 " "
 *   insn=0x000000000055D7A0 string=0x000000000055D7A4 "`R"
 *   insn=0x000000000055D7B8 string=0x000000000055D7BC "_"
 *   insn=0x000000000055D7BC string=0x000000000055D7C0 "M"
 *   insn=0x000000000055D7C0 string=0x000000000055D7C4 "aN"
 *   insn=0x000000000055D7C8 string=0x000000000055D7CC "bR"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall sub_55D768(_QWORD *a1, __int64 a2, __int64 a3)
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

