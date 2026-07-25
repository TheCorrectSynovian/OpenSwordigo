/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005695C4
 * Mangled: sub_5695C4
 * Demangled: sub_5695C4
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x0000000000569390  sub_569390
 *
 * Referenced strings: 1
 *   insn=0x00000000005695F8 string=0x00000000005695FC "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_5695C4(__int64 *a1, size_t a2, char *a3)
{
  size_t v4; // x0

  v4 = strlen(a3);
  return sub_569390(a1, a2, a3, v4);
}

