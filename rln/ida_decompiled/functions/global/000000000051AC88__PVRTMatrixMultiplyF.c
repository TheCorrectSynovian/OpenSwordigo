/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051AC88
 * Mangled: _Z19PVRTMatrixMultiplyFR11PVRTMATRIXfRKS_S2_
 * Demangled: PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Callers: 1
 *   0x0000000000202A50  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Callees: 0
 *
 * Referenced strings: 39
 *   insn=0x000000000051AC98 string=0x000000000051AC9C "$"
 *   insn=0x000000000051AC9C string=0x000000000051ACA0 "B"
 *   insn=0x000000000051ACA0 string=0x000000000051ACA4 "@"
 *   insn=0x000000000051ACA4 string=0x000000000051ACA8 "GDBmPHCm4LB-5XC-7`D-9hE-;pF-=xG-"
 *   insn=0x000000000051ACA8 string=0x000000000051ACAC "PHCm4LB-5XC-7`D-9hE-;pF-=xG-"
 *   insn=0x000000000051ACAC string=0x000000000051ACB0 "4LB-5XC-7`D-9hE-;pF-=xG-"
 *   insn=0x000000000051ACB0 string=0x000000000051ACB4 "5XC-7`D-9hE-;pF-=xG-"
 *   insn=0x000000000051ACB4 string=0x000000000051ACB8 "7`D-9hE-;pF-=xG-"
 *   insn=0x000000000051ACB8 string=0x000000000051ACBC "9hE-;pF-=xG-"
 *   insn=0x000000000051ACBC string=0x000000000051ACC0 ";pF-=xG-"
 *   insn=0x000000000051ACC0 string=0x000000000051ACC4 "=xG-"
 *   insn=0x000000000051ACCC string=0x000000000051ACD0 "\t"
 *   insn=0x000000000051ACD0 string=0x000000000051ACD4 "c"
 *   insn=0x000000000051ACD4 string=0x000000000051ACD8 "$"
 *   insn=0x000000000051ACD8 string=0x000000000051ACDC "E"
 *   insn=0x000000000051ACDC string=0x000000000051ACE0 "J"
 *   insn=0x000000000051ACEC string=0x000000000051ACF0 "5"
 *   insn=0x000000000051ACF0 string=0x000000000051ACF4 "V"
 *   insn=0x000000000051ACF4 string=0x000000000051ACF8 "M"
 *   insn=0x000000000051ACFC string=0x000000000051AD00 "B"
 *   insn=0x000000000051AD08 string=0x000000000051AD0C "9"
 *   insn=0x000000000051AD10 string=0x000000000051AD14 "1"
 *   insn=0x000000000051AD18 string=0x000000000051AD1C "Z"
 *   insn=0x000000000051AD20 string=0x000000000051AD24 "R"
 *   insn=0x000000000051AD28 string=0x000000000051AD2C "3"
 *   insn=0x000000000051AD34 string=0x000000000051AD38 "8"
 *   insn=0x000000000051AD44 string=0x000000000051AD48 "B"
 *   insn=0x000000000051AD48 string=0x000000000051AD4C "8"
 *   insn=0x000000000051AD50 string=0x000000000051AD54 "s"
 *   insn=0x000000000051AD5C string=0x000000000051AD60 "q"
 *   insn=0x000000000051AD68 string=0x000000000051AD6C "^"
 *   insn=0x000000000051AD78 string=0x000000000051AD7C "!"
 *   insn=0x000000000051AD80 string=0x000000000051AD84 "a"
 *   insn=0x000000000051AD84 string=0x000000000051AD88 "B"
 *   insn=0x000000000051AD8C string=0x000000000051AD90 "!"
 *   insn=0x000000000051AD90 string=0x000000000051AD94 ""
 *   insn=0x000000000051AD98 string=0x000000000051AD9C "B"
 *   insn=0x000000000051ADA4 string=0x000000000051ADA8 "!"
 *   insn=0x000000000051ADA8 string=0x000000000051ADAC "D"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall PVRTMatrixMultiplyF(float32x2_t *a1, _DWORD *a2, float32x2_t *a3)
{
  const float *v3; // x8
  float32x2_t v4; // d3
  float v5; // s4
  float v6; // s5
  float32x2_t v7; // d6
  float32x2_t v8; // d0
  float32x2_t v9; // d1
  float32x2_t v10; // d7
  float32x2_t v11; // d17
  float32x2_t v12; // d16
  float32x2_t v13; // d18
  float v14; // s19
  float v15; // s20
  float v16; // s21
  float v17; // s22
  float v18; // s23
  float v19; // s24
  float v20; // s25
  float v21; // s26
  float v22; // s27
  float v23; // s28
  float v24; // s29
  float v25; // s30
  float32x2_t v26; // d31
  float32x2_t v27; // d8
  float32x2_t v28; // d9
  float32x2_t v29; // d3
  float32x2_t v30; // d4
  float32x2_t v31; // d5
  float32x2_t v32; // d10
  float32x2_t v33; // d11
  float32x2_t v34; // d12
  float32x2_t v35; // d20
  float32x2_t v36; // d21
  float32x2_t v37; // d22
  float32x2_t v38; // d13
  float32x2_t v39; // d23
  float32x2_t v40; // d2
  float32x2_t v41; // d6
  float32x2_t v42; // d27
  float32x2_t v43; // d25
  float32x2_t v44; // d7
  float32x2_t v45; // d17
  float32x2_t v46; // d29
  float32x2_t v47; // d26
  float32x2_t v48; // d16
  float32x2_t v49; // d18
  float32x2_t v50; // d30
  float32x2_t v51; // d23
  float32x2_t v52; // d2
  float32x2_t v53; // d6
  unsigned __int64 v54; // d17
  unsigned __int64 v55; // d19
  float32x2_t result; // d0
  unsigned __int64 v57; // d1

  v3 = (const float *)a2;
  v4.n64_u64[0] = vld1_dup_f32(v3++).n64_u64[0];
  v5 = *((float *)a2 + 2);
  v6 = *((float *)a2 + 3);
  v7.n64_u64[0] = a3[1].n64_u64[0];
  v8.n64_u64[0] = a3[2].n64_u64[0];
  v9.n64_u64[0] = a3[3].n64_u64[0];
  v10.n64_u64[0] = a3[4].n64_u64[0];
  v11.n64_u64[0] = a3[5].n64_u64[0];
  v12.n64_u64[0] = a3[6].n64_u64[0];
  v13.n64_u64[0] = a3[7].n64_u64[0];
  v15 = *((float *)a2 + 4);
  v14 = *((float *)a2 + 5);
  v16 = *((float *)a2 + 6);
  v17 = *((float *)a2 + 7);
  v18 = *((float *)a2 + 8);
  v19 = *((float *)a2 + 9);
  v20 = *((float *)a2 + 10);
  v21 = *((float *)a2 + 11);
  v22 = *((float *)a2 + 12);
  v23 = *((float *)a2 + 13);
  v24 = *((float *)a2 + 14);
  v25 = *((float *)a2 + 15);
  v26.n64_u64[0] = vmul_f32(v4, (float32x2_t)a3->n64_u64[0]).n64_u64[0];
  v27.n64_u64[0] = vmul_n_f32(v10, v5).n64_u64[0];
  v28.n64_u64[0] = vmul_n_f32(v12, v6).n64_u64[0];
  v29.n64_u64[0] = vmul_f32(v4, v7).n64_u64[0];
  v30.n64_u64[0] = vmul_n_f32(v11, v5).n64_u64[0];
  v31.n64_u64[0] = vmul_n_f32(v13, v6).n64_u64[0];
  v32.n64_u64[0] = vmul_n_f32((float32x2_t)a3->n64_u64[0], v15).n64_u64[0];
  v33.n64_u64[0] = vmul_n_f32(v10, v16).n64_u64[0];
  v34.n64_u64[0] = vmul_n_f32(v12, v17).n64_u64[0];
  v35.n64_u64[0] = vmul_n_f32(v7, v15).n64_u64[0];
  v36.n64_u64[0] = vmul_n_f32(v11, v16).n64_u64[0];
  v37.n64_u64[0] = vmul_n_f32(v13, v17).n64_u64[0];
  v38.n64_u64[0] = vmul_n_f32((float32x2_t)a3->n64_u64[0], v18).n64_u64[0];
  v39.n64_u64[0] = vmul_n_f32(v7, v18).n64_u64[0];
  v40.n64_u64[0] = vmul_n_f32((float32x2_t)a3->n64_u64[0], v22).n64_u64[0];
  v41.n64_u64[0] = vmul_n_f32(v7, v22).n64_u64[0];
  v42.n64_u64[0] = vmul_n_f32(v10, v20).n64_u64[0];
  v43.n64_u64[0] = vmul_n_f32(v11, v20).n64_u64[0];
  v44.n64_u64[0] = vmul_n_f32(v10, v24).n64_u64[0];
  v45.n64_u64[0] = vmul_n_f32(v11, v24).n64_u64[0];
  v46.n64_u64[0] = vmul_n_f32(v12, v21).n64_u64[0];
  v47.n64_u64[0] = vmul_n_f32(v13, v21).n64_u64[0];
  v48.n64_u64[0] = vmul_n_f32(v12, v25).n64_u64[0];
  v49.n64_u64[0] = vmul_n_f32(v13, v25).n64_u64[0];
  v50.n64_u64[0] = vmul_n_f32(v8, v14).n64_u64[0];
  v51.n64_u64[0] = vadd_f32(v39, vmul_n_f32(v9, v19)).n64_u64[0];
  v52.n64_u64[0] = vadd_f32(v40, vmul_n_f32(v8, v23)).n64_u64[0];
  v53.n64_u64[0] = vadd_f32(vadd_f32(v41, vmul_n_f32(v9, v23)), v45).n64_u64[0];
  v54 = vadd_f32(vadd_f32(vadd_f32(v35, vmul_n_f32(v9, v14)), v36), v37).n64_u64[0];
  v55 = vadd_f32(vadd_f32(vadd_f32(v38, vmul_n_f32(v8, v19)), v42), v46).n64_u64[0];
  result.n64_u64[0] = vadd_f32(vadd_f32(vadd_f32(v26, vmul_n_f32(v8, *v3)), v27), v28).n64_u64[0];
  v57 = vadd_f32(vadd_f32(vadd_f32(v29, vmul_n_f32(v9, *v3)), v30), v31).n64_u64[0];
  a1[2].n64_u64[0] = vadd_f32(vadd_f32(vadd_f32(v32, v50), v33), v34).n64_u64[0];
  a1[3].n64_u64[0] = v54;
  a1[4].n64_u64[0] = v55;
  a1[5].n64_u64[0] = vadd_f32(vadd_f32(v51, v43), v47).n64_u64[0];
  a1->n64_u64[0] = result.n64_u64[0];
  a1[1].n64_u64[0] = v57;
  a1[6].n64_u64[0] = vadd_f32(vadd_f32(v52, v44), v48).n64_u64[0];
  a1[7].n64_u64[0] = vadd_f32(v53, v49).n64_u64[0];
  return result;
}

