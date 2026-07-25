/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CDBC
 * Mangled: sub_52CDBC
 * Demangled: sub_52CDBC
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000052CDC4 string=0x000000000052CDC8 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CDBC(__int64 result, __int64 a2)
{
  *(_DWORD *)(result + 8) = a2 != 0;
  *(_QWORD *)result = off_6B6FE0;
  return result;
}

