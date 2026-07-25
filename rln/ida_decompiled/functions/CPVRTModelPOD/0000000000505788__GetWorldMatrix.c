/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505788
 * Mangled: _ZNK13CPVRTModelPOD14GetWorldMatrixERK8SPODNode
 * Demangled: CPVRTModelPOD::GetWorldMatrix(SPODNode const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 28
 *   insn=0x00000000005057B0 string=0x00000000005057B4 "*"
 *   insn=0x00000000005057B4 string=0x00000000005057B8 "J"
 *   insn=0x00000000005057B8 string=0x00000000005057BC "kU"
 *   insn=0x00000000005057BC string=0x00000000005057C0 "  "
 *   insn=0x00000000005057C0 string=0x00000000005057C4 "J}"
 *   insn=0x00000000005057C8 string=0x00000000005057CC ""
 *   insn=0x00000000005057C8 string=0x00000000005057DC "\t@"
 *   insn=0x00000000005057CC string=0x00000000005057D0 "I}@"
 *   insn=0x00000000005057D0 string=0x00000000005057D4 ""
 *   insn=0x00000000005057D4 string=0x00000000005057D8 ""
 *   insn=0x00000000005057DC string=0x00000000005057E0 "U}@"
 *   insn=0x00000000005057E0 string=0x00000000005057E4 "aYj"
 *   insn=0x00000000005057EC string=0x00000000005057F0 "@"
 *   insn=0x00000000005057F0 string=0x00000000005057F4 ""
 *   insn=0x00000000005057F8 string=0x00000000005057FC "`"
 *   insn=0x0000000000505800 string=0x0000000000505804 "`\n"
 *   insn=0x0000000000505808 string=0x000000000050580C "`"
 *   insn=0x0000000000505810 string=0x0000000000505814 "`"
 *   insn=0x0000000000505834 string=0x00000000001F8480 "0'"
 *   insn=0x0000000000505838 string=0x000000000050583C "\t"
 *   insn=0x000000000050583C string=0x0000000000505840 "\n\t@"
 *   insn=0x0000000000505840 string=0x0000000000505844 "Iy5"
 *   insn=0x0000000000505844 string=0x0000000000505848 "@"
 *   insn=0x0000000000505848 string=0x000000000050584C "`"
 *   insn=0x000000000050584C string=0x0000000000505850 ""
 *   insn=0x0000000000505854 string=0x0000000000505858 "`\n"
 *   insn=0x000000000050585C string=0x0000000000505860 "`"
 *   insn=0x0000000000505864 string=0x0000000000505868 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall CPVRTModelPOD::GetWorldMatrix@<Q0>(__int64 a1@<X0>, __int64 a2@<X1>, long double *a3@<X8>)
{
  __int64 v5; // x8
  unsigned __int64 v6; // x8
  __int64 v7; // x21
  long double result; // q0
  __int64 v9; // x8
  _OWORD *v10; // x8

  v5 = *(_QWORD *)(a1 + 128);
  if ( *(float *)v5 == 0.0 )
  {
    v6 = *(_QWORD *)(v5 + 32)
       + ((unsigned __int64)(-1431655765 * (unsigned int)((a2 - *(_QWORD *)(a1 + 80)) >> 5)) << 6);
LABEL_5:
    a3[3] = *(long double *)(v6 + 48);
    a3[2] = *(long double *)(v6 + 32);
    a3[1] = *(long double *)(v6 + 16);
    result = *(long double *)v6;
    *a3 = *(long double *)v6;
    return result;
  }
  v7 = -1431655765 * (unsigned int)((a2 - *(_QWORD *)(a1 + 80)) >> 5);
  if ( *(float *)v5 == *(float *)(*(_QWORD *)(v5 + 16) + 4 * v7) )
  {
    v6 = *(_QWORD *)(v5 + 24) + (v7 << 6);
    goto LABEL_5;
  }
  CPVRTModelPOD::GetWorldMatrixNoCache();
  v9 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(*(_QWORD *)(v9 + 16) + 4 * v7) = *(_DWORD *)v9;
  v10 = (_OWORD *)(*(_QWORD *)(v9 + 24) + (v7 << 6));
  v10[3] = *((_OWORD *)a3 + 3);
  v10[2] = *((_OWORD *)a3 + 2);
  v10[1] = *((_OWORD *)a3 + 1);
  result = *a3;
  *v10 = *(_OWORD *)a3;
  return result;
}

