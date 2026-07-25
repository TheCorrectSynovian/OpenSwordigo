/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051AE98
 * Mangled: _Z20PVRTMatrixRotationYFR11PVRTMATRIXff
 * Demangled: PVRTMatrixRotationYF(PVRTMATRIXf &,float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FC670  .sin
 *   0x00000000001FE1C0  .cos
 *
 * Referenced strings: 9
 *   insn=0x000000000051AEA4 string=0x000000000051AEA8 ""
 *   insn=0x000000000051AEB4 string=0x000000000051AEB8 "\t@b"
 *   insn=0x000000000051AEC0 string=0x000000000051AEC4 "H"
 *   insn=0x000000000051AEC0 string=0x00000000001FC670 "0'"
 *   insn=0x000000000051AED4 string=0x000000000051AED8 "i"
 *   insn=0x000000000051AEE0 string=0x000000000051AEE4 "i*"
 *   insn=0x000000000051AEF0 string=0x000000000051AEF4 "`\n"
 *   insn=0x000000000051AEF4 string=0x000000000051AEF8 "b""
 *   insn=0x000000000051AEF8 string=0x000000000051AEFC "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTMatrixRotationYF(__int64 a1, float a2)
{
  double v2; // d8
  float v4; // s9
  float result; // s0

  v2 = a2;
  v4 = cos(a2);
  result = sin(v2);
  *(float *)a1 = v4;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(float *)(a1 + 40) = v4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(float *)(a1 + 8) = result;
  *(float *)(a1 + 32) = -result;
  *(_OWORD *)(a1 + 12) = xmmword_5837F0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}

