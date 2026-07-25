/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000568F60
 * Mangled: sub_568F60
 * Demangled: sub_568F60
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 2
 *   insn=0x0000000000568F68 string=0x0000000000568F6C "B"
 *   insn=0x0000000000568F6C string=0x0000000000568F70 "R"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int *__fastcall sub_568F60(__int64 *a1)
{
  return sub_568CB8(a1, 0, *(_QWORD *)(*a1 - 24), 0);
}

