/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000522E30
 * Mangled: sub_522E30
 * Demangled: sub_522E30
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005210E8  sub_5210E8
 *
 * Referenced strings: 4
 *   insn=0x0000000000522E34 string=0x0000000000522E38 "b"
 *   insn=0x0000000000522E3C string=0x0000000000522E40 "D"
 *   insn=0x0000000000522E40 string=0x0000000000522E44 "c"
 *   insn=0x0000000000522E4C string=0x0000000000522E50 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_522E30(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // x2

  v5 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v5 - 24)) = a2[1];
  a1[1] = 0;
  return sub_5210E8((__int64)a1 + *(_QWORD *)(v5 - 24), a3);
}

