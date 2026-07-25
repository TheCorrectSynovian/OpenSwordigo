/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520C94
 * Mangled: sub_520C94
 * Demangled: sub_520C94
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202B70  .__cxa_rethrow
 *
 * Referenced strings: 3
 *   insn=0x0000000000520CA0 string=0x0000000000520CA4 "B"
 *   insn=0x0000000000520CA8 string=0x0000000000520CAC "?"
 *   insn=0x0000000000520CAC string=0x0000000000520CB0 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520C94(__int64 result, int a2)
{
  int v2; // w3

  v2 = *(_DWORD *)(result + 28);
  *(_DWORD *)(result + 32) |= a2;
  if ( (a2 & v2) != 0 )
    __cxa_rethrow();
  return result;
}

