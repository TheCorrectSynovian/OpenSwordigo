/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520340
 * Mangled: sub_520340
 * Demangled: sub_520340
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x0000000000520348 string=0x000000000052034C "!"
 *   insn=0x000000000052034C string=0x0000000000520350 "Aha8a"
 *   insn=0x0000000000520350 string=0x0000000000520354 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520340(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // x2
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 48);
  result = a2;
  if ( (*(_BYTE *)(v2 + a2) & 2) != 0 )
    return (unsigned __int8)(a2 - 32);
  return result;
}

