/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DEB0
 * Mangled: sub_53DEB0
 * Demangled: sub_53DEB0
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9D50  .fflush
 *
 * Referenced strings: 1
 *   insn=0x000000000053DEB4 string=0x00000000001F9D50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53DEB0(__int64 a1)
{
  return fflush(*(FILE **)(a1 + 64));
}

