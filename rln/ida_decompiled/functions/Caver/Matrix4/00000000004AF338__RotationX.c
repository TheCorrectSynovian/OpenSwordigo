/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF338
 * Mangled: _ZN5Caver7Matrix49RotationXEf
 * Demangled: Caver::Matrix4::RotationX(float)
 *
 * Callers: 1
 *   0x00000000002039A0  Caver::Matrix4::RotationX(float)
 *
 * Callees: 2
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 6
 *   insn=0x00000000004AF344 string=0x00000000004AF348 ""
 *   insn=0x00000000004AF350 string=0x00000000004AF354 "\t"
 *   insn=0x00000000004AF358 string=0x00000000004AF35C "ER"
 *   insn=0x00000000004AF364 string=0x00000000004AF368 "i"
 *   insn=0x00000000004AF380 string=0x00000000004AF384 "a"
 *   insn=0x00000000004AF384 string=0x00000000004AF388 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::Matrix4::RotationX@<Q0>(float a1@<S0>, __int64 a2@<X8>)
{
  float v5; // s9
  float v6; // s0
  float v7; // s1
  long double result; // q0

  v5 = cosf(a1);
  v6 = sinf(a1);
  v7 = -v6;
  *(float *)(a2 + 20) = v5;
  *(float *)(a2 + 24) = v6;
  result = *(long double *)&xmmword_583490;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  *(_QWORD *)(a2 + 48) = 0;
  *(float *)(a2 + 36) = v7;
  *(float *)(a2 + 40) = v5;
  *(_OWORD *)a2 = xmmword_583490;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 1065353216;
  return result;
}

