/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054EAF8
 * Mangled: sub_54EAF8
 * Demangled: sub_54EAF8
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000054EB00 string=0x000000000054EB04 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54EAF8(__int64 result, __int64 a2)
{
  *(_DWORD *)(result + 8) = a2 != 0;
  *(_QWORD *)result = off_6B7960;
  return result;
}

