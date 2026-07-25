/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051AE00
 * Mangled: _Z18PVRTMatrixScalingFR11PVRTMATRIXffff
 * Demangled: PVRTMatrixScalingF(PVRTMATRIXf &,float,float,float)
 *
 * Callers: 1
 *   0x00000000001FF3C0  PVRTMatrixScalingF(PVRTMATRIXf &,float,float,float)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x000000000051AE1C string=0x000000000051AE20 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall PVRTMatrixScalingF(__int64 a1, float a2, float a3, float a4)
{
  long double result; // q0

  *(float *)a1 = a2;
  *(_OWORD *)&result = 0u;
  *(float *)(a1 + 20) = a3;
  *(float *)(a1 + 40) = a4;
  *(_OWORD *)(a1 + 4) = 0u;
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 44) = 0u;
  *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}

