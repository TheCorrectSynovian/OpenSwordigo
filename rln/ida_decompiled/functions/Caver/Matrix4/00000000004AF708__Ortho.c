/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF708
 * Mangled: _ZN5Caver7Matrix45OrthoEffffff
 * Demangled: Caver::Matrix4::Ortho(float,float,float,float,float,float)
 *
 * Callers: 1
 *   0x0000000000200F10  Caver::Matrix4::Ortho(float,float,float,float,float,float)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004AF708 string=0x00000000004AF70C ""
 *   insn=0x00000000004AF70C string=0x00000000004AF710 "p8!"
 *   insn=0x00000000004AF71C string=0x00000000004AF720 "!(#"
 *   insn=0x00000000004AF734 string=0x00000000004AF738 "f2"
 *   insn=0x00000000004AF744 string=0x00000000004AF748 "!$"
 *   insn=0x00000000004AF748 string=0x00000000004AF74C "B%"
 *   insn=0x00000000004AF760 string=0x00000000004AF764 ""
 *   insn=0x00000000004AF770 string=0x00000000004AF774 "\t="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Matrix4::Ortho@<S0>(
        float a1@<S0>,
        float a2@<S1>,
        float a3@<S2>,
        float a4@<S3>,
        float a5@<S4>,
        float a6@<S5>,
        __int64 a7@<X8>)
{
  float v8; // s6
  float v9; // s0
  float v10; // s2
  float v11; // s5
  float result; // s0

  v8 = a1 - a3;
  v9 = a1 + a3;
  v10 = a5 + a6;
  v11 = 1.0 / (float)(a5 - a6);
  result = v9 * (float)(1.0 / v8);
  *(_QWORD *)(a7 + 12) = 0;
  *(_QWORD *)(a7 + 4) = 0;
  *(_QWORD *)(a7 + 24) = 0;
  *(_QWORD *)(a7 + 32) = 0;
  *(_DWORD *)(a7 + 44) = 0;
  *(float *)a7 = (float)(1.0 / v8) * -2.0;
  *(float *)(a7 + 20) = (float)(1.0 / (float)(a4 - a2)) * -2.0;
  *(float *)(a7 + 40) = v11 * -2.0;
  *(float *)(a7 + 48) = result;
  *(float *)(a7 + 52) = (float)(a2 + a4) * (float)(1.0 / (float)(a4 - a2));
  *(float *)(a7 + 56) = v10 * v11;
  *(_DWORD *)(a7 + 60) = 1065353216;
  return result;
}

