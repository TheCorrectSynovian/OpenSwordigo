/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505CBC
 * Mangled: _ZNK13CPVRTModelPOD12GetCameraPosER12PVRTVECTOR3fS1_j
 * Demangled: CPVRTModelPOD::GetCameraPos(PVRTVECTOR3f &,PVRTVECTOR3f &,uint)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 51
 *   insn=0x0000000000505CD0 string=0x0000000000505CD4 "W"
 *   insn=0x0000000000505CE8 string=0x0000000000505CEC "hB@"
 *   insn=0x0000000000505CEC string=0x0000000000505CF0 "iN@"
 *   insn=0x0000000000505CF0 string=0x0000000000505CF4 "j*@"
 *   insn=0x0000000000505CF4 string=0x0000000000505CF8 "k*@"
 *   insn=0x0000000000505CFC string=0x0000000000505D00 ")"
 *   insn=0x0000000000505D00 string=0x0000000000505D04 "8"
 *   insn=0x0000000000505D08 string=0x0000000000505D0C "  "
 *   insn=0x0000000000505D10 string=0x0000000000505D14 "a"
 *   insn=0x0000000000505D14 string=0x0000000000505D18 ""
 *   insn=0x0000000000505D14 string=0x0000000000505D20 "\t\t@"
 *   insn=0x0000000000505D1C string=0x0000000000505D34 ""
 *   insn=0x0000000000505D20 string=0x0000000000505D24 "!yx"
 *   insn=0x0000000000505D28 string=0x0000000000505D2C "A\t"
 *   insn=0x0000000000505D2C string=0x0000000000505D30 "@"
 *   insn=0x0000000000505D68 string=0x0000000000505D6C "v"
 *   insn=0x0000000000505D7C string=0x0000000000505D80 "iB@"
 *   insn=0x0000000000505D80 string=0x0000000000505D84 " "
 *   insn=0x0000000000505D84 string=0x0000000000505D88 "  "
 *   insn=0x0000000000505D8C string=0x0000000000505D90 ")"
 *   insn=0x0000000000505D8C string=0x0000000000505DA0 "*\t@"
 *   insn=0x0000000000505D90 string=0x0000000000505D94 "}@"
 *   insn=0x0000000000505D94 string=0x0000000000505D98 "("
 *   insn=0x0000000000505D98 string=0x0000000000505D9C ""
 *   insn=0x0000000000505DA4 string=0x0000000000505DA8 "AYh"
 *   insn=0x0000000000505DB0 string=0x0000000000505DB4 "(@"
 *   insn=0x0000000000505DB0 string=0x0000000000505EA0 "i*@"
 *   insn=0x0000000000505DB4 string=0x0000000000505DB8 ""
 *   insn=0x0000000000505DF0 string=0x0000000000505DF4 "\t@"
 *   insn=0x0000000000505DF4 string=0x0000000000505DF8 "H"
 *   insn=0x0000000000505DF8 string=0x0000000000505DFC "iB@"
 *   insn=0x0000000000505DFC string=0x0000000000505E00 "*\t"
 *   insn=0x0000000000505E00 string=0x0000000000505E04 """
 *   insn=0x0000000000505E04 string=0x0000000000505E08 "\t\n"
 *   insn=0x0000000000505E0C string=0x0000000000505E10 "!8 "
 *   insn=0x0000000000505E10 string=0x0000000000505E14 "A!"
 *   insn=0x0000000000505E60 string=0x0000000000505E64 "hB@"
 *   insn=0x0000000000505E60 string=0x00000000001F8480 "0'"
 *   insn=0x0000000000505E64 string=0x0000000000505E68 "\t"
 *   insn=0x0000000000505E68 string=0x0000000000505E6C "\n\t@"
 *   insn=0x0000000000505E6C string=0x0000000000505E70 "Iy8"
 *   insn=0x0000000000505E70 string=0x0000000000505E74 "@"
 *   insn=0x0000000000505E78 string=0x0000000000505E7C ""
 *   insn=0x0000000000505EB0 string=0x0000000000505EB4 "s"
 *   insn=0x0000000000505EB4 string=0x0000000000505EB8 "hB@"
 *   insn=0x0000000000505EB8 string=0x0000000000505EBC "\t"
 *   insn=0x0000000000505EBC string=0x0000000000505EC0 "\n\t@"
 *   insn=0x0000000000505EC0 string=0x0000000000505EC4 "Iy8"
 *   insn=0x0000000000505EC4 string=0x0000000000505EC8 "@"
 *   insn=0x0000000000505ECC string=0x0000000000505ED0 ""
 *   insn=0x0000000000505EF4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall CPVRTModelPOD::GetCameraPos(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // x8
  __int64 v8; // x24
  int *v9; // x22
  __int64 v10; // x8
  __int128 *v11; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  unsigned int v14; // w8
  __int64 v15; // x9
  unsigned __int64 v16; // x8
  __int64 v17; // x24
  __int64 v18; // x8
  __int64 v19; // x9
  float *v20; // x8
  __int64 v22; // x8
  _OWORD *v23; // x8
  __int64 v24; // x8
  _OWORD *v25; // x8
  __int128 v26; // [xsp+0h] [xbp-80h]
  __int128 v27; // [xsp+10h] [xbp-70h]
  __int128 v28; // [xsp+20h] [xbp-60h]
  __int128 v29; // [xsp+30h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  v7 = *(_QWORD *)(a1 + 128);
  v8 = (unsigned int)(*(_DWORD *)(a1 + 76) + a4 + *(_DWORD *)(a1 + 40));
  v9 = (int *)(*(_QWORD *)(a1 + 80) + 96LL * (unsigned int)v8);
  if ( *(float *)v7 == 0.0 )
  {
    v10 = *(_QWORD *)(v7 + 32);
LABEL_5:
    v11 = (__int128 *)(v10 + (v8 << 6));
    v29 = v11[3];
    v28 = v11[2];
    v27 = v11[1];
    v26 = *v11;
    goto LABEL_6;
  }
  if ( *(float *)v7 == *(float *)(*(_QWORD *)(v7 + 16) + 4 * v8) )
  {
    v10 = *(_QWORD *)(v7 + 24);
    goto LABEL_5;
  }
  CPVRTModelPOD::GetWorldMatrixNoCache();
  v22 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(*(_QWORD *)(v22 + 16) + 4 * v8) = *(_DWORD *)v22;
  v23 = (_OWORD *)(*(_QWORD *)(v22 + 24) + (v8 << 6));
  v23[3] = v29;
  v23[2] = v28;
  v23[1] = v27;
  *v23 = v26;
LABEL_6:
  *(_QWORD *)a2 = v29;
  *(_DWORD *)(a2 + 8) = DWORD2(v29);
  v12 = *v9;
  v13 = *(_QWORD *)(a1 + 32);
  v14 = *(_DWORD *)(v13 + 24 * v12);
  if ( (v14 & 0x80000000) != 0 )
    goto LABEL_13;
  v15 = *(_QWORD *)(a1 + 128);
  if ( *(float *)v15 == 0.0 )
  {
    v16 = *(_QWORD *)(v15 + 32) + ((unsigned __int64)*(unsigned int *)(v13 + 24 * v12) << 6);
  }
  else
  {
    v17 = *(unsigned int *)(v13 + 24 * v12);
    if ( *(float *)v15 != *(float *)(*(_QWORD *)(v15 + 16) + 4LL * v14) )
    {
      CPVRTModelPOD::GetWorldMatrixNoCache();
      v24 = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(*(_QWORD *)(v24 + 16) + 4 * v17) = *(_DWORD *)v24;
      v25 = (_OWORD *)(*(_QWORD *)(v24 + 24) + (v17 << 6));
      v25[3] = v29;
      v25[2] = v28;
      v25[1] = v27;
      *v25 = v26;
      goto LABEL_12;
    }
    v16 = *(_QWORD *)(v15 + 24) + (v17 << 6);
  }
  v29 = *(_OWORD *)(v16 + 48);
LABEL_12:
  *(_QWORD *)a3 = v29;
  *(_DWORD *)(a3 + 8) = DWORD2(v29);
LABEL_13:
  v18 = *(_QWORD *)(v13 + 24 * v12 + 16);
  if ( !v18 )
    return *(float *)(v13 + 24 * v12 + 4);
  v19 = *(_QWORD *)(a1 + 128);
  v20 = (float *)(v18 + 4LL * *(int *)(v19 + 8));
  return *v20 + (float)(*(float *)(v19 + 4) * (float)(v20[1] - *v20));
}

