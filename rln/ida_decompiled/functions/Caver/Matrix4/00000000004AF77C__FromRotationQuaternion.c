/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF77C
 * Mangled: _ZN5Caver7Matrix422FromRotationQuaternionERKNS_10QuaternionE
 * Demangled: Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&)
 *
 * Callers: 1
 *   0x00000000001F9ED0  Caver::Matrix4::FromRotationQuaternion(Caver::Quaternion const&)
 *
 * Callees: 0
 *
 * Referenced strings: 17
 *   insn=0x00000000004AF788 string=0x00000000004AF78C "$(!"
 *   insn=0x00000000004AF790 string=0x00000000004AF794 "&$"
 *   insn=0x00000000004AF794 string=0x00000000004AF798 "G8%"
 *   insn=0x00000000004AF79C string=0x00000000004AF7A0 ""
 *   insn=0x00000000004AF7A0 string=0x00000000004AF7A4 "@@-q!"
 *   insn=0x00000000004AF7A4 string=0x00000000004AF7A8 "q!"
 *   insn=0x00000000004AF7B8 string=0x00000000004AF7BC "c'"
 *   insn=0x00000000004AF7BC string=0x00000000004AF7C0 "!2"
 *   insn=0x00000000004AF7C4 string=0x00000000004AF7C8 "G\n'"
 *   insn=0x00000000004AF7CC string=0x00000000004AF7D0 "38#"
 *   insn=0x00000000004AF7D0 string=0x00000000004AF7D4 "B80"
 *   insn=0x00000000004AF7D4 string=0x00000000004AF7D8 "!(#"
 *   insn=0x00000000004AF7D8 string=0x00000000004AF7DC "#:'"
 *   insn=0x00000000004AF7E4 string=0x00000000004AF7E8 "$*'"
 *   insn=0x00000000004AF7E8 string=0x00000000004AF7EC "F8&"
 *   insn=0x00000000004AF7F0 string=0x00000000004AF7F4 "A8%"
 *   insn=0x00000000004AF80C string=0x00000000004AF810 "\t="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Matrix4::FromRotationQuaternion@<S0>(float *a1@<X0>, __int64 a2@<X8>)
{
  float v2; // s0
  float v3; // s1
  float v4; // s5
  float v5; // s6
  float v6; // s7
  float v7; // s16
  float v8; // s17
  float v9; // s4
  float v10; // s3
  float v11; // s1
  float v12; // s7
  float v13; // s0
  float v14; // s2
  float v15; // s18
  float result; // s0

  v2 = a1[2];
  v3 = a1[3];
  v4 = v2 * (float)(v2 + v2);
  v5 = v3 * (float)(v3 + v3);
  *(float *)a2 = (float)(1.0 - v4) - v5;
  v6 = *a1;
  v7 = a1[1];
  v8 = (float)(v2 + v2) * v3;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  v9 = (float)(v3 + v3) * v6;
  v10 = (float)(v2 + v2) * v6;
  v11 = v3 * (float)(v7 + v7);
  v12 = (float)(v7 + v7) * v6;
  v13 = v2 * (float)(v7 + v7);
  v14 = 1.0 - (float)(v7 * (float)(v7 + v7));
  v15 = v13 + v9;
  result = v13 - v9;
  *(float *)(a2 + 32) = v11 + v10;
  *(float *)(a2 + 36) = v8 - v12;
  *(_QWORD *)(a2 + 52) = 0;
  *(_QWORD *)(a2 + 44) = 0;
  *(float *)(a2 + 4) = v15;
  *(float *)(a2 + 8) = v11 - v10;
  *(float *)(a2 + 20) = v14 - v5;
  *(float *)(a2 + 24) = v8 + v12;
  *(float *)(a2 + 16) = result;
  *(float *)(a2 + 40) = v14 - v4;
  *(_DWORD *)(a2 + 60) = 1065353216;
  return result;
}

