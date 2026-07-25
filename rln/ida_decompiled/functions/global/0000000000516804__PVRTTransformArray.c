/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000516804
 * Mangled: _Z18PVRTTransformArrayP12PVRTVECTOR3fPKS_iPK11PVRTMATRIXff
 * Demangled: PVRTTransformArray(PVRTVECTOR3f *,PVRTVECTOR3f const*,int,PVRTMATRIXf const*,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 82
 *   insn=0x0000000000516804 string=0x0000000000516808 "K"
 *   insn=0x0000000000516808 string=0x000000000051680C "_"
 *   insn=0x0000000000516818 string=0x000000000051681C ""
 *   insn=0x0000000000516818 string=0x000000000051694C ""
 *   insn=0x000000000051681C string=0x0000000000516820 "l"
 *   insn=0x0000000000516820 string=0x0000000000516824 "k"
 *   insn=0x0000000000516824 string=0x0000000000516828 "j"
 *   insn=0x0000000000516830 string=0x0000000000516834 "+"
 *   insn=0x0000000000516838 string=0x000000000051683C "_"
 *   insn=0x0000000000516858 string=0x000000000051685C "J"
 *   insn=0x000000000051685C string=0x0000000000516860 "j"
 *   insn=0x0000000000516864 string=0x0000000000516868 "a"
 *   insn=0x0000000000516868 string=0x000000000051686C "qHF-\t"
 *   insn=0x000000000051686C string=0x0000000000516870 "\t"
 *   insn=0x0000000000516878 string=0x000000000051687C "l@"
 *   insn=0x000000000051687C string=0x0000000000516880 "m"
 *   insn=0x0000000000516880 string=0x0000000000516884 "I"
 *   insn=0x0000000000516884 string=0x0000000000516888 "jP"
 *   insn=0x000000000051688C string=0x0000000000516890 "l"
 *   insn=0x0000000000516890 string=0x0000000000516894 "t8@"
 *   insn=0x0000000000516898 string=0x000000000051689C "m "
 *   insn=0x000000000051689C string=0x00000000005168A0 "D"
 *   insn=0x00000000005168A0 string=0x00000000005168A4 "j`"
 *   insn=0x00000000005168A8 string=0x00000000005168AC "l"
 *   insn=0x00000000005168B0 string=0x00000000005168B4 "G"
 *   insn=0x00000000005168B8 string=0x00000000005168BC "3"
 *   insn=0x00000000005168BC string=0x00000000005168C0 "q"
 *   insn=0x00000000005168C0 string=0x00000000005168C4 "\t"
 *   insn=0x00000000005168C4 string=0x00000000005168C8 "U"
 *   insn=0x00000000005168D0 string=0x00000000005168D4 "r"
 *   insn=0x00000000005168F0 string=0x00000000005168F4 "J"
 *   insn=0x00000000005168F4 string=0x00000000005168F8 ";"
 *   insn=0x00000000005168F8 string=0x00000000005168FC "\"
 *   insn=0x00000000005168FC string=0x0000000000516900 "}"
 *   insn=0x0000000000516900 string=0x0000000000516904 ">"
 *   insn=0x0000000000516910 string=0x0000000000516914 "X"
 *   insn=0x0000000000516914 string=0x0000000000516918 "y"
 *   insn=0x0000000000516918 string=0x000000000051691C "V"
 *   insn=0x0000000000516924 string=0x0000000000516928 "9"
 *   insn=0x0000000000516930 string=0x0000000000516934 "7"
 *   insn=0x000000000051693C string=0x0000000000516940 "wI"
 *   insn=0x0000000000516944 string=0x0000000000516948 "!"
 *   insn=0x000000000051694C string=0x0000000000516950 ")"
 *   insn=0x0000000000516950 string=0x0000000000516954 ")"
 *   insn=0x0000000000516954 string=0x0000000000516958 "*"
 *   insn=0x0000000000516958 string=0x000000000051695C ""
 *   insn=0x000000000051695C string=0x0000000000516960 "I"
 *   insn=0x0000000000516960 string=0x0000000000516964 "j!"
 *   insn=0x0000000000516964 string=0x0000000000516968 "a"
 *   insn=0x0000000000516968 string=0x000000000051696C """
 *   insn=0x000000000051696C string=0x0000000000516970 "c"
 *   insn=0x0000000000516970 string=0x0000000000516974 "d @"
 *   insn=0x0000000000516974 string=0x0000000000516978 "&"
 *   insn=0x0000000000516978 string=0x000000000051697C "g0@"
 *   insn=0x000000000051697C string=0x0000000000516980 "!""
 *   insn=0x0000000000516980 string=0x0000000000516984 "b%"
 *   insn=0x0000000000516988 string=0x000000000051698C "!(""
 *   insn=0x0000000000516990 string=0x0000000000516994 "!(#"
 *   insn=0x0000000000516994 string=0x0000000000516998 "!($"
 *   insn=0x0000000000516998 string=0x000000000051699C "A"
 *   insn=0x000000000051699C string=0x00000000005169A0 "a"
 *   insn=0x00000000005169A0 string=0x00000000005169A4 "b"
 *   insn=0x00000000005169A4 string=0x00000000005169A8 "#"
 *   insn=0x00000000005169A8 string=0x00000000005169AC "d$@"
 *   insn=0x00000000005169B0 string=0x00000000005169B4 "e4@"
 *   insn=0x00000000005169B4 string=0x00000000005169B8 "B#"
 *   insn=0x00000000005169B8 string=0x00000000005169BC "A(!"
 *   insn=0x00000000005169C4 string=0x00000000005169C8 "!(""
 *   insn=0x00000000005169C8 string=0x00000000005169CC "!($"
 *   insn=0x00000000005169CC string=0x00000000005169D0 "A"
 *   insn=0x00000000005169D0 string=0x00000000005169D4 "a@"
 *   insn=0x00000000005169D4 string=0x00000000005169D8 "b"
 *   insn=0x00000000005169D8 string=0x00000000005169DC "$"
 *   insn=0x00000000005169DC string=0x00000000005169E0 ""
 *   insn=0x00000000005169E0 string=0x00000000005169E4 "a!"
 *   insn=0x00000000005169E4 string=0x00000000005169E8 "c(@"
 *   insn=0x00000000005169E8 string=0x00000000005169EC "B$"
 *   insn=0x00000000005169EC string=0x00000000005169F0 "d8@"
 *   insn=0x00000000005169F0 string=0x00000000005169F4 "!(""
 *   insn=0x00000000005169F8 string=0x00000000005169FC "!(#"
 *   insn=0x0000000000516A00 string=0x0000000000516A04 "!($"
 *   insn=0x0000000000516A04 string=0x0000000000516A08 "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall PVRTTransformArray(
        unsigned __int64 result,
        const float *a2,
        unsigned int a3,
        __int64 a4,
        long double a5)
{
  float32x4_t v5; // q17
  float32x4_t v6; // q18
  float32x4_t v7; // q20
  __int64 v8; // x9
  unsigned __int64 v9; // x12
  const float *v11; // x11
  float32x4_t v12; // q1
  __int64 v13; // x9
  const float *v14; // x12
  const float *v15; // x13
  const float *v16; // x10
  float32x4_t v17; // q2
  const float *v18; // x12
  float32x4_t v19; // q3
  const float *v20; // x13
  float32x4_t v21; // q4
  const float *v22; // x10
  float32x4_t v23; // q5
  const float *v24; // x12
  float32x4_t v25; // q6
  float32x4_t v26; // q7
  float32x4_t v27; // q16
  int32x2_t v28; // d19
  float32x4_t v29; // q17
  int32x2_t v30; // d21
  const float *v31; // x13
  float32x4_t v32; // q18
  float32x4_t v33; // q19
  float32x4_t v34; // q20
  __int64 v35; // x10
  float *v36; // x11
  const float *v37; // x12
  float32x4_t v38; // q31
  __int64 v39; // x8
  __int64 v40; // x9
  unsigned __int64 v41; // x11
  float *v42; // x9
  float *v43; // x10
  float v44; // s5
  float v45; // s6
  float v46; // s3
  float v47; // t1
  float32x4x3_t v48; // 0:q21.16,16:q22.16,32:q23.16 OVERLAPPED
  float32x4x3_t v49; // 0:q24.16,16:q25.16,32:q26.16

  if ( (int)a3 >= 1 )
  {
    v8 = 0;
    if ( a3 >= 5 )
    {
      v9 = result + 12LL * a3;
      if ( (a4 + 57 <= result || a4 + 56 >= v9)
        && ((unsigned __int64)&a2[3 * a3] <= result || v9 <= (unsigned __int64)a2) )
      {
        v12 = vld1q_dup_f32((const float *)a4);
        v11 = (const float *)(a4 + 4);
        v13 = a3 & 3;
        if ( (a3 & 3) == 0 )
          v13 = 4;
        v16 = (const float *)(a4 + 20);
        v14 = (const float *)(a4 + 16);
        v17 = vld1q_dup_f32(v14);
        v18 = (const float *)(a4 + 36);
        v7.n128_u32[0] = *(_DWORD *)(a4 + 56);
        v15 = (const float *)(a4 + 32);
        v19 = vld1q_dup_f32(v15);
        v20 = (const float *)(a4 + 8);
        v21 = vld1q_dup_f32(v16);
        v22 = (const float *)(a4 + 24);
        v23 = vld1q_dup_f32(v18);
        v24 = (const float *)(a4 + 40);
        v25 = vld1q_dup_f32(v20);
        v26 = vld1q_dup_f32(v22);
        v27 = vld1q_dup_f32(v24);
        v5.n128_u32[0] = *(_DWORD *)(a4 + 48);
        v28.n64_u64[0] = vmulq_f32(v5, *(float32x4_t *)&a5).n128_u64[0];
        v29 = vld1q_dup_f32(v11);
        v8 = a3 - v13;
        v6.n128_u32[0] = *(_DWORD *)(a4 + 52);
        v30.n64_u64[0] = vmulq_f32(v6, *(float32x4_t *)&a5).n128_u64[0];
        v31 = a2;
        v32 = vdupq_lane_s32(v28, 0);
        v33 = vdupq_lane_s32(v30, 0);
        v34 = vdupq_lane_s32((int32x2_t)vmulq_f32(v7, *(float32x4_t *)&a5).n128_u64[0], 0);
        v35 = v8;
        v36 = (float *)result;
        v37 = a2;
        do
        {
          v48 = vld3q_f32(v37);
          v37 += 12;
          v49 = vld3q_f32(v31);
          v35 -= 4;
          v38 = vmulq_f32(v26, v49.val[1]);
          v49.val[1] = vaddq_f32(vmulq_f32(v12, v48.val[0]), vmulq_f32(v17, v48.val[1]));
          v48.val[0] = vaddq_f32(
                         vaddq_f32(vmulq_f32(v29, v49.val[0]), vmulq_f32(v48.val[1], v21)),
                         vmulq_f32(v49.val[2], v23));
          v48.val[1] = vaddq_f32(vaddq_f32(vmulq_f32(v49.val[0], v25), v38), vmulq_f32(v49.val[2], v27));
          v48.val[2] = vaddq_f32(vaddq_f32(v49.val[1], vmulq_f32(v19, v49.val[2])), v32);
          v49.val[0] = vaddq_f32(v48.val[0], v33);
          v49.val[1] = vaddq_f32(v48.val[1], v34);
          vst3q_f32(v36, *(float32x4x3_t *)((char *)&v48 + 32));
          v36 += 12;
          v31 = v37;
        }
        while ( v35 );
      }
    }
    v39 = a3 - v8;
    v40 = 3 * v8;
    v41 = result + v40 * 4;
    v42 = (float *)&a2[v40 + 1];
    v43 = (float *)(v41 + 8);
    do
    {
      v44 = *v42;
      v45 = v42[1];
      *(v43 - 2) = (float)((float)((float)(*(float *)a4 * *(v42 - 1)) + (float)(*(float *)(a4 + 16) * *v42))
                         + (float)(*(float *)(a4 + 32) * v45))
                 + (float)(*(float *)(a4 + 48) * *(float *)&a5);
      v46 = *(v42 - 1);
      *(v43 - 1) = (float)((float)((float)(*(float *)(a4 + 4) * v46) + (float)(v44 * *(float *)(a4 + 20)))
                         + (float)(v45 * *(float *)(a4 + 36)))
                 + (float)(*(float *)(a4 + 52) * *(float *)&a5);
      v47 = *v42;
      v42 += 3;
      --v39;
      *v43 = (float)((float)((float)(v46 * *(float *)(a4 + 8)) + (float)(*(float *)(a4 + 24) * v47))
                   + (float)(v45 * *(float *)(a4 + 40)))
           + (float)(*(float *)(a4 + 56) * *(float *)&a5);
      v43 += 3;
    }
    while ( v39 );
  }
  return result;
}

