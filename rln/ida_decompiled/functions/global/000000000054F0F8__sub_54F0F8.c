/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054F0F8
 * Mangled: sub_54F0F8
 * Demangled: sub_54F0F8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000054F100 string=0x000000000054F104 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54F0F8(__int64 result, __int64 a2, __int64 a3)
{
  *(_DWORD *)(result + 8) = a3 != 0;
  *(_QWORD *)result = off_6B7B70;
  return result;
}

