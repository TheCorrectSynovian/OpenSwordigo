/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051BE00
 * Mangled: _Z18PVRTMatrixOrthoRHFR11PVRTMATRIXfffffb
 * Demangled: PVRTMatrixOrthoRHF(PVRTMATRIXf &,float,float,float,float,bool)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 11
 *   insn=0x000000000051BE10 string=0x000000000051BE14 "S"
 *   insn=0x000000000051BE14 string=0x000000000051BE18 "C8#"
 *   insn=0x000000000051BE20 string=0x000000000051BE24 "H"
 *   insn=0x000000000051BE28 string=0x000000000051BE2C "i"
 *   insn=0x000000000051BE34 string=0x000000000051BE38 "B"
 *   insn=0x000000000051BE5C string=0x000000000051BEAC "h"
 *   insn=0x000000000051BE60 string=0x000000000051BE64 ""
 *   insn=0x000000000051BE64 string=0x000000000059C1B0 "."
 *   insn=0x000000000051BE68 string=0x000000000051BE6C ""
 *   insn=0x000000000051BE78 string=0x000000000051BE7C "H"
 *   insn=0x000000000051BECC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTMatrixOrthoRHF(__int64 result, char a2, float a3, float a4, float a5, float a6)
{
  float v6; // s3

  v6 = a5 - a6;
  _ReadStatusReg(TPIDR_EL0);
  *(float *)result = 2.0 / a3;
  *(_QWORD *)(result + 12) = 0;
  *(_QWORD *)(result + 4) = 0;
  *(float *)(result + 20) = 2.0 / a4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(float *)(result + 40) = 1.0 / v6;
  *(float *)(result + 44) = a5 / v6;
  *(_OWORD *)(result + 48) = xmmword_583800;
  if ( (a2 & 1) != 0 )
    return PVRTMatrixMultiplyF();
  return result;
}

