/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054EDD0
 * Mangled: sub_54EDD0
 * Demangled: sub_54EDD0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000054EDD0 string=0x000000000054EDD4 "B"
 *   insn=0x000000000054EDD4 string=0x000000000054EDD8 """
 *   insn=0x000000000054EDE0 string=0x000000000054EDE4 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54EDD0(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
  a2[1] = result;
  return result;
}

