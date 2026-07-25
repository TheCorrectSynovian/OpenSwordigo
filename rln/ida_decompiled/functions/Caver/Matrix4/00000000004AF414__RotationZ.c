/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF414
 * Mangled: _ZN5Caver7Matrix49RotationZEf
 * Demangled: Caver::Matrix4::RotationZ(float)
 *
 * Callers: 1
 *   0x00000000001FBCC0  Caver::Matrix4::RotationZ(float)
 *
 * Callees: 2
 *   0x00000000001FF1F0  .cosf
 *   0x0000000000203C70  .sinf
 *
 * Referenced strings: 7
 *   insn=0x00000000004AF420 string=0x00000000004AF424 ""
 *   insn=0x00000000004AF428 string=0x00000000004AF42C "q?"
 *   insn=0x00000000004AF42C string=0x00000000004AF430 "\t"
 *   insn=0x00000000004AF43C string=0x00000000004AF440 "h"
 *   insn=0x00000000004AF448 string=0x00000000004AF44C "i"
 *   insn=0x00000000004AF454 string=0x00000000004AF458 "a&"
 *   insn=0x00000000004AF45C string=0x00000000004AF460 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::Matrix4::RotationZ@<Q0>(float a1@<S0>, __int64 a2@<X8>)
{
  float v5; // s9
  float v6; // s0
  float v7; // s1
  long double result; // q0

  v5 = cosf(a1);
  v6 = sinf(a1);
  *(_QWORD *)(a2 + 56) = 0x3F80000000000000LL;
  v7 = -v6;
  *(float *)a2 = v5;
  *(float *)(a2 + 4) = v6;
  result = *(long double *)&xmmword_583490;
  *(_QWORD *)(a2 + 8) = 0;
  *(float *)(a2 + 16) = v7;
  *(float *)(a2 + 20) = v5;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 40) = xmmword_583490;
  return result;
}

