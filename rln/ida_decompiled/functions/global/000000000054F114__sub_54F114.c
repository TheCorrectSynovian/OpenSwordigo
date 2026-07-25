/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054F114
 * Mangled: sub_54F114
 * Demangled: sub_54F114
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000054F11C string=0x000000000054F120 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54F114(__int64 result, __int64 a2)
{
  *(_DWORD *)(result + 8) = a2 != 0;
  *(_QWORD *)result = off_6B7BA0;
  return result;
}

