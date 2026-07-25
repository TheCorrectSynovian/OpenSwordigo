/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000513770
 * Mangled: _Z29PVRTMatrixRotationQuaternionFR11PVRTMATRIXfRK15PVRTQUATERNIONf
 * Demangled: PVRTMatrixRotationQuaternionF(PVRTMATRIXf &,PVRTQUATERNIONf const&)
 *
 * Callers: 1
 *   0x00000000001F7110  PVRTMatrixRotationQuaternionF(PVRTMATRIXf &,PVRTQUATERNIONf const&)
 *
 * Callees: 0
 *
 * Referenced strings: 62
 *   insn=0x000000000051377C string=0x0000000000513780 "##"
 *   insn=0x0000000000513780 string=0x0000000000513784 "D(""
 *   insn=0x0000000000513784 string=0x0000000000513788 "!#"
 *   insn=0x0000000000513788 string=0x000000000051378C "B$"
 *   insn=0x000000000051378C string=0x0000000000513790 "!( "
 *   insn=0x0000000000513790 string=0x0000000000513794 "!8""
 *   insn=0x0000000000513798 string=0x000000000051379C "!"
 *   insn=0x000000000051379C string=0x00000000005137A0 """
 *   insn=0x00000000005137A0 string=0x00000000005137A4 "!(!"
 *   insn=0x00000000005137A4 string=0x00000000005137A8 "B(""
 *   insn=0x00000000005137A8 string=0x00000000005137AC "!#"
 *   insn=0x00000000005137AC string=0x00000000005137B0 "B$"
 *   insn=0x00000000005137B0 string=0x00000000005137B4 "!8""
 *   insn=0x00000000005137B8 string=0x00000000005137BC "!@-#"
 *   insn=0x00000000005137BC string=0x00000000005137C0 "#"
 *   insn=0x00000000005137C4 string=0x00000000005137C8 "!(!"
 *   insn=0x00000000005137C8 string=0x00000000005137CC "B(""
 *   insn=0x00000000005137CC string=0x00000000005137D0 "!#"
 *   insn=0x00000000005137D0 string=0x00000000005137D4 "B$"
 *   insn=0x00000000005137D4 string=0x00000000005137D8 "!(""
 *   insn=0x00000000005137DC string=0x00000000005137E0 "!"
 *   insn=0x00000000005137E0 string=0x00000000005137E4 """
 *   insn=0x00000000005137E4 string=0x00000000005137E8 "!(!"
 *   insn=0x00000000005137E8 string=0x00000000005137EC "B(""
 *   insn=0x00000000005137EC string=0x00000000005137F0 "!#"
 *   insn=0x00000000005137F0 string=0x00000000005137F4 "B$"
 *   insn=0x00000000005137F4 string=0x00000000005137F8 "!(""
 *   insn=0x00000000005137FC string=0x0000000000513800 "!"
 *   insn=0x0000000000513800 string=0x0000000000513804 ""@"
 *   insn=0x0000000000513804 string=0x0000000000513808 "#(!"
 *   insn=0x0000000000513808 string=0x000000000051380C "D(""
 *   insn=0x000000000051380C string=0x0000000000513810 "!#"
 *   insn=0x0000000000513810 string=0x0000000000513814 "B$"
 *   insn=0x0000000000513818 string=0x000000000051381C "!8""
 *   insn=0x0000000000513820 string=0x0000000000513824 "!@-#"
 *   insn=0x0000000000513824 string=0x0000000000513828 "#"
 *   insn=0x000000000051382C string=0x0000000000513830 "B(""
 *   insn=0x0000000000513830 string=0x0000000000513834 "!(!"
 *   insn=0x0000000000513834 string=0x0000000000513838 "B#"
 *   insn=0x0000000000513838 string=0x000000000051383C "!$"
 *   insn=0x000000000051383C string=0x0000000000513840 "A8!"
 *   insn=0x0000000000513844 string=0x0000000000513848 "!@-#"
 *   insn=0x0000000000513848 string=0x000000000051384C "#"
 *   insn=0x000000000051384C string=0x0000000000513850 "!(!"
 *   insn=0x0000000000513850 string=0x0000000000513854 "B(""
 *   insn=0x0000000000513854 string=0x0000000000513858 "!#"
 *   insn=0x0000000000513858 string=0x000000000051385C "B$"
 *   insn=0x000000000051385C string=0x0000000000513860 "!8""
 *   insn=0x0000000000513864 string=0x0000000000513868 "!"
 *   insn=0x0000000000513868 string=0x000000000051386C "#"
 *   insn=0x000000000051386C string=0x0000000000513870 "$"
 *   insn=0x0000000000513870 string=0x0000000000513874 "!(!"
 *   insn=0x0000000000513874 string=0x0000000000513878 "!""
 *   insn=0x0000000000513878 string=0x000000000051387C "b(#"
 *   insn=0x000000000051387C string=0x0000000000513880 "B$"
 *   insn=0x0000000000513880 string=0x0000000000513884 "!(""
 *   insn=0x0000000000513888 string=0x000000000051388C "!@-"
 *   insn=0x0000000000513894 string=0x0000000000513898 "<"
 *   insn=0x0000000000513898 string=0x000000000051389C "#(!"
 *   insn=0x000000000051389C string=0x00000000005138A0 "!#"
 *   insn=0x00000000005138A0 string=0x00000000005138A4 "C(""
 *   insn=0x00000000005138A4 string=0x00000000005138A8 "B#"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall PVRTMatrixRotationQuaternionF(__int64 a1, float *a2)
{
  float v2; // s1
  float v3; // s2
  float v4; // s3
  float v5; // s4
  float v6; // s1
  float v7; // s2
  float v8; // s3
  float v9; // s4
  float v10; // s1
  float v11; // s2
  float result; // s0

  *(float *)a1 = (float)((float)(a2[1] * (float)(a2[1] * -2.0)) + 1.0) - (float)(a2[2] * (float)(a2[2] + a2[2]));
  *(float *)(a1 + 4) = (float)((float)(*a2 + *a2) * a2[1]) - (float)((float)(a2[2] + a2[2]) * a2[3]);
  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = a2[3];
  *(_DWORD *)(a1 + 12) = 0;
  *(float *)(a1 + 8) = (float)((float)(v2 + v2) * v4) + (float)((float)(v3 + v3) * v5);
  *(float *)(a1 + 16) = (float)((float)(*a2 + *a2) * a2[1]) + (float)((float)(a2[2] + a2[2]) * a2[3]);
  *(float *)(a1 + 20) = (float)(1.0 - (float)(*a2 * (float)(*a2 + *a2))) - (float)(a2[2] * (float)(a2[2] + a2[2]));
  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  *(_DWORD *)(a1 + 28) = 0;
  *(float *)(a1 + 24) = (float)((float)(v7 + v7) * v8) - (float)((float)(v6 + v6) * v9);
  *(float *)(a1 + 32) = (float)((float)(*a2 + *a2) * a2[2]) - (float)((float)(a2[1] + a2[1]) * a2[3]);
  *(float *)(a1 + 36) = (float)((float)(a2[1] + a2[1]) * a2[2]) + (float)((float)(*a2 + *a2) * a2[3]);
  v10 = *a2;
  v11 = a2[1];
  *(_QWORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  result = (float)(1.0 - (float)(v10 * (float)(v10 + v10))) - (float)(v11 * (float)(v11 + v11));
  *(float *)(a1 + 40) = result;
  return result;
}

