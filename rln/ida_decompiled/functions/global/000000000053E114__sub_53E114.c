/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053E114
 * Mangled: sub_53E114
 * Demangled: sub_53E114
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5B40  .fread
 *
 * Referenced strings: 4
 *   insn=0x000000000053E128 string=0x000000000053E12C "!"
 *   insn=0x000000000053E134 string=0x00000000001F5B40 "P'"
 *   insn=0x000000000053E13C string=0x000000000053E140 "s"
 *   insn=0x000000000053E140 string=0x000000000053E144 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53E114(__int64 a1, char *ptr, size_t a3)
{
  __int64 result; // x0

  result = fread(ptr, 1u, a3, *(FILE **)(a1 + 64));
  if ( result <= 0 )
    *(_DWORD *)(a1 + 72) = -1;
  else
    *(_DWORD *)(a1 + 72) = (unsigned __int8)ptr[result - 1];
  return result;
}

