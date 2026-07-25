/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050529C
 * Mangled: _ZNK13CPVRTModelPOD17GetRotationMatrixER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetRotationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 1
 *   0x00000000001FF440  CPVRTModelPOD::GetRotationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callees: 4
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7110  PVRTMatrixRotationQuaternionF(PVRTMATRIXf &,PVRTQUATERNIONf const&)
 *   0x00000000001FC2F0  PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&,float)
 *   0x00000000001FE600  PVRTMatrixIdentityF(PVRTMATRIXf &)
 *
 * Referenced strings: 22
 *   insn=0x00000000005052A8 string=0x00000000005052AC "T"
 *   insn=0x00000000005052B8 string=0x00000000005052BC "A"
 *   insn=0x00000000005052C0 string=0x00000000005052C4 "H`@9"
 *   insn=0x00000000005052C4 string=0x00000000005052C8 ""
 *   insn=0x00000000005052C8 string=0x00000000005052CC "@@"
 *   insn=0x00000000005052CC string=0x00000000005052D0 "I"
 *   insn=0x00000000005052D0 string=0x00000000005052D4 "\n\t"
 *   insn=0x00000000005052D4 string=0x00000000005052D8 "i"
 *   insn=0x00000000005052D8 string=0x00000000005052DC "+yj"
 *   insn=0x00000000005052DC string=0x00000000005052E0 "J"
 *   insn=0x00000000005052E0 string=0x00000000005052E4 ")"
 *   insn=0x00000000005052E8 string=0x00000000005052EC "("
 *   insn=0x00000000005052EC string=0x00000000005052F0 ""\t"
 *   insn=0x00000000005052F0 string=0x00000000005052F4 "\t"
 *   insn=0x0000000000505304 string=0x0000000000505308 "Iu"
 *   insn=0x0000000000505308 string=0x000000000050530C "("
 *   insn=0x000000000050530C string=0x0000000000505310 ")"
 *   insn=0x0000000000505310 string=0x0000000000505314 """
 *   insn=0x0000000000505320 string=0x00000000001FC2F0 "0'"
 *   insn=0x0000000000505328 string=0x000000000050532C "y"
 *   insn=0x000000000050532C string=0x00000000001F7110 "0'"
 *   insn=0x0000000000505350 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::GetRotationMatrix(__int64 a1, __int64 a2, __int64 a3)
{
  _ReadStatusReg(TPIDR_EL0);
  if ( !*(_QWORD *)(a3 + 56) )
    return PVRTMatrixIdentityF();
  if ( (*(_BYTE *)(a3 + 24) & 2) != 0 )
    PVRTMatrixQuaternionSlerpF();
  return PVRTMatrixRotationQuaternionF();
}

