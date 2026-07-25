/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054690C
 * Mangled: sub_54690C
 * Demangled: sub_54690C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000545B8C  sub_545B8C
 *   0x000000000056918C  sub_56918C
 *
 * Referenced strings: 5
 *   insn=0x0000000000546910 string=0x0000000000546914 "!"
 *   insn=0x0000000000546920 string=0x0000000000546924 """
 *   insn=0x0000000000546934 string=0x0000000000546938 "a.@"
 *   insn=0x000000000054693C string=0x0000000000546940 "@"
 *   insn=0x0000000000546940 string=0x0000000000546944 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54690C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x3
  __int64 v5; // x1

  v3 = a1 + 16;
  sub_56918C(a1 + 88, *a2, *(_QWORD *)(*a2 - 24LL));
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 88);
  if ( (*(_DWORD *)(v3 + 64) & 3) != 0 )
    v4 = *(_QWORD *)(v5 - 24);
  return sub_545B8C(v3, v5, 0, v4);
}

