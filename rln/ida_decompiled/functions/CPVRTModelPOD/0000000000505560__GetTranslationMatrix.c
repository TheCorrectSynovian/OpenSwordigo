/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505560
 * Mangled: _ZNK13CPVRTModelPOD20GetTranslationMatrixER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetTranslationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 1
 *   0x00000000001F5E60  CPVRTModelPOD::GetTranslationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FE600  PVRTMatrixIdentityF(PVRTMATRIXf &)
 *   0x0000000000201470  PVRTMatrixVec3LerpF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,float)
 *   0x0000000000201F90  PVRTMatrixTranslationF(PVRTMATRIXf &,float,float,float)
 *
 * Referenced strings: 17
 *   insn=0x000000000050556C string=0x0000000000505570 "T"
 *   insn=0x000000000050557C string=0x0000000000505580 "H"
 *   insn=0x0000000000505584 string=0x0000000000505588 "I`@9"
 *   insn=0x000000000050558C string=0x00000000005055A8 "\t@@"
 *   insn=0x00000000005055A8 string=0x00000000005055AC "J"
 *   insn=0x00000000005055AC string=0x00000000005055B0 "+\t"
 *   insn=0x00000000005055B0 string=0x00000000005055B4 "\n"
 *   insn=0x00000000005055B4 string=0x00000000005055B8 "Lyk"
 *   insn=0x00000000005055B4 string=0x00000000005055D4 " "
 *   insn=0x00000000005055B8 string=0x00000000005055BC "k"
 *   insn=0x00000000005055BC string=0x00000000005055C0 "J"
 *   insn=0x00000000005055C0 string=0x00000000005055C4 " "
 *   insn=0x00000000005055D4 string=0x00000000005055D8 "j"
 *   insn=0x00000000005055D8 string=0x00000000005055DC "I"
 *   insn=0x00000000005055F8 string=0x00000000005055FC "e"
 *   insn=0x000000000050560C string=0x0000000000505620 ","
 *   insn=0x0000000000505620 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::GetTranslationMatrix(__int64 a1, __int64 a2, __int64 a3)
{
  _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(a3 + 40) )
    return PVRTMatrixIdentityF();
  if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
    PVRTMatrixVec3LerpF();
  return PVRTMatrixTranslationF();
}

