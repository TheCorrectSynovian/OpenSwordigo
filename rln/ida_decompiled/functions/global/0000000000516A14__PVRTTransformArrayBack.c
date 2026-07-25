/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000516A14
 * Mangled: _Z22PVRTTransformArrayBackP12PVRTVECTOR3fPKS_iPK11PVRTMATRIXf
 * Demangled: PVRTTransformArrayBack(PVRTVECTOR3f *,PVRTVECTOR3f const*,int,PVRTMATRIXf const*)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F40F0  PVRTMatrixInverseF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 49
 *   insn=0x0000000000516A34 string=0x0000000000516A38 "V"
 *   insn=0x0000000000516A58 string=0x00000000001F40F0 "P'"
 *   insn=0x0000000000516A5C string=0x0000000000516A60 ""
 *   insn=0x0000000000516A8C string=0x0000000000516A90 "C\n"
 *   insn=0x0000000000516A90 string=0x0000000000516A94 "\n"
 *   insn=0x0000000000516A90 string=0x0000000000516BD8 ""
 *   insn=0x0000000000516A94 string=0x0000000000516A98 "J"
 *   insn=0x0000000000516A9C string=0x0000000000516AA0 "o"
 *   insn=0x0000000000516AA8 string=0x0000000000516AAC "?"
 *   insn=0x0000000000516AAC string=0x0000000000516AB0 "k"
 *   insn=0x0000000000516AB8 string=0x0000000000516ABC "_"
 *   insn=0x0000000000516ACC string=0x0000000000516AD0 "m""
 *   insn=0x0000000000516AD0 string=0x0000000000516AD4 "1"
 *   insn=0x0000000000516AF8 string=0x0000000000516AFC "J"
 *   insn=0x0000000000516B00 string=0x0000000000516B04 "j"
 *   insn=0x0000000000516B08 string=0x0000000000516B0C "\t"
 *   insn=0x0000000000516B18 string=0x0000000000516B1C "I"
 *   insn=0x0000000000516B20 string=0x0000000000516B24 "4"
 *   insn=0x0000000000516B24 string=0x0000000000516B28 "\t"
 *   insn=0x0000000000516B30 string=0x0000000000516B34 "T"
 *   insn=0x0000000000516B34 string=0x0000000000516B38 "w"
 *   insn=0x0000000000516B4C string=0x0000000000516B50 "="
 *   insn=0x0000000000516B50 string=0x0000000000516B54 "^"
 *   insn=0x0000000000516B74 string=0x0000000000516B78 "J"
 *   insn=0x0000000000516B88 string=0x0000000000516B8C "("
 *   insn=0x0000000000516B8C string=0x0000000000516B90 "j"
 *   insn=0x0000000000516BB4 string=0x0000000000516BB8 "V"
 *   insn=0x0000000000516BC4 string=0x0000000000516BC8 "i"
 *   insn=0x0000000000516BCC string=0x0000000000516BD0 "hI"
 *   insn=0x0000000000516BD8 string=0x0000000000516BDC ")"
 *   insn=0x0000000000516BDC string=0x0000000000516BE0 ")"
 *   insn=0x0000000000516BE4 string=0x0000000000516BE8 "k"
 *   insn=0x0000000000516BE8 string=0x0000000000516BEC "I"
 *   insn=0x0000000000516BEC string=0x0000000000516BF0 "j!"
 *   insn=0x0000000000516BF0 string=0x0000000000516BF4 "4"
 *   insn=0x0000000000516BF4 string=0x0000000000516BF8 "6"
 *   insn=0x0000000000516BF8 string=0x0000000000516BFC ""
 *   insn=0x0000000000516C00 string=0x0000000000516C04 "75"
 *   insn=0x0000000000516C08 string=0x0000000000516C0C "W6"
 *   insn=0x0000000000516C10 string=0x0000000000516C14 "t(4"
 *   insn=0x0000000000516C14 string=0x0000000000516C18 "T"
 *   insn=0x0000000000516C18 string=0x0000000000516C1C "4"
 *   insn=0x0000000000516C34 string=0x0000000000516C38 "U"
 *   insn=0x0000000000516C38 string=0x0000000000516C3C "5"
 *   insn=0x0000000000516C44 string=0x0000000000516C48 "5\n5"
 *   insn=0x0000000000516C50 string=0x0000000000516C54 "t*4"
 *   insn=0x0000000000516C54 string=0x0000000000516C58 "T"
 *   insn=0x0000000000516C68 string=0x0000000000516C6C "A"
 *   insn=0x0000000000516C94 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTTransformArrayBack(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 result; // x0
  int32x2_t v7; // d0
  int32x2_t v8; // d1
  int32x2_t v9; // d2
  int32x2_t v10; // d3
  int32x2_t v11; // d4
  int32x2_t v12; // d5
  int32x2_t v13; // d6
  int32x2_t v14; // d7
  int32x2_t v15; // d16
  int32x2_t v16; // d17
  int32x2_t v17; // d18
  int32x2_t v18; // d19
  __int64 v19; // x9
  unsigned __int64 v20; // x16
  unsigned __int64 v21; // x15
  __int64 v22; // x9
  float32x4_t v23; // q20
  const float *v24; // x13
  float32x4_t v25; // q23
  float32x4_t v26; // q24
  float32x4_t v27; // q25
  float32x4_t v28; // q26
  float32x4_t v29; // q27
  float32x4_t v30; // q28
  float32x4_t v31; // q29
  float32x4_t v32; // q30
  float32x4_t v33; // q31
  __int64 v34; // x10
  float *v35; // x11
  const float *v36; // x12
  __int64 v37; // x8
  __int64 v38; // x9
  unsigned __int64 v39; // x11
  float *v40; // x9
  float *v41; // x10
  float v42; // s21
  float v43; // s22
  float v44; // s20
  float v45; // t1
  float32x4_t v46; // [xsp+0h] [xbp-E0h]
  float32x4_t v47; // [xsp+10h] [xbp-D0h]
  float v48; // [xsp+38h] [xbp-A8h]
  float v49; // [xsp+3Ch] [xbp-A4h]
  float v50; // [xsp+40h] [xbp-A0h]
  float v51; // [xsp+48h] [xbp-98h]
  float v52; // [xsp+4Ch] [xbp-94h]
  float v53; // [xsp+50h] [xbp-90h]
  float v54; // [xsp+58h] [xbp-88h]
  float v55; // [xsp+5Ch] [xbp-84h]
  float v56; // [xsp+60h] [xbp-80h]
  float v57; // [xsp+68h] [xbp-78h]
  float v58; // [xsp+6Ch] [xbp-74h]
  float v59; // [xsp+70h] [xbp-70h]
  float32x4x3_t v60; // 0:q8.16,16:q9.16,32:q10.16
  float32x4x3_t v61; // 0:q11.16,16:q12.16,32:q13.16

  _ReadStatusReg(TPIDR_EL0);
  result = PVRTMatrixInverseF();
  if ( (int)a3 >= 1 )
  {
    v7.n64_f32[0] = v48;
    v11.n64_f32[0] = v49;
    v8.n64_f32[0] = v51;
    v12.n64_f32[0] = v52;
    v9.n64_f32[0] = v54;
    v13.n64_f32[0] = v55;
    v10.n64_f32[0] = v57;
    v14.n64_f32[0] = v58;
    v15.n64_f32[0] = v50;
    v16.n64_f32[0] = v53;
    v17.n64_f32[0] = v56;
    v18.n64_f32[0] = v59;
    v19 = 0;
    if ( a3 >= 5 )
    {
      v20 = a2 + 12LL * a3;
      v21 = a1 + 12LL * a3;
      if ( (v20 - 8 <= a1 || v21 - 8 <= a2)
        && (a1 + 4 >= v20 - 4 || a2 + 4 >= v21 - 4)
        && (a1 + 8 >= v20 || a2 + 8 >= v21) )
      {
        v22 = a3 & 3;
        v23 = vdupq_lane_s32(v7, 0);
        if ( (a3 & 3) == 0 )
          v22 = 4;
        v19 = a3 - v22;
        v24 = (const float *)a2;
        v47 = vdupq_lane_s32(v8, 0);
        v25 = vdupq_lane_s32(v10, 0);
        v26 = vdupq_lane_s32(v11, 0);
        v27 = vdupq_lane_s32(v12, 0);
        v28 = vdupq_lane_s32(v13, 0);
        v29 = vdupq_lane_s32(v14, 0);
        v30 = vdupq_lane_s32(v15, 0);
        v31 = vdupq_lane_s32(v16, 0);
        v32 = vdupq_lane_s32(v17, 0);
        v33 = vdupq_lane_s32(v18, 0);
        v34 = v19;
        v35 = (float *)a1;
        v36 = (const float *)a2;
        v46 = vdupq_lane_s32(v9, 0);
        do
        {
          v60 = vld3q_f32(v36);
          v36 += 12;
          v61 = vld3q_f32(v24);
          v34 -= 4;
          v24 = v36;
          v60.val[0] = vaddq_f32(
                         v25,
                         vaddq_f32(
                           vaddq_f32(vmulq_f32(v23, v60.val[0]), vmulq_f32(v47, v60.val[1])),
                           vmulq_f32(v46, v61.val[2])));
          v60.val[1] = vaddq_f32(
                         v29,
                         vaddq_f32(
                           vaddq_f32(vmulq_f32(v26, v61.val[0]), vmulq_f32(v60.val[1], v27)),
                           vmulq_f32(v61.val[2], v28)));
          v60.val[2] = vaddq_f32(
                         v33,
                         vaddq_f32(
                           vaddq_f32(vmulq_f32(v61.val[0], v30), vmulq_f32(v31, v61.val[1])),
                           vmulq_f32(v61.val[2], v32)));
          vst3q_f32(v35, v60);
          v35 += 12;
        }
        while ( v34 );
      }
    }
    v37 = a3 - v19;
    v38 = 12 * v19;
    v39 = a1 + v38;
    v40 = (float *)(a2 + v38 + 4);
    v41 = (float *)(v39 + 8);
    do
    {
      v42 = *v40;
      v43 = v40[1];
      --v37;
      *(v41 - 2) = v57 + (float)((float)((float)(v48 * *(v40 - 1)) + (float)(v51 * *v40)) + (float)(v54 * v43));
      v44 = *(v40 - 1);
      *(v41 - 1) = v58 + (float)((float)((float)(v49 * v44) + (float)(v42 * v52)) + (float)(v43 * v55));
      v45 = *v40;
      v40 += 3;
      *v41 = v59 + (float)((float)((float)(v44 * v50) + (float)(v53 * v45)) + (float)(v43 * v56));
      v41 += 3;
    }
    while ( v37 );
  }
  return result;
}

