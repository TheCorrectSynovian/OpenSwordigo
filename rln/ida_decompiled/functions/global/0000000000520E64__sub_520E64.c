/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000520E64
 * Mangled: sub_520E64
 * Demangled: sub_520E64
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall sub_520E64(__int64 a1, __int64 a2)
{
  __int64 v2; // x2

  v2 = *(_QWORD *)(a1 + 216);
  *(_QWORD *)(a1 + 216) = a2;
  return v2;
}

