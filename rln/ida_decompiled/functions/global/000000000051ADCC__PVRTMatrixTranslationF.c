/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051ADCC
 * Mangled: _Z22PVRTMatrixTranslationFR11PVRTMATRIXffff
 * Demangled: PVRTMatrixTranslationF(PVRTMATRIXf &,float,float,float)
 *
 * Callers: 1
 *   0x0000000000201F90  PVRTMatrixTranslationF(PVRTMATRIXf &,float,float,float)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x000000000051ADD4 string=0x000000000051ADD8 "H"
 *   insn=0x000000000051ADDC string=0x000000000051ADE0 "H"
 *   insn=0x000000000051ADF0 string=0x000000000051ADF4 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall PVRTMatrixTranslationF(__int64 a1, float a2, float a3, float a4)
{
  long double result; // q0

  *(float *)(a1 + 48) = a2;
  *(float *)(a1 + 52) = a3;
  result = *(long double *)&xmmword_583490;
  *(float *)(a1 + 56) = a4;
  *(_OWORD *)a1 = xmmword_583490;
  *(_OWORD *)(a1 + 16) = xmmword_5837E0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_OWORD *)(a1 + 32) = xmmword_5837F0;
  return result;
}

