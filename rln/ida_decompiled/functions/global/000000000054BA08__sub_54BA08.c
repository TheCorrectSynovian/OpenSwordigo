/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000054BA08
 * Mangled: sub_54BA08
 * Demangled: sub_54BA08
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000054BA08 string=0x000000000054BA0C "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_54BA08(__int64 result, __int64 a2)
{
  *(_QWORD *)(result + 16) += 4 * a2;
  return result;
}

