/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000569358
 * Mangled: sub_569358
 * Demangled: sub_569358
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x0000000000203230  .strlen
 *   0x000000000056918C  sub_56918C
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 *__fastcall sub_569358(__int64 *a1, char *a2)
{
  size_t v3; // x0

  v3 = strlen(a2);
  return sub_56918C(a1, a2, v3);
}

