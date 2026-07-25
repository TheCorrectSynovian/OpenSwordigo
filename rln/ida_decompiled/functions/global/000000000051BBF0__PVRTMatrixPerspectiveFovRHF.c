/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051BBF0
 * Mangled: _Z27PVRTMatrixPerspectiveFovRHFR11PVRTMATRIXfffffb
 * Demangled: PVRTMatrixPerspectiveFovRHF(PVRTMATRIXf &,float,float,float,float,bool)
 *
 * Callers: 0
 *
 * Callees: 3
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000002006D0  .tan
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 31
 *   insn=0x000000000051BC08 string=0x000000000051BC0C "U"
 *   insn=0x000000000051BC10 string=0x000000000051BC14 "I"
 *   insn=0x000000000051BC1C string=0x000000000051BC20 "\n"
 *   insn=0x000000000051BC28 string=0x000000000051BC2C "B"
 *   insn=0x000000000051BC30 string=0x000000000051BC34 "h"
 *   insn=0x000000000051BC38 string=0x000000000051BC3C "K"
 *   insn=0x000000000051BC44 string=0x000000000051BC48 "h"
 *   insn=0x000000000051BC50 string=0x000000000051BC54 "!9("
 *   insn=0x000000000051BC58 string=0x000000000051BC5C "@"
 *   insn=0x000000000051BC5C string=0x000000000051BC60 "A"
 *   insn=0x000000000051BC60 string=0x000000000051BC64 "")("
 *   insn=0x000000000051BC64 string=0x000000000051BC68 "c)"
 *   insn=0x000000000051BC6C string=0x000000000051BC70 "`"
 *   insn=0x000000000051BC70 string=0x000000000051BC74 "@!"
 *   insn=0x000000000051BC74 string=0x000000000051BC78 "a!"
 *   insn=0x000000000051BC88 string=0x000000000051BC8C "e"
 *   insn=0x000000000051BC8C string=0x000000000051BC90 "`*"
 *   insn=0x000000000051BC90 string=0x000000000051BC94 "a:"
 *   insn=0x000000000051BC94 string=0x000000000051BC98 "d"
 *   insn=0x000000000051BCA0 string=0x000000000051BCA4 "`"
 *   insn=0x000000000051BCA4 string=0x000000000051BCA8 ""
 *   insn=0x000000000051BCA8 string=0x000000000059C1B0 "."
 *   insn=0x000000000051BCAC string=0x000000000051BCB0 ""
 *   insn=0x000000000051BCB4 string=0x000000000051BCB8 "`\n"
 *   insn=0x000000000051BCBC string=0x000000000051BCC0 "H"
 *   insn=0x000000000051BCC8 string=0x000000000051BCCC "`"
 *   insn=0x000000000051BCCC string=0x000000000051BCD0 "H"
 *   insn=0x000000000051BCDC string=0x000000000051BCE0 "`"
 *   insn=0x000000000051BCF4 string=0x000000000051BCF8 "V"
 *   insn=0x000000000051BD08 string=0x000000000051BD28 "ji"
 *   insn=0x000000000051BD28 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall PVRTMatrixPerspectiveFovRHF(__int64 a1, char a2, float a3, float a4, float a5, float a6)
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
  v14 = 1.0 / (float)(a5 - a6);
  *(float *)(a1 + 20) = v13;
  *(_QWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(float *)a1 = v13 / v11;
  *(float *)(a1 + 40) = (float)(a5 + a6) * v14;
  *(float *)(a1 + 56) = (float)((float)(a6 + a6) * a5) * v14;
  *(_QWORD *)(a1 + 44) = 3212836864LL;
  *(_DWORD *)(a1 + 60) = 0;
  if ( (a2 & 1) != 0 )
    PVRTMatrixMultiplyF();
}

