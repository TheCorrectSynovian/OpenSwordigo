/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CA78
 * Mangled: sub_52CA78
 * Demangled: sub_52CA78
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000052CA78 string=0x000000000052CA7C "B"
 *   insn=0x000000000052CA7C string=0x000000000052CA80 """
 *   insn=0x000000000052CA88 string=0x000000000052CA8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CA78(__int64 a1, _QWORD *a2)
{
  __int64 result; // x0

  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL);
  a2[1] = result;
  return result;
}

