/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505364
 * Mangled: _ZNK13CPVRTModelPOD16GetScalingMatrixER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetScalingMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 1
 *   0x00000000001F7020  CPVRTModelPOD::GetScalingMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE600  PVRTMatrixIdentityF(PVRTMATRIXf &)
 *   0x00000000001FF3C0  PVRTMatrixScalingF(PVRTMATRIXf &,float,float,float)
 *   0x0000000000201470  PVRTMatrixVec3LerpF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,float)
 *
 * Referenced strings: 17
 *   insn=0x0000000000505370 string=0x0000000000505374 "T"
 *   insn=0x0000000000505380 string=0x0000000000505384 "H$@"
 *   insn=0x0000000000505388 string=0x000000000050538C "I`@9"
 *   insn=0x0000000000505390 string=0x00000000005053AC "\t@@"
 *   insn=0x00000000005053AC string=0x00000000005053B0 "K @"
 *   insn=0x00000000005053B0 string=0x00000000005053B4 "*\t"
 *   insn=0x00000000005053B4 string=0x00000000005053B8 ""
 *   insn=0x00000000005053B8 string=0x00000000005053BC "lyj"
 *   insn=0x00000000005053B8 string=0x00000000005053D8 "Kq"
 *   insn=0x00000000005053BC string=0x00000000005053C0 "J"
 *   insn=0x00000000005053C0 string=0x00000000005053C4 "j"
 *   insn=0x00000000005053C4 string=0x00000000005053C8 " "
 *   insn=0x00000000005053D0 string=0x00000000005053D4 ""
 *   insn=0x00000000005053D8 string=0x00000000005053DC " "
 *   insn=0x00000000005053DC string=0x00000000005053E0 "i"
 *   insn=0x00000000005053E4 string=0x00000000005053E8 ")"
 *   insn=0x0000000000505428 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::GetScalingMatrix(__int64 a1, __int64 a2, __int64 a3)
{
  _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(a3 + 72) )
    return PVRTMatrixIdentityF();
  if ( (*(_BYTE *)(a3 + 24) & 4) != 0 )
    PVRTMatrixVec3LerpF();
  return PVRTMatrixScalingF();
}

