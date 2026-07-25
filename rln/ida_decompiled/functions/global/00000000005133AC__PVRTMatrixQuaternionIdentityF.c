/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005133AC
 * Mangled: _Z29PVRTMatrixQuaternionIdentityFR15PVRTQUATERNIONf
 * Demangled: PVRTMatrixQuaternionIdentityF(PVRTQUATERNIONf &)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall PVRTMatrixQuaternionIdentityF(_OWORD *a1)
{
  long double result; // q0

  result = *(long double *)&xmmword_583800;
  *a1 = xmmword_583800;
  return result;
}

