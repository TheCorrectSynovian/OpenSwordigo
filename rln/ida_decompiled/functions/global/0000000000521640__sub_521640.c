/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000521640
 * Mangled: sub_521640
 * Demangled: sub_521640
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202B70  .__cxa_rethrow
 *
 * Referenced strings: 4
 *   insn=0x000000000052164C string=0x0000000000521650 "B"
 *   insn=0x0000000000521654 string=0x0000000000521658 "?"
 *   insn=0x0000000000521658 string=0x000000000052165C "a"
 *   insn=0x000000000052165C string=0x0000000000521668 "B"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_521640(__int64 result, int a2)
{
  int v2; // w3

  v2 = *(_DWORD *)(result + 28);
  *(_DWORD *)(result + 32) |= a2;
  if ( (a2 & v2) != 0 )
    __cxa_rethrow();
  return result;
}

