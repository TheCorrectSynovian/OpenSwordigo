/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054B36C
 * Mangled: sub_54B36C
 * Demangled: sub_54B36C
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x000000000054B36C string=0x000000000054B370 "!"
 *   insn=0x000000000054B384 string=0x000000000054B388 "C"
 *   insn=0x000000000054B390 string=0x000000000054B3A8 "A"
 *   insn=0x000000000054B394 string=0x000000000054B398 "B,@"
 *   insn=0x000000000054B398 string=0x000000000054B39C "@"
 *   insn=0x000000000054B3AC string=0x000000000054B3B0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54B36C(_QWORD *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // x2

  v2 = a1[2];
  if ( a1[1] >= v2 || *(unsigned __int8 *)(v2 - 1) != a2 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 88LL))(a1);
  a1[2] = v2 - 1;
  return *(unsigned __int8 *)(v2 - 1);
}

