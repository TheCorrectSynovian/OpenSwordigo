/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051AF14
 * Mangled: _Z20PVRTMatrixRotationZFR11PVRTMATRIXff
 * Demangled: PVRTMatrixRotationZF(PVRTMATRIXf &,float)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FC670  .sin
 *   0x00000000001FE1C0  .cos
 *
 * Referenced strings: 8
 *   insn=0x000000000051AF20 string=0x000000000051AF24 ""
 *   insn=0x000000000051AF30 string=0x000000000051AF34 "\t@b"
 *   insn=0x000000000051AF3C string=0x00000000001FC670 "0'"
 *   insn=0x000000000051AF44 string=0x000000000051AF48 "h"
 *   insn=0x000000000051AF48 string=0x000000000051AF4C "H"
 *   insn=0x000000000051AF50 string=0x000000000051AF54 "`&"
 *   insn=0x000000000051AF5C string=0x000000000051AF60 "i"
 *   insn=0x000000000051AF64 string=0x000000000051AF68 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall PVRTMatrixRotationZF(__int64 a1, float a2)
{
  double v2; // d8
  float v4; // s9
  float v5; // s0
  float v6; // s1
  long double result; // q0

  v2 = a2;
  v4 = cos(a2);
  v5 = sin(v2);
  *(_QWORD *)(a1 + 56) = 0x3F80000000000000LL;
  v6 = -v5;
  *(float *)(a1 + 16) = v5;
  *(float *)(a1 + 20) = v4;
  result = *(long double *)&xmmword_583490;
  *(_QWORD *)(a1 + 8) = 0;
  *(float *)a1 = v4;
  *(float *)(a1 + 4) = v6;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = xmmword_583490;
  return result;
}

