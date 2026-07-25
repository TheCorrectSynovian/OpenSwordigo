/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF66C
 * Mangled: _ZN5Caver7Matrix414PerspectiveFovEffff
 * Demangled: Caver::Matrix4::PerspectiveFov(float,float,float,float)
 *
 * Callers: 1
 *   0x00000000001FDAB0  Caver::Matrix4::PerspectiveFov(float,float,float,float)
 *
 * Callees: 1
 *   0x00000000001FE5C0  .tanf
 *
 * Referenced strings: 15
 *   insn=0x00000000004AF67C string=0x00000000004AF680 "*"
 *   insn=0x00000000004AF688 string=0x00000000004AF68C "h"
 *   insn=0x00000000004AF68C string=0x00000000004AF690 "I"
 *   insn=0x00000000004AF6A4 string=0x00000000004AF6A8 ""9("
 *   insn=0x00000000004AF6AC string=0x00000000004AF6B0 " "
 *   insn=0x00000000004AF6B0 string=0x00000000004AF6B4 "!"
 *   insn=0x00000000004AF6B4 string=0x00000000004AF6B8 "")("
 *   insn=0x00000000004AF6B8 string=0x00000000004AF6BC "c)"
 *   insn=0x00000000004AF6C0 string=0x00000000004AF6C4 "`"
 *   insn=0x00000000004AF6C4 string=0x00000000004AF6C8 "@!"
 *   insn=0x00000000004AF6C8 string=0x00000000004AF6CC "a!"
 *   insn=0x00000000004AF6DC string=0x00000000004AF6E0 "e"
 *   insn=0x00000000004AF6E0 string=0x00000000004AF6E4 "`*"
 *   insn=0x00000000004AF6E4 string=0x00000000004AF6E8 "a:"
 *   insn=0x00000000004AF6E8 string=0x00000000004AF6EC "d"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Matrix4::PerspectiveFov@<S0>(
        float a1@<S0>,
        float a2@<S1>,
        float a3@<S2>,
        float a4@<S3>,
        __int64 a5@<X8>)
{
  float v10; // s0
  float v11; // s1
  float v12; // s5
  float result; // s0

  v10 = 1.0 / tanf(a1 * 0.5);
  v11 = 1.0 / (float)(a3 - a4);
  v12 = v10 / a2;
  *(float *)(a5 + 20) = v10;
  result = (float)(a3 + a4) * v11;
  *(_QWORD *)(a5 + 12) = 0;
  *(_QWORD *)(a5 + 4) = 0;
  *(_QWORD *)(a5 + 24) = 0;
  *(_QWORD *)(a5 + 32) = 0;
  *(_DWORD *)(a5 + 52) = 0;
  *(float *)a5 = v12;
  *(float *)(a5 + 40) = result;
  *(float *)(a5 + 56) = (float)((float)(a4 + a4) * a3) * v11;
  *(_QWORD *)(a5 + 44) = 3212836864LL;
  *(_DWORD *)(a5 + 60) = 0;
  return result;
}

