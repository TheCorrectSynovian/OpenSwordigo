/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DDFC
 * Mangled: sub_53DDFC
 * Demangled: sub_53DDFC
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7D80  .getc
 *
 * Referenced strings: 2
 *   insn=0x000000000053DE10 string=0x000000000053DE14 "`J"
 *   insn=0x000000000053DE10 string=0x00000000001F7D80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53DDFC(__int64 a1)
{
  __int64 result; // x0

  result = getc(*(FILE **)(a1 + 64));
  *(_DWORD *)(a1 + 72) = result;
  return result;
}

