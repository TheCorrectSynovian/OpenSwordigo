/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E00C
 * Mangled: sub_53E00C
 * Demangled: sub_53E00C
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F8030  .ungetwc
 *   0x00000000001FFF70  .getwc
 *
 * Referenced strings: 2
 *   insn=0x000000000053E020 string=0x000000000053E024 "a"@"
 *   insn=0x000000000053E030 string=0x00000000001F8030 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E00C(__int64 a1)
{
  wint_t v2; // w0

  v2 = getwc(*(__FILE **)(a1 + 64));
  return ungetwc(v2, *(__FILE **)(a1 + 64));
}

