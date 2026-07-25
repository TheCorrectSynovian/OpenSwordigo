/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E1A8
 * Mangled: sub_53E1A8
 * Demangled: sub_53E1A8
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F9D50  .fflush
 *   0x0000000000203760  .putwc
 *
 * Referenced strings: 3
 *   insn=0x000000000053E1A8 string=0x000000000053E1AC "?"
 *   insn=0x000000000053E1C4 string=0x000000000053E1C8 "f"
 *   insn=0x000000000053E1D0 string=0x00000000001F9D50 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E1A8(__int64 a1, wchar_t wc)
{
  if ( wc != -1 )
    return putwc(wc, *(__FILE **)(a1 + 64));
  if ( fflush(*(FILE **)(a1 + 64)) )
    return 0xFFFFFFFFLL;
  return 0;
}

