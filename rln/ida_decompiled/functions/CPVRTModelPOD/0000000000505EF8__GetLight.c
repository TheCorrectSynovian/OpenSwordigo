/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505EF8
 * Mangled: _ZNK13CPVRTModelPOD8GetLightER12PVRTVECTOR3fS1_j
 * Demangled: CPVRTModelPOD::GetLight(PVRTVECTOR3f &,PVRTVECTOR3f &,uint)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 19
 *   insn=0x0000000000505F0C string=0x0000000000505F10 "V"
 *   insn=0x0000000000505F30 string=0x0000000000505F34 "7"
 *   insn=0x0000000000505F34 string=0x0000000000505F38 "  "
 *   insn=0x0000000000505F38 string=0x0000000000505F3C "a"
 *   insn=0x0000000000505F3C string=0x0000000000505F40 ""
 *   insn=0x0000000000505F3C string=0x0000000000505F48 "\t\t@"
 *   insn=0x0000000000505F44 string=0x0000000000505F5C ""
 *   insn=0x0000000000505F48 string=0x0000000000505F4C "!yw"
 *   insn=0x0000000000505F54 string=0x0000000000505F58 "@"
 *   insn=0x0000000000505F94 string=0x0000000000505F98 "`"
 *   insn=0x0000000000505FA0 string=0x0000000000505FA4 "`\n"
 *   insn=0x0000000000505FE0 string=0x0000000000505FE4 "'"
 *   insn=0x0000000000505FE4 string=0x00000000001F8480 "0'"
 *   insn=0x0000000000505FE8 string=0x0000000000505FEC "\t"
 *   insn=0x0000000000505FEC string=0x0000000000505FF0 "\n\t@"
 *   insn=0x0000000000505FF0 string=0x0000000000505FF4 "Iy7"
 *   insn=0x0000000000505FF4 string=0x0000000000505FF8 "@"
 *   insn=0x0000000000505FFC string=0x0000000000506000 ""
 *   insn=0x0000000000506024 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall CPVRTModelPOD::GetLight(__int64 a1, __int64 a2, float32x2_t *a3, int a4)
{
  __int64 v7; // x8
  __int64 v8; // x23
  __int64 v9; // x8
  __int64 v10; // x8
  float result; // s0
  __int64 v12; // x8
  _OWORD *v13; // x8
  __int128 v14; // [xsp+0h] [xbp-80h]
  __int128 v15; // [xsp+10h] [xbp-70h]
  __int128 v16; // [xsp+20h] [xbp-60h]
  __int128 v17; // [xsp+30h] [xbp-50h]

  _ReadStatusReg(TPIDR_EL0);
  v7 = *(_QWORD *)(a1 + 128);
  v8 = (unsigned int)(*(_DWORD *)(a1 + 76) + a4);
  if ( *(float *)v7 == 0.0 )
  {
    v9 = *(_QWORD *)(v7 + 32);
  }
  else
  {
    if ( *(float *)v7 != *(float *)(*(_QWORD *)(v7 + 16) + 4 * v8) )
    {
      CPVRTModelPOD::GetWorldMatrixNoCache();
      v12 = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(*(_QWORD *)(v12 + 16) + 4 * v8) = *(_DWORD *)v12;
      v13 = (_OWORD *)(*(_QWORD *)(v12 + 24) + (v8 << 6));
      v13[3] = v17;
      v13[2] = v16;
      v13[1] = v15;
      *v13 = v14;
      goto LABEL_6;
    }
    v9 = *(_QWORD *)(v7 + 24);
  }
  v10 = v9 + (v8 << 6);
  v17 = *(_OWORD *)(v10 + 48);
  v15 = *(_OWORD *)(v10 + 16);
LABEL_6:
  *(_QWORD *)a2 = v17;
  *(_DWORD *)(a2 + 8) = DWORD2(v17);
  a3->n64_u64[0] = vneg_f32(*(float32x2_t *)&v15).n64_u64[0];
  result = -*((float *)&v15 + 2);
  a3[1].n64_f32[0] = -*((float *)&v15 + 2);
  return result;
}

