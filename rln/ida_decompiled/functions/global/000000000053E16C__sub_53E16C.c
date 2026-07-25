/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E16C
 * Mangled: sub_53E16C
 * Demangled: sub_53E16C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F9D50  .fflush
 *   0x00000000001FA540  .putc
 *
 * Referenced strings: 3
 *   insn=0x000000000053E16C string=0x000000000053E170 "?"
 *   insn=0x000000000053E18C string=0x00000000001FA540 "0'"
 *   insn=0x000000000053E194 string=0x00000000001F9D50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E16C(__int64 a1, int c)
{
  if ( c != -1 )
    return putc(c, *(FILE **)(a1 + 64));
  if ( fflush(*(FILE **)(a1 + 64)) )
    return 0xFFFFFFFFLL;
  return 0;
}

