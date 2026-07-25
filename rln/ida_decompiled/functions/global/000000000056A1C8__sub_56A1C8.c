/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A1C8
 * Mangled: sub_56A1C8
 * Demangled: sub_56A1C8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x0000000000569E1C  sub_569E1C
 *
 * Referenced strings: 3
 *   insn=0x000000000056A1F0 string=0x000000000056A1F4 "e"
 *   insn=0x000000000056A208 string=0x000000000056A20C "B"
 *   insn=0x000000000056A20C string=0x000000000056A210 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56A1C8(__int64 *a1, __int64 a2, __int64 a3, char *a4)
{
  size_t v5; // x0

  v5 = strlen(a4);
  return sub_569E1C(a1, a2 - *a1, a3 - a2, a4, v5);
}

