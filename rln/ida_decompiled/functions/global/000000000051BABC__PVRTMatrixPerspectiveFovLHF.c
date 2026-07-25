/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051BABC
 * Mangled: _Z27PVRTMatrixPerspectiveFovLHFR11PVRTMATRIXfffffb
 * Demangled: PVRTMatrixPerspectiveFovLHF(PVRTMATRIXf &,float,float,float,float,bool)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002006D0  .tan
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 27
 *   insn=0x000000000051BAD4 string=0x000000000051BAD8 "U"
 *   insn=0x000000000051BADC string=0x000000000051BAE0 "I"
 *   insn=0x000000000051BAE8 string=0x000000000051BAEC "\n"
 *   insn=0x000000000051BAF4 string=0x000000000051BAF8 "B"
 *   insn=0x000000000051BAFC string=0x000000000051BB00 "h"
 *   insn=0x000000000051BB04 string=0x000000000051BB08 "K"
 *   insn=0x000000000051BB10 string=0x000000000051BB14 "H"
 *   insn=0x000000000051BB20 string=0x000000000051BB24 ""\t("
 *   insn=0x000000000051BB24 string=0x000000000051BB28 "@"
 *   insn=0x000000000051BB28 string=0x000000000051BB2C "A"
 *   insn=0x000000000051BB30 string=0x000000000051BB34 "`"
 *   insn=0x000000000051BB34 string=0x000000000051BB38 " ("
 *   insn=0x000000000051BB38 string=0x000000000051BB3C "A"
 *   insn=0x000000000051BB4C string=0x000000000051BB50 "d"
 *   insn=0x000000000051BB50 string=0x000000000051BB54 "`*"
 *   insn=0x000000000051BB54 string=0x000000000051BB58 "a:"
 *   insn=0x000000000051BB58 string=0x000000000051BB5C "c"
 *   insn=0x000000000051BB64 string=0x000000000051BB68 "`"
 *   insn=0x000000000051BB68 string=0x000000000051BB6C ""
 *   insn=0x000000000051BB6C string=0x000000000059C190 "."
 *   insn=0x000000000051BB70 string=0x000000000051BB74 ""
 *   insn=0x000000000051BB78 string=0x000000000051BB7C "`\n"
 *   insn=0x000000000051BB80 string=0x000000000051BB84 "H"
 *   insn=0x000000000051BB8C string=0x000000000051BB90 "`"
 *   insn=0x000000000051BB90 string=0x000000000051BB94 "H"
 *   insn=0x000000000051BBA0 string=0x000000000051BBA4 "`"
 *   insn=0x000000000051BBEC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTMatrixPerspectiveFovLHF(__int64 a1, char a2, float a3, float a4, float a5, float a6)
{
  double v8; // d0
  float v11; // s11
  float v12; // s0
  float v13; // s0
  float v14; // s1

  _ReadStatusReg(TPIDR_EL0);
  v8 = (float)(a3 * 0.5);
  if ( (a2 & 1) != 0 )
    v11 = 1.0 / a4;
  else
    v11 = a4;
  v12 = tan(v8);
  v13 = 1.0 / v12;
  v14 = 1.0 / (float)(a6 - a5);
  *(float *)(a1 + 20) = v13;
  *(_QWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(float *)a1 = v13 / v11;
  *(float *)(a1 + 40) = v14 * a6;
  *(float *)(a1 + 56) = -(float)((float)(a5 * a6) * v14);
  *(_QWORD *)(a1 + 44) = 1065353216;
  *(_DWORD *)(a1 + 60) = 0;
  if ( (a2 & 1) != 0 )
    PVRTMatrixMultiplyF();
}

