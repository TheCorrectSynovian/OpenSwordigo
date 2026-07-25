/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005830F4
 * Mangled: sub_5830F4
 * Demangled: sub_5830F4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F5E70  .malloc
 *   0x00000000005830E8  sub_5830E8
 *
 * Referenced strings: 2
 *   insn=0x0000000000583104 string=0x0000000000583108 "Z"
 *   insn=0x0000000000583108 string=0x00000000001F5E70 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5830F4(__int64 a1)
{
  _QWORD *v2; // x0

  v2 = malloc(0x30u);
  return sub_5830E8(a1, v2);
}

