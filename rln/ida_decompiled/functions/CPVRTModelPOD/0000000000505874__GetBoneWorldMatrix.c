/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505874
 * Mangled: _ZN13CPVRTModelPOD18GetBoneWorldMatrixER11PVRTMATRIXfRK8SPODNodeS4_
 * Demangled: CPVRTModelPOD::GetBoneWorldMatrix(PVRTMATRIXf &,SPODNode const&,SPODNode const&)
 *
 * Callers: 1
 *   0x00000000001F6C80  CPVRTModelPOD::GetBoneWorldMatrix(PVRTMATRIXf &,SPODNode const&,SPODNode const&)
 *
 * Callees: 4
 *   0x00000000001F40F0  PVRTMatrixInverseF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 57
 *   insn=0x000000000050588C string=0x0000000000505890 "V"
 *   insn=0x0000000000505898 string=0x000000000050589C "jU"
 *   insn=0x00000000005058B0 string=0x00000000005058B4 ""
 *   insn=0x00000000005058C0 string=0x00000000005058C4 ""
 *   insn=0x00000000005058C4 string=0x00000000005058C8 "I"
 *   insn=0x00000000005058C8 string=0x00000000005058CC ")"
 *   insn=0x00000000005058CC string=0x00000000005058D0 ")}\n"
 *   insn=0x00000000005058D0 string=0x00000000005058D4 ""
 *   insn=0x00000000005058DC string=0x00000000005058E4 "`"
 *   insn=0x00000000005058E8 string=0x00000000005058EC "`\n"
 *   insn=0x00000000005058F0 string=0x00000000005058F4 "`"
 *   insn=0x00000000005058F8 string=0x00000000005058FC "`"
 *   insn=0x000000000050590C string=0x0000000000505910 ")"
 *   insn=0x0000000000505910 string=0x0000000000505914 ")}\n"
 *   insn=0x0000000000505914 string=0x0000000000505918 "  "
 *   insn=0x000000000050591C string=0x0000000000505920 ""
 *   insn=0x000000000050591C string=0x0000000000505930 "\n\t@"
 *   insn=0x0000000000505920 string=0x0000000000505924 ")}@"
 *   insn=0x0000000000505924 string=0x0000000000505928 ""
 *   insn=0x0000000000505928 string=0x000000000050592C ""
 *   insn=0x0000000000505930 string=0x0000000000505934 "7}@"
 *   insn=0x0000000000505934 string=0x0000000000505938 "AYi"
 *   insn=0x0000000000505940 string=0x0000000000505944 "@"
 *   insn=0x0000000000505944 string=0x0000000000505948 ""
 *   insn=0x0000000000505974 string=0x00000000001F40F0 "P'"
 *   insn=0x0000000000505980 string=0x0000000000505984 "3"
 *   insn=0x0000000000505988 string=0x000000000050598C ""
 *   insn=0x0000000000505990 string=0x0000000000505994 "\t"
 *   insn=0x0000000000505994 string=0x0000000000505998 " "
 *   insn=0x000000000050599C string=0x00000000005059A0 "\t\t"
 *   insn=0x00000000005059A8 string=0x00000000005059B4 ""
 *   insn=0x00000000005059BC string=0x00000000005059C4 "! "
 *   insn=0x00000000005059C8 string=0x00000000005059CC ")"
 *   insn=0x00000000005059CC string=0x00000000005059D0 ")}\n"
 *   insn=0x00000000005059D4 string=0x00000000005059D8 ""
 *   insn=0x00000000005059D4 string=0x00000000005059E8 "\n\t@"
 *   insn=0x00000000005059D8 string=0x00000000005059DC ")}@"
 *   insn=0x00000000005059DC string=0x00000000005059E0 ""
 *   insn=0x00000000005059E0 string=0x00000000005059E4 ""
 *   insn=0x00000000005059E8 string=0x00000000005059EC "7}@"
 *   insn=0x00000000005059EC string=0x00000000005059F0 "@Yi"
 *   insn=0x00000000005059F8 string=0x00000000005059FC "@"
 *   insn=0x00000000005059FC string=0x0000000000505A00 ""
 *   insn=0x0000000000505A2C string=0x0000000000505A30 ""
 *   insn=0x0000000000505A6C string=0x00000000001F8480 "0'"
 *   insn=0x0000000000505A70 string=0x0000000000505A74 "\t"
 *   insn=0x0000000000505A74 string=0x0000000000505A78 "\n\t@"
 *   insn=0x0000000000505A78 string=0x0000000000505A7C "Iy7"
 *   insn=0x0000000000505A7C string=0x0000000000505A80 "@"
 *   insn=0x0000000000505A84 string=0x0000000000505A88 ""
 *   insn=0x0000000000505AB4 string=0x0000000000505AB8 "r"
 *   insn=0x0000000000505ABC string=0x0000000000505AC0 "\t"
 *   insn=0x0000000000505AC0 string=0x0000000000505AC4 "\n\t@"
 *   insn=0x0000000000505AC4 string=0x0000000000505AC8 "Iy7"
 *   insn=0x0000000000505AC8 string=0x0000000000505ACC "@"
 *   insn=0x0000000000505AD0 string=0x0000000000505AD4 ""
 *   insn=0x0000000000505AF8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall CPVRTModelPOD::GetBoneWorldMatrix(__int64 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // x8
  float v7; // s8
  _OWORD *v8; // x8
  __int64 v9; // x8
  __int128 *v10; // x8
  __int64 v11; // x23
  __int64 v12; // x8
  __int64 v13; // x23
  __int64 v15; // x8
  _OWORD *v16; // x8
  __int64 v17; // x8
  _OWORD *v18; // x8
  __int128 v19; // [xsp+0h] [xbp-80h]
  __int128 v20; // [xsp+10h] [xbp-70h]
  __int128 v21; // [xsp+20h] [xbp-60h]
  __int128 v22; // [xsp+30h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  v5 = *(_QWORD *)(a1 + 128);
  v7 = *(float *)v5;
  *(_QWORD *)v5 = 0;
  *(_DWORD *)(v5 + 8) = 0;
  v8 = (_OWORD *)(*(_QWORD *)(v5 + 32)
                + ((unsigned __int64)(-1431655765 * (unsigned int)((unsigned __int64)(a3 - *(_QWORD *)(a1 + 80)) >> 5)) << 6));
  a2[3] = v8[3];
  a2[2] = v8[2];
  a2[1] = v8[1];
  *a2 = *v8;
  v9 = *(_QWORD *)(a1 + 128);
  if ( *(float *)v9 == 0.0 )
  {
    v10 = (__int128 *)(*(_QWORD *)(v9 + 32)
                     + ((unsigned __int64)(-1431655765 * (unsigned int)((a4 - *(_QWORD *)(a1 + 80)) >> 5)) << 6));
LABEL_5:
    v22 = v10[3];
    v21 = v10[2];
    v20 = v10[1];
    v19 = *v10;
    goto LABEL_6;
  }
  v11 = -1431655765 * (unsigned int)((a4 - *(_QWORD *)(a1 + 80)) >> 5);
  if ( *(float *)v9 == *(float *)(*(_QWORD *)(v9 + 16) + 4 * v11) )
  {
    v10 = (__int128 *)(*(_QWORD *)(v9 + 24) + (v11 << 6));
    goto LABEL_5;
  }
  CPVRTModelPOD::GetWorldMatrixNoCache();
  v15 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(*(_QWORD *)(v15 + 16) + 4 * v11) = *(_DWORD *)v15;
  v16 = (_OWORD *)(*(_QWORD *)(v15 + 24) + (v11 << 6));
  v16[3] = v22;
  v16[2] = v21;
  v16[1] = v20;
  *v16 = v19;
LABEL_6:
  PVRTMatrixInverseF();
  PVRTMatrixMultiplyF();
  v12 = *(_QWORD *)(a1 + 128);
  if ( *(_DWORD *)(a1 + 120) )
  {
    *(_DWORD *)(v12 + 8) = (int)v7;
    *(float *)(v12 + 4) = v7 - (float)(int)v7;
  }
  else
  {
    *(_QWORD *)(v12 + 4) = 0;
  }
  *(float *)v12 = v7;
  if ( v7 != 0.0 )
  {
    v13 = -1431655765 * (unsigned int)((a4 - *(_QWORD *)(a1 + 80)) >> 5);
    if ( v7 != *(float *)(*(_QWORD *)(v12 + 16) + 4 * v13) )
    {
      CPVRTModelPOD::GetWorldMatrixNoCache();
      v17 = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(*(_QWORD *)(v17 + 16) + 4 * v13) = *(_DWORD *)v17;
      v18 = (_OWORD *)(*(_QWORD *)(v17 + 24) + (v13 << 6));
      v18[3] = v22;
      v18[2] = v21;
      v18[1] = v20;
      *v18 = v19;
    }
  }
  return PVRTMatrixMultiplyF();
}

