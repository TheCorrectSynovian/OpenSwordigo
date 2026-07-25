/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005054AC
 * Mangled: _ZNK13CPVRTModelPOD14GetTranslationERK8SPODNode
 * Demangled: CPVRTModelPOD::GetTranslation(SPODNode const&)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000201470  PVRTMatrixVec3LerpF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,float)
 *
 * Referenced strings: 20
 *   insn=0x00000000005054B8 string=0x00000000005054BC "S"
 *   insn=0x00000000005054BC string=0x00000000005054C0 "h"
 *   insn=0x00000000005054C4 string=0x00000000005054C8 "("
 *   insn=0x00000000005054C8 string=0x00000000005054CC "H"
 *   insn=0x00000000005054CC string=0x00000000005054D0 ")`@9"
 *   insn=0x00000000005054D4 string=0x00000000005054D8 "\t\t@"
 *   insn=0x00000000005054D4 string=0x00000000005054EC "\t@@"
 *   insn=0x00000000005054DC string=0x00000000005054E0 ""
 *   insn=0x00000000005054EC string=0x00000000005054F0 "+"
 *   insn=0x00000000005054F0 string=0x00000000005054F4 "*\t"
 *   insn=0x00000000005054F4 string=0x00000000005054F8 ""
 *   insn=0x00000000005054F8 string=0x00000000005054FC "l\t\n"
 *   insn=0x00000000005054F8 string=0x0000000000505518 " "
 *   insn=0x00000000005054FC string=0x0000000000505500 "jyj"
 *   insn=0x0000000000505504 string=0x0000000000505508 " "
 *   insn=0x0000000000505518 string=0x000000000050551C "J"
 *   insn=0x000000000050551C string=0x0000000000505520 "I"
 *   insn=0x0000000000505538 string=0x000000000050553C "h"
 *   insn=0x0000000000505548 string=0x000000000050555C "]"
 *   insn=0x000000000050555C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall CPVRTModelPOD::GetTranslation(__int64 a1, __int64 a2)
{
  __int64 *v2; // x8
  __int64 v4; // [xsp+8h] [xbp-28h]

  _ReadStatusReg(TPIDR_EL0);
  v2 = *(__int64 **)(a2 + 40);
  if ( v2 )
  {
    if ( (*(_BYTE *)(a2 + 24) & 1) != 0 )
      PVRTMatrixVec3LerpF();
    else
      v4 = *v2;
  }
  return *(float *)&v4;
}

