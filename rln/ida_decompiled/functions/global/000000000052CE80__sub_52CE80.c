/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CE80
 * Mangled: sub_52CE80
 * Demangled: sub_52CE80
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000052CE88 string=0x000000000052CE8C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CE80(__int64 result, __int64 a2, __int64 a3)
{
  *(_DWORD *)(result + 8) = a3 != 0;
  *(_QWORD *)result = off_6B7030;
  return result;
}

