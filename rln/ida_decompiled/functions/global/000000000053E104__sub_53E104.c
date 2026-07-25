/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E104
 * Mangled: sub_53E104
 * Demangled: sub_53E104
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6550  .fwrite
 *
 * Referenced strings: 2
 *   insn=0x000000000053E108 string=0x000000000053E10C "!"
 *   insn=0x000000000053E110 string=0x00000000001F6550 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

size_t __fastcall sub_53E104(__int64 a1, void *ptr, size_t a3)
{
  return fwrite(ptr, 1u, a3, *(FILE **)(a1 + 64));
}

