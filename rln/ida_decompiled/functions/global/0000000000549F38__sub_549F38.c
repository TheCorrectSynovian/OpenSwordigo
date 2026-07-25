/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000549F38
 * Mangled: sub_549F38
 * Demangled: sub_549F38
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000547EA4  sub_547EA4
 *   0x000000000056CB34  sub_56CB34
 *
 * Referenced strings: 5
 *   insn=0x0000000000549F3C string=0x0000000000549F40 "!"
 *   insn=0x0000000000549F4C string=0x0000000000549F50 """
 *   insn=0x0000000000549F60 string=0x0000000000549F64 "a2@"
 *   insn=0x0000000000549F68 string=0x0000000000549F6C "@"
 *   insn=0x0000000000549F6C string=0x0000000000549F70 "#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_549F38(__int64 a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x3
  __int64 v5; // x1

  v3 = a1 + 24;
  sub_56CB34(a1 + 96, *a2, *(_QWORD *)(*a2 - 24LL));
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 96);
  if ( (*(_DWORD *)(v3 + 64) & 3) != 0 )
    v4 = *(_QWORD *)(v5 - 24);
  return sub_547EA4(v3, v5, 0, v4);
}

