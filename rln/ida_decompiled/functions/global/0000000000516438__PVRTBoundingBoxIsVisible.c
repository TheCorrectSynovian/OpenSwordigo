/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000516438
 * Mangled: _Z24PVRTBoundingBoxIsVisiblePK19PVRTBOUNDINGBOX_TAGPK11PVRTMATRIXfPb
 * Demangled: PVRTBoundingBoxIsVisible(PVRTBOUNDINGBOX_TAG const*,PVRTMATRIXf const*,bool *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 94
 *   insn=0x0000000000516440 string=0x0000000000516444 "6"
 *   insn=0x0000000000516444 string=0x0000000000516448 "="
 *   insn=0x0000000000516448 string=0x000000000051644C "5"
 *   insn=0x000000000051644C string=0x0000000000516450 "1"
 *   insn=0x0000000000516450 string=0x0000000000516454 "2@B-s"
 *   insn=0x0000000000516454 string=0x0000000000516458 "s"
 *   insn=0x0000000000516458 string=0x000000000051645C "("
 *   insn=0x000000000051645C string=0x0000000000516460 ")"
 *   insn=0x0000000000516460 string=0x0000000000516464 "*"
 *   insn=0x0000000000516464 string=0x0000000000516468 ","
 *   insn=0x000000000051646C string=0x0000000000516470 "B"
 *   insn=0x0000000000516470 string=0x0000000000516474 ">"
 *   insn=0x0000000000516478 string=0x000000000051647C "t"
 *   insn=0x0000000000516480 string=0x0000000000516484 "("
 *   insn=0x0000000000516484 string=0x000000000059B950 ""
 *   insn=0x0000000000516488 string=0x000000000051648C "H@L"
 *   insn=0x0000000000516490 string=0x0000000000516494 ""
 *   insn=0x0000000000516494 string=0x0000000000516498 "7"
 *   insn=0x0000000000516498 string=0x000000000051649C "ZC"
 *   insn=0x000000000051649C string=0x00000000005164A0 "yCn"
 *   insn=0x00000000005164A8 string=0x00000000005164AC "_\t"
 *   insn=0x00000000005164AC string=0x00000000005164B0 "\"
 *   insn=0x00000000005164B0 string=0x00000000005164B4 "("
 *   insn=0x00000000005164B4 string=0x00000000005164B8 ";\t"
 *   insn=0x00000000005164BC string=0x00000000005164C0 ""
 *   insn=0x00000000005164C8 string=0x00000000005164CC "|Cn"
 *   insn=0x00000000005164D8 string=0x00000000005164DC "v"
 *   insn=0x0000000000516504 string=0x0000000000516508 "("
 *   insn=0x0000000000516508 string=0x000000000051650C "}"
 *   insn=0x0000000000516518 string=0x000000000051651C "s"
 *   insn=0x000000000051651C string=0x0000000000516520 "T"
 *   insn=0x0000000000516520 string=0x0000000000516524 "G"
 *   insn=0x000000000051652C string=0x0000000000516530 "%"
 *   insn=0x0000000000516530 string=0x0000000000516534 "u"
 *   insn=0x0000000000516534 string=0x0000000000516538 "2"
 *   insn=0x0000000000516538 string=0x000000000051653C "0"
 *   insn=0x000000000051653C string=0x0000000000516540 "y"
 *   insn=0x0000000000516540 string=0x0000000000516544 "{"
 *   insn=0x0000000000516560 string=0x0000000000516564 "r"
 *   insn=0x0000000000516570 string=0x0000000000516574 ""
 *   insn=0x0000000000516578 string=0x000000000051657C "Q"
 *   insn=0x0000000000516580 string=0x0000000000516584 "p"
 *   insn=0x0000000000516584 string=0x0000000000516588 "c"
 *   insn=0x0000000000516588 string=0x000000000051658C "%"
 *   insn=0x000000000051658C string=0x0000000000516590 "G"
 *   insn=0x0000000000516590 string=0x0000000000516594 "!"
 *   insn=0x0000000000516594 string=0x0000000000516598 "B"
 *   insn=0x000000000051659C string=0x00000000005165A0 "f"
 *   insn=0x00000000005165A0 string=0x00000000005165A4 "Q"
 *   insn=0x00000000005165A4 string=0x00000000005165A8 "#"
 *   insn=0x00000000005165BC string=0x00000000005165C0 "3Z ntX n"
 *   insn=0x00000000005165C0 string=0x00000000005165C4 "tX n"
 *   insn=0x00000000005165C8 string=0x00000000005165CC "FZ n"
 *   insn=0x00000000005165D0 string=0x00000000005165D4 "BX n"
 *   insn=0x00000000005165DC string=0x00000000005165E0 "1*a"
 *   insn=0x00000000005165E0 string=0x00000000005165E4 "R*a"
 *   insn=0x00000000005165E8 string=0x00000000005165EC "e*a"
 *   insn=0x00000000005165F0 string=0x00000000005165F4 "!X n"
 *   insn=0x00000000005165FC string=0x0000000000516600 "B(a"
 *   insn=0x0000000000516608 string=0x000000000051660C "c(a"
 *   insn=0x000000000051660C string=0x0000000000516610 "!(a"
 *   insn=0x0000000000516610 string=0x0000000000516614 "R"
 *   insn=0x0000000000516614 string=0x0000000000516618 "1"
 *   insn=0x000000000051661C string=0x0000000000516620 "B"
 *   insn=0x0000000000516628 string=0x000000000051662C "="
 *   insn=0x000000000051662C string=0x0000000000516630 "c"
 *   insn=0x0000000000516630 string=0x0000000000516634 "!"
 *   insn=0x0000000000516634 string=0x0000000000516638 "G"
 *   insn=0x0000000000516640 string=0x0000000000516644 "0"
 *   insn=0x0000000000516644 string=0x0000000000516648 "B"
 *   insn=0x0000000000516648 string=0x000000000051664C "r"
 *   insn=0x000000000051664C string=0x0000000000516650 "!"
 *   insn=0x0000000000516664 string=0x0000000000516668 "B"
 *   insn=0x0000000000516668 string=0x000000000051666C "!"
 *   insn=0x000000000051666C string=0x0000000000516670 "c"
 *   insn=0x0000000000516678 string=0x000000000051667C "'V?OB"
 *   insn=0x000000000051667C string=0x0000000000516680 "B"
 *   insn=0x0000000000516680 string=0x0000000000516684 "!"
 *   insn=0x0000000000516690 string=0x0000000000516694 "PV?O"
 *   insn=0x0000000000516698 string=0x000000000051669C "BT?O!T?O"
 *   insn=0x000000000051669C string=0x00000000005166A0 "!T?O"
 *   insn=0x00000000005166A8 string=0x00000000005166AC ""
 *   insn=0x00000000005166AC string=0x00000000005166B0 "c"
 *   insn=0x00000000005166B0 string=0x00000000005166B4 "E"
 *   insn=0x00000000005166B4 string=0x00000000005166B8 "$"
 *   insn=0x00000000005166BC string=0x00000000005166C0 "a"
 *   insn=0x00000000005166D0 string=0x00000000005166D4 "c"
 *   insn=0x00000000005166D4 string=0x00000000005166D8 "J"
 *   insn=0x00000000005166DC string=0x00000000005166E0 "k"
 *   insn=0x00000000005166E0 string=0x00000000005166E4 "J}"
 *   insn=0x00000000005166E4 string=0x00000000005166E8 ")"
 *   insn=0x00000000005166E8 string=0x00000000005166EC "J}I}\t"
 *   insn=0x00000000005166EC string=0x00000000005166F0 "I}\t"
 *   insn=0x0000000000516704 string=0x0000000000516710 "H"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall PVRTBoundingBoxIsVisible(const float *a1, __int64 a2, _BYTE *a3)
{
  const float *v3; // x11
  float v4; // s4
  float v5; // s5
  float v6; // s7
  float v7; // s6
  float v8; // s17
  float v9; // s16
  float v10; // s18
  float32x4_t v11; // q19
  const float *v12; // x8
  const float *v13; // x9
  const float *v14; // x10
  const float *v15; // x12
  float32x4_t v16; // q1
  float32x4_t v17; // q2
  float32x4_t v18; // q30
  float32x4_t v19; // q3
  float v20; // s20
  const float *v21; // x0
  int8x16_t v22; // q26
  int8x16_t v23; // q27
  float32x4_t v24; // q26
  float32x4_t v25; // q25
  float32x4_t v26; // q24
  int8x16_t v27; // q31
  int8x16_t v28; // q27
  float32x4_t v29; // q23
  float32x4_t v30; // q28
  float32x4_t v31; // q27
  int v32; // w8
  float32x4_t v33; // q29
  float32x4_t v34; // q30
  float32x4_t v35; // q22
  float32x4_t v36; // q23
  float32x4_t v37; // q19
  float32x4_t v38; // q20
  float32x4_t v39; // q7
  float32x4_t v40; // q26
  float32x4_t v41; // q28
  float32x4_t v42; // q5
  float32x4_t v43; // q18
  float32x4_t v44; // q16
  float32x4_t v45; // q25
  float32x4_t v46; // q6
  float32x4_t v47; // q16
  float32x4_t v48; // q3
  float32x4_t v49; // q5
  float32x4_t v50; // q7
  float32x4_t v51; // q1
  float32x4_t v52; // q2
  float32x4_t v53; // q4
  float32x4_t v54; // q6
  int8x16_t v55; // q17
  int8x16_t v56; // q3
  int8x16_t v57; // q18
  int8x16_t v58; // q16
  int8x16_t v59; // q2
  int8x16_t v60; // q7
  int8x16_t v61; // q1
  int32x4_t v62; // q6
  int32x4_t v63; // q4
  __int64 result; // x0
  float32x4x3_t v65; // 0:q8.16,16:q9.16,32:q10.16
  float32x4x3_t v66; // 0:q23.16,16:q24.16,32:q25.16

  v3 = (const float *)a2;
  v4 = *(float *)(a2 + 44);
  v5 = *(float *)(a2 + 28);
  v6 = *(float *)(a2 + 12);
  v8 = *(float *)(a2 + 32);
  v7 = *(float *)(a2 + 36);
  v10 = *(float *)(a2 + 16);
  v9 = *(float *)(a2 + 20);
  v11 = vld1q_dup_f32(v3++);
  v12 = (const float *)(a2 + 60);
  v13 = (const float *)(a2 + 56);
  v14 = (const float *)(a2 + 52);
  v15 = (const float *)(a2 + 48);
  v16 = vld1q_dup_f32(v15);
  v17 = vld1q_dup_f32(v14);
  v18 = vld1q_dup_f32(v13);
  v19 = vld1q_dup_f32(v12);
  v20 = *v3;
  v66 = vld3q_f32(a1);
  v21 = a1 + 12;
  v65 = vld3q_f32(v21);
  v22 = vrev64q_s32(v66.val[0]);
  v23 = vrev64q_s32(v66.val[1]);
  v66.val[0] = vrev64q_s32(v66.val[2]);
  v24 = vextq_s8(v22, v22, 8u);
  v25 = vextq_s8(v23, v23, 8u);
  v26 = vextq_s8(v66.val[0], v66.val[0], 8u);
  v66.val[0] = vrev64q_s32(v65.val[0]);
  v27 = vrev64q_s32(v65.val[2]);
  v28 = vrev64q_s32(v65.val[1]);
  v29 = vextq_s8(v66.val[0], v66.val[0], 8u);
  v30 = vextq_s8(v28, v28, 8u);
  v31 = vextq_s8(v27, v27, 8u);
  v32 = vaddvq_s32(
          vaddq_s32(
            vaddq_s32(
              vcltzq_f32(
                vaddq_f32(
                  v18,
                  vaddq_f32(
                    vaddq_f32(vmulq_n_f32(v29, *(float *)(a2 + 8)), vmulq_n_f32(v30, *(float *)(a2 + 24))),
                    vmulq_n_f32(v31, *(float *)(a2 + 40))))),
              vcltzq_f32(
                vaddq_f32(
                  v18,
                  vaddq_f32(
                    vaddq_f32(vmulq_n_f32(v24, *(float *)(a2 + 8)), vmulq_n_f32(v25, *(float *)(a2 + 24))),
                    vmulq_n_f32(v26, *(float *)(a2 + 40)))))),
            (int32x4_t)xmmword_59B950));
  if ( !v32 )
    goto LABEL_5;
  v33 = vmulq_f32(v11, v29);
  v34 = vmulq_n_f32(v30, v10);
  v35 = vmulq_n_f32(v29, v20);
  v36 = vmulq_n_f32(v29, v6);
  v37 = vmulq_f32(v11, v24);
  v38 = vmulq_n_f32(v24, v20);
  v39 = vmulq_n_f32(v24, v6);
  v40 = vmulq_n_f32(v30, v9);
  v41 = vmulq_n_f32(v30, v5);
  v42 = vmulq_n_f32(v25, v5);
  v43 = vmulq_n_f32(v25, v10);
  v44 = vmulq_n_f32(v25, v9);
  v45 = vmulq_n_f32(v31, v7);
  v46 = vaddq_f32(vaddq_f32(v38, v44), vmulq_n_f32(v26, v7));
  v47 = vaddq_f32(v19, vaddq_f32(vaddq_f32(v36, v41), vmulq_n_f32(v31, v4)));
  v48 = vaddq_f32(v19, vaddq_f32(vaddq_f32(v39, v42), vmulq_n_f32(v26, v4)));
  v49 = vaddq_f32(v16, vaddq_f32(vaddq_f32(v33, v34), vmulq_n_f32(v31, v8)));
  v50 = vaddq_f32(v17, vaddq_f32(vaddq_f32(v35, v40), v45));
  v51 = vaddq_f32(v16, vaddq_f32(vaddq_f32(v37, v43), vmulq_n_f32(v26, v8)));
  v52 = vaddq_f32(v17, v46);
  v53 = vnegq_f32(v47);
  v54 = vnegq_f32(v48);
  v55 = vcgtq_f32(v52, v48);
  v56 = vcgtq_f32(v51, v48);
  v57 = vcgtq_f32(v50, v47);
  v58 = vcgtq_f32(v49, v47);
  v59 = vcgtq_f32(v54, v52);
  v60 = vcgtq_f32(v53, v50);
  v61 = vcgtq_f32(v54, v51);
  v62 = vmvnq_s8(v57);
  v63 = vmvnq_s8(vcgtq_f32(v53, v49));
  v49.n128_u64[0] = vmovn_s32(vmvnq_s8(v55)).n64_u64[0];
  v37.n128_u64[0] = vmovn_s32(vmvnq_s8(v56)).n64_u64[0];
  v59.n128_u64[0] = vmovn_s32(vmvnq_s8(v59)).n64_u64[0];
  v60.n128_u64[0] = vmovn_s32(vmvnq_s8(v60)).n64_u64[0];
  v63.n128_u64[0] = vmovn_s32(v63).n64_u64[0];
  v61.n128_u64[0] = vmovn_s32(vmvnq_s8(v61)).n64_u64[0];
  v57.n128_u64[0] = vand_s8(vmovn_s32(v57), (int8x8_t)v60.n128_u64[0]).n64_u64[0];
  v55.n128_u64[0] = vand_s8(vmovn_s32(v55), (int8x8_t)v59.n128_u64[0]).n64_u64[0];
  v59.n128_u64[0] = vand_s8((int8x8_t)v59.n128_u64[0], (int8x8_t)v49.n128_u64[0]).n64_u64[0];
  v49.n128_u64[0] = vand_s8(vmovn_s32(v58), (int8x8_t)v63.n128_u64[0]).n64_u64[0];
  v56.n128_u64[0] = vand_s8(vmovn_s32(v56), (int8x8_t)v61.n128_u64[0]).n64_u64[0];
  if ( !(vaddvq_s32(
           vaddq_s32(
             vsraq_n_s32(
               vshrq_n_s32(vshlq_n_s32(vmovl_u16((uint16x4_t)v49.n128_u64[0]), 0x1Fu), 0x1Fu),
               vshlq_n_s32(vmovl_u16((uint16x4_t)v56.n128_u64[0]), 0x1Fu),
               0x1Fu),
             (int32x4_t)xmmword_59B950))
       * vaddvq_s32(
           vaddq_s32(
             vsraq_n_s32(
               vshrq_n_s32(
                 vshlq_n_s32(
                   vmovl_u16(
                     veor_s8(
                       veor_s8(vand_s8((int8x8_t)v63.n128_u64[0], vmovn_s32(vmvnq_s8(v58))), (int8x8_t)v49.n128_u64[0]),
                       (int8x8_t)0x1000100010001LL)),
                   0x1Fu),
                 0x1Fu),
               vshlq_n_s32(
                 vmovl_u16(
                   veor_s8(
                     veor_s8(vand_s8((int8x8_t)v61.n128_u64[0], (int8x8_t)v37.n128_u64[0]), (int8x8_t)v56.n128_u64[0]),
                     (int8x8_t)0x1000100010001LL)),
                 0x1Fu),
               0x1Fu),
             (int32x4_t)xmmword_59B950))
       * vaddvq_s32(
           vaddq_s32(
             vsraq_n_s32(
               vshrq_n_s32(
                 vshlq_n_s32(
                   vmovl_u16(
                     veor_s8(
                       veor_s8(vand_s8((int8x8_t)v60.n128_u64[0], vmovn_s32(v62)), (int8x8_t)v57.n128_u64[0]),
                       (int8x8_t)0x1000100010001LL)),
                   0x1Fu),
                 0x1Fu),
               vshlq_n_s32(
                 vmovl_u16(veor_s8(veor_s8((int8x8_t)v59.n128_u64[0], (int8x8_t)v55.n128_u64[0]), (int8x8_t)0x1000100010001LL)),
                 0x1Fu),
               0x1Fu),
             (int32x4_t)xmmword_59B950))
       * vaddvq_s32(
           vaddq_s32(
             vsraq_n_s32(
               vshrq_n_s32(vshlq_n_s32(vmovl_u16((uint16x4_t)v57.n128_u64[0]), 0x1Fu), 0x1Fu),
               vshlq_n_s32(vmovl_u16((uint16x4_t)v55.n128_u64[0]), 0x1Fu),
               0x1Fu),
             (int32x4_t)xmmword_59B950))) )
  {
    LOBYTE(v32) = 0;
LABEL_5:
    result = 0;
    goto LABEL_6;
  }
  LOBYTE(v32) = v32 != 8;
  result = 1;
LABEL_6:
  *a3 = v32;
  return result;
}

