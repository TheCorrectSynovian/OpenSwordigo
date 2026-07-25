/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054EDB4
 * Mangled: sub_54EDB4
 * Demangled: sub_54EDB4
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000054EDB4 string=0x000000000054EDB8 "B"
 *   insn=0x000000000054EDB8 string=0x000000000054EDBC """
 *   insn=0x000000000054EDC4 string=0x000000000054EDC8 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54EDB4(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 40LL);
  a2[1] = result;
  return result;
}

