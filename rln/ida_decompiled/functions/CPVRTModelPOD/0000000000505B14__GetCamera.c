/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000505B14
 * Mangled: _ZNK13CPVRTModelPOD9GetCameraER12PVRTVECTOR3fS1_S1_j
 * Demangled: CPVRTModelPOD::GetCamera(PVRTVECTOR3f &,PVRTVECTOR3f &,PVRTVECTOR3f &,uint)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8480  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 37
 *   insn=0x0000000000505B2C string=0x0000000000505B30 "W"
 *   insn=0x0000000000505B44 string=0x0000000000505B48 "iN@"
 *   insn=0x0000000000505B48 string=0x0000000000505B4C "k*@"
 *   insn=0x0000000000505B4C string=0x0000000000505B50 "j*@"
 *   insn=0x0000000000505B50 string=0x0000000000505B54 "hB@"
 *   insn=0x0000000000505B54 string=0x0000000000505B58 ")"
 *   insn=0x0000000000505B58 string=0x0000000000505B5C ":"
 *   insn=0x0000000000505B5C string=0x0000000000505B60 "B+"
 *   insn=0x0000000000505B64 string=0x0000000000505B68 "x"
 *   insn=0x0000000000505B68 string=0x0000000000505B6C "Y"
 *   insn=0x0000000000505B70 string=0x0000000000505B74 "  "
 *   insn=0x0000000000505B78 string=0x0000000000505B7C "a"
 *   insn=0x0000000000505B7C string=0x0000000000505B80 ""
 *   insn=0x0000000000505B7C string=0x0000000000505B88 "\t\t@"
 *   insn=0x0000000000505B84 string=0x0000000000505B9C ""
 *   insn=0x0000000000505B88 string=0x0000000000505B8C "!yz"
 *   insn=0x0000000000505B94 string=0x0000000000505B98 "@"
 *   insn=0x0000000000505BE4 string=0x0000000000505BE8 "(c"
 *   insn=0x0000000000505BE8 string=0x0000000000505BEC " 8 "
 *   insn=0x0000000000505C08 string=0x0000000000505C0C "\t@"
 *   insn=0x0000000000505C0C string=0x0000000000505C10 "H"
 *   insn=0x0000000000505C10 string=0x0000000000505C14 "iB@"
 *   insn=0x0000000000505C14 string=0x0000000000505C18 "*\t"
 *   insn=0x0000000000505C18 string=0x0000000000505C1C """
 *   insn=0x0000000000505C1C string=0x0000000000505C20 "\t\n"
 *   insn=0x0000000000505C24 string=0x0000000000505C28 "!8 "
 *   insn=0x0000000000505C28 string=0x0000000000505C2C "A!"
 *   insn=0x0000000000505C38 string=0x0000000000505C3C "(c"
 *   insn=0x0000000000505C4C string=0x0000000000505C50 "A"
 *   insn=0x0000000000505C78 string=0x0000000000505C7C "hB@"
 *   insn=0x0000000000505C78 string=0x00000000001F8480 "0'"
 *   insn=0x0000000000505C7C string=0x0000000000505C80 "\t"
 *   insn=0x0000000000505C80 string=0x0000000000505C84 "\n\t@"
 *   insn=0x0000000000505C84 string=0x0000000000505C88 "Iy:"
 *   insn=0x0000000000505C88 string=0x0000000000505C8C "@"
 *   insn=0x0000000000505C90 string=0x0000000000505C94 ""
 *   insn=0x0000000000505CB8 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall CPVRTModelPOD::GetCamera(__int64 a1, __int64 a2, float32x2_t *a3, float32x2_t *a4, int a5)
{
  __int64 v7; // x8
  __int64 v8; // x26
  __int64 v9; // x24
  __int64 v10; // x25
  __int64 v13; // x8
  _OWORD *v14; // x8
  __int64 v15; // x8
  __int64 v16; // x9
  float *v17; // x8
  __int64 v19; // x8
  _OWORD *v20; // x8
  __int128 v21; // [xsp+0h] [xbp-90h]
  __int128 v22; // [xsp+10h] [xbp-80h]
  __int128 v23; // [xsp+20h] [xbp-70h]
  __int128 v24; // [xsp+30h] [xbp-60h]

  _ReadStatusReg(TPIDR_EL0);
  v7 = *(_QWORD *)(a1 + 128);
  v8 = (unsigned int)(*(_DWORD *)(a1 + 76) + a5 + *(_DWORD *)(a1 + 40));
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(int *)(*(_QWORD *)(a1 + 80) + 96LL * (unsigned int)v8);
  if ( *(float *)v7 == 0.0 )
  {
    v13 = *(_QWORD *)(v7 + 32);
LABEL_5:
    v14 = (_OWORD *)(v13 + (v8 << 6));
    v24 = v14[3];
    v23 = v14[2];
    v22 = v14[1];
    goto LABEL_6;
  }
  if ( *(float *)v7 == *(float *)(*(_QWORD *)(v7 + 16) + 4 * v8) )
  {
    v13 = *(_QWORD *)(v7 + 24);
    goto LABEL_5;
  }
  CPVRTModelPOD::GetWorldMatrixNoCache();
  v19 = *(_QWORD *)(a1 + 128);
  *(_DWORD *)(*(_QWORD *)(v19 + 16) + 4 * v8) = *(_DWORD *)v19;
  v20 = (_OWORD *)(*(_QWORD *)(v19 + 24) + (v8 << 6));
  v20[3] = v24;
  v20[2] = v23;
  v20[1] = v22;
  *v20 = v21;
LABEL_6:
  *(_QWORD *)a2 = v24;
  *(_DWORD *)(a2 + 8) = DWORD2(v24);
  a3->n64_u64[0] = vsub_f32(*(float32x2_t *)&v24, *(float32x2_t *)&v22).n64_u64[0];
  a3[1].n64_f32[0] = *((float *)&v24 + 2) - *((float *)&v22 + 2);
  a4->n64_u64[0] = vneg_f32(*(float32x2_t *)&v23).n64_u64[0];
  a4[1].n64_f32[0] = -*((float *)&v23 + 2);
  v15 = *(_QWORD *)(v9 + 24 * v10 + 16);
  if ( !v15 )
    return *(float *)(v9 + 24 * v10 + 4);
  v16 = *(_QWORD *)(a1 + 128);
  v17 = (float *)(v15 + 4LL * *(int *)(v16 + 8));
  return *v17 + (float)(*(float *)(v16 + 4) * (float)(v17[1] - *v17));
}

