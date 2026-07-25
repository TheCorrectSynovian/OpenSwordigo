/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000050515C
 * Mangled: _ZNK13CPVRTModelPOD21GetWorldMatrixNoCacheER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 2
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *   0x000000000050515C  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Callees: 5
 *   0x00000000001F5E60  CPVRTModelPOD::GetTranslationMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7020  CPVRTModelPOD::GetScalingMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x00000000001FF440  CPVRTModelPOD::GetRotationMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 17
 *   insn=0x000000000050516C string=0x0000000000505170 "V"
 *   insn=0x0000000000505188 string=0x000000000050518C "H"
 *   insn=0x0000000000505190 string=0x0000000000505194 ")"
 *   insn=0x000000000050519C string=0x00000000005051A0 ")\t"
 *   insn=0x00000000005051A0 string=0x00000000005051A4 "j"
 *   insn=0x00000000005051A4 string=0x00000000005051A8 "Iyi"
 *   insn=0x00000000005051A4 string=0x0000000000505210 ")m"
 *   insn=0x00000000005051A8 string=0x00000000005051AC "\t\t"
 *   insn=0x00000000005051C0 string=0x00000000001F7020 "0'"
 *   insn=0x00000000005051F0 string=0x00000000001F5E60 "P'"
 *   insn=0x0000000000505210 string=0x0000000000505214 ""
 *   insn=0x0000000000505218 string=0x000000000050521C "`"
 *   insn=0x0000000000505220 string=0x0000000000505224 "`\n"
 *   insn=0x0000000000505228 string=0x000000000050522C "`"
 *   insn=0x0000000000505230 string=0x0000000000505234 "`"
 *   insn=0x0000000000505238 string=0x000000000050523C "h"
 *   insn=0x000000000050528C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::GetWorldMatrixNoCache(__int64 result, _OWORD *a2, __int64 a3)
{
  __int64 v4; // x20
  _OWORD *v5; // x8
  __int64 v6; // x10
  __int64 v7; // x9
  __int64 v8; // x8
  _BYTE v9[64]; // [xsp+8h] [xbp-68h] BYREF
  __int64 v10; // [xsp+48h] [xbp-28h]

  v4 = result;
  v10 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = *(_OWORD **)(a3 + 88);
  if ( v5 )
  {
    if ( (*(_BYTE *)(a3 + 24) & 8) != 0 )
    {
      v6 = *(_QWORD *)(a3 + 80);
      v7 = *(int *)(*(_QWORD *)(result + 128) + 8LL);
      if ( v6 )
        v5 = (_OWORD *)((char *)v5 + 4 * *(unsigned int *)(v6 + 4 * v7));
      else
        v5 += 4 * (int)v7;
    }
    a2[3] = v5[3];
    a2[2] = v5[2];
    a2[1] = v5[1];
    *a2 = *v5;
    v8 = *(int *)(a3 + 20);
    if ( (v8 & 0x80000000) == 0 )
      goto LABEL_9;
  }
  else
  {
    CPVRTModelPOD::GetScalingMatrix();
    CPVRTModelPOD::GetRotationMatrix();
    PVRTMatrixMultiplyF();
    CPVRTModelPOD::GetTranslationMatrix();
    result = PVRTMatrixMultiplyF();
    v8 = *(int *)(a3 + 20);
    if ( (v8 & 0x80000000) == 0 )
    {
LABEL_9:
      CPVRTModelPOD::GetWorldMatrixNoCache(v4, v9, *(_QWORD *)(v4 + 80) + 96 * v8);
      return PVRTMatrixMultiplyF();
    }
  }
  return result;
}

