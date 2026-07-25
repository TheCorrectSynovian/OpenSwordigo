/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051E590
 * Mangled: _Znam
 * Demangled: operator new[](ulong)
 *
 * Callers: 1
 *   0x00000000001F8570  operator new[](ulong)
 *
 * Callees: 3
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F8280  .__cxa_call_unexpected
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x000000000051E598 string=0x00000000001F55E0 "P'"
 *   insn=0x000000000051E5A4 string=0x000000000051E5A8 "@"
 *   insn=0x000000000051E5A8 string=0x000000000051E5B0 "4g"
 *   insn=0x000000000051E5B0 string=0x00000000001F8280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall operator new[](unsigned __int64 a1)
{
  return operator new(a1);
}

