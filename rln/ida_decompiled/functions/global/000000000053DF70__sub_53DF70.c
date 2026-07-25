/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000053DF70
 * Mangled: sub_53DF70
 * Demangled: sub_53DF70
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FFF70  .getwc
 *
 * Referenced strings: 1
 *   insn=0x000000000053DF84 string=0x000000000053DF88 "`J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_53DF70(__int64 a1)
{
  __int64 result; // x0

  result = getwc(*(__FILE **)(a1 + 64));
  *(_DWORD *)(a1 + 72) = result;
  return result;
}

