/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000052CDA0
 * Mangled: sub_52CDA0
 * Demangled: sub_52CDA0
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000052CDA8 string=0x000000000052CDAC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_52CDA0(__int64 result, __int64 a2, __int64 a3)
{
  *(_DWORD *)(result + 8) = a3 != 0;
  *(_QWORD *)result = off_6B6FB0;
  return result;
}

