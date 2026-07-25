/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569A08
 * Mangled: sub_569A08
 * Demangled: sub_569A08
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000568CB8  sub_568CB8
 *
 * Referenced strings: 5
 *   insn=0x0000000000569A08 string=0x0000000000569A0C "#"
 *   insn=0x0000000000569A1C string=0x0000000000569A20 "4"
 *   insn=0x0000000000569A20 string=0x0000000000569A24 "B"
 *   insn=0x0000000000569A2C string=0x0000000000569A30 "a"
 *   insn=0x0000000000569A34 string=0x0000000000569A38 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569A08(__int64 *a1, char a2)
{
  __int64 *result; // x0

  sub_568CB8(a1, 0, *(_QWORD *)(*a1 - 24), 1);
  result = a1;
  *(_BYTE *)*a1 = a2;
  return result;
}

