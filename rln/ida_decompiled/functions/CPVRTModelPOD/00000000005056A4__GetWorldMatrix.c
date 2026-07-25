/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005056A4
 * Mangled: _ZNK13CPVRTModelPOD14GetWorldMatrixER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetWorldMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 1
 *   0x00000000001FDC10  CPVRTModelPOD::GetWorldMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callees: 1
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 28
 *   insn=0x00000000005056C8 string=0x00000000005056CC "I"
 *   insn=0x00000000005056CC string=0x00000000005056D0 ")"
 *   insn=0x00000000005056D4 string=0x00000000005056D8 "  "
 *   insn=0x00000000005056D8 string=0x00000000005056DC ")}\n"
 *   insn=0x00000000005056E0 string=0x00000000005056E4 ""
 *   insn=0x00000000005056E0 string=0x00000000005056F4 "\n\t@"
 *   insn=0x00000000005056E4 string=0x00000000005056E8 ")}@"
 *   insn=0x00000000005056E8 string=0x00000000005056EC ""
 *   insn=0x00000000005056EC string=0x00000000005056F0 ""
 *   insn=0x00000000005056F4 string=0x00000000005056F8 "5}@"
 *   insn=0x00000000005056F8 string=0x00000000005056FC "AYi"
 *   insn=0x0000000000505704 string=0x0000000000505708 "@"
 *   insn=0x0000000000505708 string=0x000000000050570C ""
 *   insn=0x0000000000505710 string=0x0000000000505714 "`"
 *   insn=0x0000000000505718 string=0x000000000050571C "`\n"
 *   insn=0x0000000000505720 string=0x0000000000505724 "`"
 *   insn=0x0000000000505728 string=0x000000000050572C "`"
 *   insn=0x0000000000505744 string=0x0000000000505748 "N"
 *   insn=0x0000000000505748 string=0x00000000001F8480 "0'"
 *   insn=0x000000000050574C string=0x0000000000505750 "\t"
 *   insn=0x0000000000505750 string=0x0000000000505754 "\n\t@"
 *   insn=0x0000000000505754 string=0x0000000000505758 "Iy5"
 *   insn=0x0000000000505758 string=0x000000000050575C "@"
 *   insn=0x000000000050575C string=0x0000000000505760 "`"
 *   insn=0x0000000000505760 string=0x0000000000505764 ""
 *   insn=0x0000000000505768 string=0x000000000050576C "`\n"
 *   insn=0x0000000000505770 string=0x0000000000505774 "`"
 *   insn=0x0000000000505778 string=0x000000000050577C "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __fastcall CPVRTModelPOD::GetWorldMatrix(__int64 a1, long double *a2, __int64 a3)
{
  __int64 v4; // x8
  unsigned __int64 v6; // x8
  __int64 v7; // x21
  long double result; // q0
  __int64 v9; // x8
  _OWORD *v10; // x8

  v4 = *(_QWORD *)(a1 + 128);
  if ( *(float *)v4 == 0.0 )
  {
    v6 = *(_QWORD *)(v4 + 32)
       + ((unsigned __int64)(-1431655765 * (unsigned int)((a3 - *(_QWORD *)(a1 + 80)) >> 5)) << 6);
LABEL_5:
    a2[3] = *(long double *)(v6 + 48);
    a2[2] = *(long double *)(v6 + 32);
    a2[1] = *(long double *)(v6 + 16);
    result = *(long double *)v6;
    *a2 = *(long double *)v6;
    return result;
  }
  v7 = -1431655765 * (unsigned int)((a3 - *(_QWORD *)(a1 + 80)) >> 5);
  if ( *(float *)v4 == *(float *)(*(_QWORD *)(v4 + 16) + 4 * v7) )
  {
    v6 = *(_QWORD *)(v4 + 24) + (v7 << 6);
    goto LABEL_5;
  }
  CPVRTModelPOD::GetWorldMatrixNoCache();
  v9 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4 * v7) = *(_DWORD *)v9;
  v10 = (_OWORD *)(*(_QWORD *)(v9 + 24) + (v7 << 6));
  v10[3] = *((_OWORD *)a2 + 3);
  v10[2] = *((_OWORD *)a2 + 2);
  v10[1] = *((_OWORD *)a2 + 1);
  result = *a2;
  *v10 = *(_OWORD *)a2;
  return result;
}

