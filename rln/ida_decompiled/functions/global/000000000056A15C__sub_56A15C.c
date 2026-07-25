/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000056A15C
 * Mangled: sub_56A15C
 * Demangled: sub_56A15C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x0000000000569E1C  sub_569E1C
 *
 * Referenced strings: 2
 *   insn=0x000000000056A178 string=0x000000000056A17C "-d"
 *   insn=0x000000000056A198 string=0x000000000056A19C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_56A15C(__int64 *a1, size_t a2, unsigned __int64 a3, char *a4)
{
  size_t v5; // x0

  v5 = strlen(a4);
  return sub_569E1C(a1, a2, a3, a4, v5);
}

