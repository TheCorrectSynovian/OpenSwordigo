/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000525F20
 * Mangled: sub_525F20
 * Demangled: sub_525F20
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005219C8  sub_5219C8
 *
 * Referenced strings: 4
 *   insn=0x0000000000525F24 string=0x0000000000525F28 "b"
 *   insn=0x0000000000525F2C string=0x0000000000525F30 "D"
 *   insn=0x0000000000525F30 string=0x0000000000525F34 "c"
 *   insn=0x0000000000525F3C string=0x0000000000525F40 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_525F20(__int64 *a1, __int64 *a2)
{
  __int64 v2; // x2

  v2 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v2 - 24)) = a2[1];
  a1[1] = 0;
  return sub_5219C8((__int64)a1 + *(_QWORD *)(v2 - 24), 0);
}

