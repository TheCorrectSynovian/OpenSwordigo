/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051AE28
 * Mangled: _Z20PVRTMatrixRotationXFR11PVRTMATRIXff
 * Demangled: PVRTMatrixRotationXF(PVRTMATRIXf &,float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FC670  .sin
 *   0x00000000001FE1C0  .cos
 *
 * Referenced strings: 8
 *   insn=0x000000000051AE34 string=0x000000000051AE38 ""
 *   insn=0x000000000051AE44 string=0x000000000051AE48 "\t@b"
 *   insn=0x000000000051AE4C string=0x000000000051AE50 ""
 *   insn=0x000000000051AE50 string=0x000000000051AE54 "H"
 *   insn=0x000000000051AE50 string=0x00000000001FC670 "0'"
 *   insn=0x000000000051AE74 string=0x000000000051AE78 "`"
 *   insn=0x000000000051AE78 string=0x000000000051AE7C "i"
 *   insn=0x000000000051AE7C string=0x000000000051AE80 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTMatrixRotationXF(__int64 a1, float a2)
{
  double v2; // d8
  float v4; // s9
  float result; // s0

  v2 = a2;
  v4 = cos(a2);
  result = sin(v2);
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(float *)(a1 + 36) = result;
  *(float *)(a1 + 40) = v4;
  *(float *)(a1 + 20) = v4;
  *(float *)(a1 + 24) = -result;
  *(_OWORD *)a1 = xmmword_583490;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}

