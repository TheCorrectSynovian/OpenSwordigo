/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DE24
 * Mangled: sub_53DE24
 * Demangled: sub_53DE24
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F4000  .ungetc
 *   0x00000000001F7D80  .getc
 *
 * Referenced strings: 4
 *   insn=0x000000000053DE38 string=0x000000000053DE3C "a"@"
 *   insn=0x000000000053DE38 string=0x00000000001F7D80 "0'"
 *   insn=0x000000000053DE44 string=0x000000000053DE48 "n"
 *   insn=0x000000000053DE48 string=0x00000000001F4000 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53DE24(__int64 a1)
{
  int v2; // w0

  v2 = getc(*(FILE **)(a1 + 64));
  return ungetc(v2, *(FILE **)(a1 + 64));
}

