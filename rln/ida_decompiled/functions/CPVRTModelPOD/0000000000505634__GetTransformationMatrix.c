/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505634
 * Mangled: _ZNK13CPVRTModelPOD23GetTransformationMatrixER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetTransformationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE600  PVRTMatrixIdentityF(PVRTMATRIXf &)
 *
 * Referenced strings: 13
 *   insn=0x0000000000505634 string=0x0000000000505638 "H"
 *   insn=0x0000000000505638 string=0x000000000050563C "I`@9"
 *   insn=0x0000000000505640 string=0x0000000000505644 "\t@@"
 *   insn=0x0000000000505644 string=0x0000000000505648 "J(@"
 *   insn=0x0000000000505648 string=0x000000000050564C ")\t"
 *   insn=0x0000000000505650 string=0x0000000000505654 "Iyi"
 *   insn=0x0000000000505650 string=0x0000000000505668 ")m"
 *   insn=0x0000000000505654 string=0x0000000000505658 "\t\t"
 *   insn=0x0000000000505668 string=0x000000000050566C ""
 *   insn=0x0000000000505670 string=0x0000000000505674 " "
 *   insn=0x0000000000505678 string=0x000000000050567C " "
 *   insn=0x0000000000505680 string=0x0000000000505684 " "
 *   insn=0x0000000000505688 string=0x000000000050568C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall CPVRTModelPOD::GetTransformationMatrix(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 v3; // x8
  __int64 v4; // x10
  __int64 v5; // x9
  long double result; // q0

  v3 = *(_QWORD *)(a3 + 88);
  if ( v3 )
  {
    if ( (*(_BYTE *)(a3 + 24) & 8) != 0 )
    {
      v4 = *(_QWORD *)(a3 + 80);
      v5 = *(int *)(*(_QWORD *)(a1 + 128) + 8LL);
      if ( v4 )
        v3 += 4LL * *(unsigned int *)(v4 + 4 * v5);
      else
        v3 += 64LL * (_DWORD)v5;
    }
    a2[3] = *(_OWORD *)(v3 + 48);
    a2[2] = *(_OWORD *)(v3 + 32);
    a2[1] = *(_OWORD *)(v3 + 16);
    result = *(long double *)v3;
    *a2 = *(_OWORD *)v3;
  }
  else
  {
    PVRTMatrixIdentityF();
  }
  return result;
}

