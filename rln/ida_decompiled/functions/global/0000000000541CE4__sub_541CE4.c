/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000541CE4
 * Mangled: sub_541CE4
 * Demangled: sub_541CE4
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005219C8  sub_5219C8
 *
 * Referenced strings: 4
 *   insn=0x0000000000541CF0 string=0x0000000000541CF4 "`"
 *   insn=0x0000000000541CFC string=0x0000000000541D00 "`"
 *   insn=0x0000000000541D00 string=0x0000000000541D04 "dh""
 *   insn=0x0000000000541D04 string=0x0000000000541D08 "0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_541CE4(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // x0
  _QWORD *v5; // x0

  v4 = *a2;
  *a1 = *a2;
  v5 = (__int64 *)((char *)a1 + *(_QWORD *)(v4 - 24));
  *v5 = a2[1];
  return sub_5219C8((__int64)v5, a3);
}

