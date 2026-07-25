/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005471E4
 * Mangled: sub_5471E4
 * Demangled: sub_5471E4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000545B8C  sub_545B8C
 *   0x000000000056918C  sub_56918C
 *
 * Referenced strings: 6
 *   insn=0x00000000005471E8 string=0x00000000005471EC "!"
 *   insn=0x00000000005471F8 string=0x00000000005471FC """
 *   insn=0x000000000054720C string=0x0000000000547210 "a*@"
 *   insn=0x0000000000547214 string=0x0000000000547218 "@"
 *   insn=0x0000000000547218 string=0x000000000054721C "#"
 *   insn=0x000000000054722C string=0x0000000000547230 "W"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5471E4(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x3
  __int64 v5; // x1

  v3 = a1 + 8;
  sub_56918C(a1 + 80, *a2, *(_QWORD *)(*a2 - 24LL));
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 80);
  if ( (*(_DWORD *)(v3 + 64) & 3) != 0 )
    v4 = *(_QWORD *)(v5 - 24);
  return sub_545B8C(v3, v5, 0, v4);
}

