/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000523020
 * Mangled: sub_523020
 * Demangled: sub_523020
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000005210E8  sub_5210E8
 *
 * Referenced strings: 5
 *   insn=0x0000000000523024 string=0x0000000000523028 "b"
 *   insn=0x000000000052302C string=0x0000000000523030 "D"
 *   insn=0x0000000000523030 string=0x0000000000523034 "c"
 *   insn=0x000000000052303C string=0x0000000000523040 "B"
 *   insn=0x0000000000523044 string=0x0000000000523048 "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall sub_523020(__int64 *a1, __int64 *a2)
{
  __int64 v2; // x2

  v2 = *a2;
  *a1 = *a2;
  *(__int64 *)((char *)a1 + *(_QWORD *)(v2 - 24)) = a2[1];
  a1[1] = 0;
  return sub_5210E8((__int64)a1 + *(_QWORD *)(v2 - 24), 0);
}

