/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000515A08
 * Mangled: _ZN11CPVRTStringixEm
 * Demangled: CPVRTString::operator[](ulong)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTString::operator[](__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 8) + a2;
}

