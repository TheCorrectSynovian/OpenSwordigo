/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051BD2C
 * Mangled: _Z18PVRTMatrixOrthoLHFR11PVRTMATRIXfffffb
 * Demangled: PVRTMatrixOrthoLHF(PVRTMATRIXf &,float,float,float,float,bool)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 14
 *   insn=0x000000000051BD3C string=0x000000000051BD40 "e8""
 *   insn=0x000000000051BD50 string=0x000000000051BD54 "S"
 *   insn=0x000000000051BD54 string=0x000000000051BD58 "@8#"
 *   insn=0x000000000051BD58 string=0x000000000051BD5C "I"
 *   insn=0x000000000051BD5C string=0x000000000051BD60 "h"
 *   insn=0x000000000051BD60 string=0x000000000051BD64 "B"
 *   insn=0x000000000051BD64 string=0x000000000051BD68 " "
 *   insn=0x000000000051BD8C string=0x000000000051BDDC "h"
 *   insn=0x000000000051BD90 string=0x000000000051BD94 ""
 *   insn=0x000000000051BD94 string=0x000000000059C1B0 "."
 *   insn=0x000000000051BD98 string=0x000000000051BD9C ""
 *   insn=0x000000000051BDA8 string=0x000000000051BDAC "H"
 *   insn=0x000000000051BDE8 string=0x000000000051BDFC "5i"
 *   insn=0x000000000051BDFC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTMatrixOrthoLHF(__int64 result, char a2, float a3, float a4, float a5, float a6)
{
  _ReadStatusReg(TPIDR_EL0);
  *(float *)result = 2.0 / a3;
  *(_QWORD *)(result + 12) = 0;
  *(_QWORD *)(result + 4) = 0;
  *(float *)(result + 20) = 2.0 / a4;
  *(_QWORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = 0;
  *(float *)(result + 40) = 1.0 / (float)(a6 - a5);
  *(float *)(result + 44) = a5 / (float)(a5 - a6);
  *(_OWORD *)(result + 48) = xmmword_583800;
  if ( (a2 & 1) != 0 )
    return PVRTMatrixMultiplyF();
  return result;
}

