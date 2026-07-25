/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568F04
 * Mangled: sub_568F04
 * Demangled: sub_568F04
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 6
 *   insn=0x0000000000568F10 string=0x0000000000568F14 "%`"
 *   insn=0x0000000000568F14 string=0x0000000000568F18 "$"
 *   insn=0x0000000000568F28 string=0x0000000000568F2C "@"
 *   insn=0x0000000000568F40 string=0x0000000000568F44 "]"
 *   insn=0x0000000000568F44 string=0x0000000000568F48 "a"
 *   insn=0x0000000000568F4C string=0x0000000000568F50 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_568F04(__int64 *result)
{
  __int64 v1; // x1
  int v2; // w4
  __int64 *v3; // x19

  v1 = *result;
  v2 = *(_DWORD *)(*result - 8);
  if ( (v2 & 0x80000000) == 0 && (__int64 *)(*result - 24) != &qword_6FD2E0 )
  {
    if ( v2 )
    {
      v3 = result;
      sub_568CB8(result, 0, 0, 0);
      v1 = *v3;
    }
    result = (__int64 *)0xFFFFFFFFLL;
    *(_DWORD *)(v1 - 8) = -1;
  }
  return result;
}

