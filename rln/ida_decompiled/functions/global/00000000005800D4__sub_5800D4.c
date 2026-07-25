/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005800D4
 * Mangled: sub_5800D4
 * Demangled: sub_5800D4
 *
 * Callers: 1
 *   0x000000000051D9B4  __gxx_personality_v0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000005800D8 string=0x00000000005800DC "B"
 *   insn=0x00000000005800DC string=0x00000000005800E0 """
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_5800D4(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // x2
  __int64 result; // x0

  v2 = *(_QWORD *)(a1 + 832);
  result = *(_QWORD *)(a1 + 792);
  *a2 = v2 >> 63;
  return result;
}

