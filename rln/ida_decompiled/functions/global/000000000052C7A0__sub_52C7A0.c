/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052C7A0
 * Mangled: sub_52C7A0
 * Demangled: sub_52C7A0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000052C7A8 string=0x000000000052C7AC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52C7A0(__int64 result, __int64 a2)
{
  *(_DWORD *)(result + 8) = a2 != 0;
  *(_QWORD *)result = off_6B6DA0;
  return result;
}

