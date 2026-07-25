/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CD68
 * Mangled: sub_52CD68
 * Demangled: sub_52CD68
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000052CD70 string=0x000000000052CD74 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CD68(__int64 result, __int64 a2)
{
  *(_DWORD *)(result + 8) = a2 != 0;
  *(_QWORD *)result = off_6B6F80;
  return result;
}

