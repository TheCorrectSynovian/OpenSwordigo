/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000051AFC0
 * Mangled: _Z18PVRTMatrixInverseFR11PVRTMATRIXfRKS_
 * Demangled: PVRTMatrixInverseF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Callers: 1
 *   0x00000000001F40F0  PVRTMatrixInverseF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Callees: 0
 *
 * Referenced strings: 54
 *   insn=0x000000000051AFC0 string=0x000000000051AFC4 "%"
 *   insn=0x000000000051AFC4 string=0x000000000051AFC8 "0"
 *   insn=0x000000000051AFC8 string=0x000000000051AFCC "1"
 *   insn=0x000000000051AFCC string=0x000000000051AFD0 "# @"
 *   insn=0x000000000051AFD4 string=0x000000000051AFD8 "&"
 *   insn=0x000000000051AFD8 string=0x000000000051AFDC "t\n!"
 *   insn=0x000000000051AFF4 string=0x000000000051AFF8 "u1"
 *   insn=0x000000000051B000 string=0x000000000051B004 "T"
 *   insn=0x000000000051B00C string=0x000000000051B010 "H# "
 *   insn=0x000000000051B024 string=0x000000000051B028 "t"
 *   insn=0x000000000051B028 string=0x000000000051B02C "X#"
 *   insn=0x000000000051B02C string=0x000000000051B030 "h# "
 *   insn=0x000000000051B030 string=0x000000000051B034 "[+t"
 *   insn=0x000000000051B034 string=0x000000000051B038 "Z"
 *   insn=0x000000000051B044 string=0x000000000051B048 "{"
 *   insn=0x000000000051B054 string=0x000000000051B058 "\+{"
 *   insn=0x000000000051B058 string=0x000000000051B05C "Z"
 *   insn=0x000000000051B05C string=0x000000000051B060 "<"
 *   insn=0x000000000051B060 string=0x000000000051B064 "46"
 *   insn=0x000000000051B070 string=0x000000000051B074 "g"
 *   insn=0x000000000051B078 string=0x000000000051B07C "T+|"
 *   insn=0x000000000051B07C string=0x000000000051B080 "T"
 *   insn=0x000000000051B080 string=0x000000000051B084 ":"
 *   insn=0x000000000051B088 string=0x000000000051B08C ";&"
 *   insn=0x000000000051B08C string=0x000000000051B090 "Z"
 *   insn=0x000000000051B094 string=0x000000000051B098 "`#2"
 *   insn=0x000000000051B0A4 string=0x000000000051B0A8 "R"
 *   insn=0x000000000051B0AC string=0x000000000051B0B0 "H#`"
 *   insn=0x000000000051B0B0 string=0x000000000051B0B4 "@\t"
 *   insn=0x000000000051B0B4 string=0x000000000051B0B8 ""
 *   insn=0x000000000051B0C0 string=0x000000000051B0C4 "Gg"
 *   insn=0x000000000051B0D4 string=0x000000000051B0D8 "$"
 *   insn=0x000000000051B0D8 string=0x000000000051B0DC "[!"
 *   insn=0x000000000051B0E4 string=0x000000000051B0E8 "B$"
 *   insn=0x000000000051B0E8 string=0x000000000051B0EC "2 "
 *   insn=0x000000000051B0F8 string=0x000000000051B0FC "'1"
 *   insn=0x000000000051B0FC string=0x000000000051B100 "1\n&"
 *   insn=0x000000000051B108 string=0x000000000051B10C "f&"
 *   insn=0x000000000051B10C string=0x000000000051B110 "s:6"
 *   insn=0x000000000051B114 string=0x000000000051B118 " "
 *   insn=0x000000000051B11C string=0x000000000051B120 "x;<"
 *   insn=0x000000000051B120 string=0x000000000051B124 "#8@"
 *   insn=0x000000000051B128 string=0x000000000051B12C "F:&"
 *   insn=0x000000000051B138 string=0x000000000051B13C "5;5"
 *   insn=0x000000000051B13C string=0x000000000051B140 "":""
 *   insn=0x000000000051B150 string=0x000000000051B154 "B%"
 *   insn=0x000000000051B174 string=0x000000000051B178 "e\n%"
 *   insn=0x000000000051B17C string=0x000000000051B180 "S "
 *   insn=0x000000000051B180 string=0x000000000051B184 "22"
 *   insn=0x000000000051B188 string=0x000000000051B18C " "
 *   insn=0x000000000051B198 string=0x000000000051B19C "b:2"
 *   insn=0x000000000051B1A4 string=0x000000000051B1A8 "B(6"
 *   insn=0x000000000051B1B0 string=0x000000000051B1B4 "A@!"
 *   insn=0x000000000051B1D4 string=0x000000000051B1D8 "<"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall PVRTMatrixInverseF(float32x2_t *a1, __int64 a2)
{
  float32x2_t result; // d0
  float v3; // s2
  float v4; // s5
  float v5; // s1
  float v6; // s16
  float v7; // s4
  float v8; // s17
  float v9; // s3
  float v10; // s19
  float v11; // s6
  double v12; // d7
  float v13; // s23
  double v14; // d28
  float v15; // s26
  double v16; // d20
  float v17; // s21
  double v18; // d28
  double v19; // d20
  float v20; // s27
  double v21; // d26
  double v22; // d20
  double v23; // d20
  float v24; // s24
  bool v25; // nf
  double v26; // d27
  float v27; // s28
  double v28; // d20
  double v29; // d27
  float v30; // s22
  bool v31; // cc
  double v32; // d27
  double v33; // d28
  float v34; // s25
  double v35; // d20
  double v36; // d28
  double v37; // d26
  double v38; // d7
  double v39; // d18
  double v40; // d26
  double v41; // d7
  float v42; // s27
  float v43; // s28
  float v44; // s16
  float v45; // s2
  float v46; // s18
  float v47; // s29
  float v48; // s4
  float v49; // s7
  float v50; // s17
  float v51; // s20
  float v52; // s5
  float v53; // s6
  float v54; // s0
  float v55; // s1
  float v56; // s3
  float v57; // s4
  float v58; // s5
  float v59; // s2
  float32x2_t v60; // d17
  float v61; // s7
  float32x2_t v62; // d6
  float v63; // s16
  float v64; // s2
  float v65; // s18
  float32x2_t v66; // d20
  float v67; // s21
  float v68; // s4
  float v69; // s5
  float v70; // s19

  result.n64_u32[0] = *(_DWORD *)(a2 + 16);
  v3 = *(float *)(a2 + 20);
  v4 = *(float *)a2;
  v6 = *(float *)(a2 + 36);
  v5 = *(float *)(a2 + 40);
  v8 = *(float *)(a2 + 4);
  v7 = *(float *)(a2 + 8);
  v9 = *(float *)(a2 + 32);
  v10 = *(float *)a2 * v3;
  v11 = *(float *)(a2 + 24);
  v12 = 0.0;
  v13 = result.n64_f32[0] * v6;
  v14 = (float)(v10 * v5);
  v15 = (float)(result.n64_f32[0] * v6) * v7;
  v16 = v14 + 0.0;
  v17 = v9 * v8;
  if ( (float)(v10 * v5) >= 0.0 )
    v18 = v14 + 0.0;
  else
    v18 = 0.0;
  if ( (float)(v10 * v5) < 0.0 )
    v12 = v16;
  v19 = v15;
  v20 = v17 * v11;
  v25 = v15 < 0.0;
  v21 = v18 + v15;
  v22 = v12 + v19;
  if ( v25 )
  {
    v21 = v18;
    v12 = v22;
  }
  v23 = v20;
  v24 = v3 * v9;
  v25 = v20 < 0.0;
  v26 = v21 + v20;
  if ( !v25 )
    v21 = v26;
  v27 = v7 * v24;
  v28 = v12 + v23;
  v29 = (float)-(float)(v7 * v24);
  v30 = result.n64_f32[0] * v8;
  if ( v25 )
    v12 = v28;
  v31 = v27 > -0.0;
  if ( v27 <= -0.0 )
    v21 = v21 + v29;
  v32 = v12 + v29;
  v33 = (float)-(float)(v5 * v30);
  v34 = v4 * v6;
  if ( v31 )
    v12 = v32;
  v35 = v21 + v33;
  if ( (float)(v5 * v30) > -0.0 )
    v35 = v21;
  v36 = v12 + v33;
  v37 = (float)-(float)(v34 * v11);
  if ( (float)(v5 * v30) <= -0.0 )
    v36 = v12;
  v38 = v35 + v37;
  v39 = v36 + v37;
  if ( (float)(v34 * v11) <= -0.0 )
    v39 = v36;
  else
    v38 = v35;
  v40 = v38 + v39;
  if ( v38 + v39 != 0.0 )
  {
    v41 = v40 / (v38 - v39);
    if ( v41 <= 0.0 )
      v41 = -v41;
    if ( v41 >= 1.0e-15 )
    {
      v42 = v3 * v5;
      v43 = v6 * v11;
      v44 = v6 * v7;
      v45 = v3 * v7;
      v46 = v5 * result.n64_f32[0];
      v47 = v7 * v9;
      v48 = result.n64_f32[0] * v7;
      v49 = v5 * v8;
      v50 = v8 * v11;
      v51 = v4 * v5;
      v52 = v4 * v11;
      v53 = v9 * v11;
      v54 = *(float *)(a2 + 48);
      v55 = *(float *)(a2 + 52);
      v56 = *(float *)(a2 + 56);
      v57 = v52 - v48;
      v58 = 1.0 / v40;
      v59 = v50 - v45;
      v60.n64_f32[0] = (float)(v42 - v43) * v58;
      v61 = -(float)((float)(v49 - v44) * v58);
      v62.n64_f32[0] = -(float)((float)(v46 - v53) * v58);
      v63 = (float)(v51 - v47) * v58;
      v64 = v59 * v58;
      v65 = v57 * v58;
      v66.n64_f32[0] = (float)(v13 - v24) * v58;
      v67 = -(float)((float)(v34 - v17) * v58);
      a1->n64_u32[0] = v60.n64_u32[0];
      a1->n64_f32[1] = v61;
      a1[2].n64_u32[0] = v62.n64_u32[0];
      a1[2].n64_f32[1] = v63;
      v60.n64_f32[1] = v61;
      v62.n64_f32[1] = v63;
      v68 = -(float)(v57 * v58);
      v69 = (float)(v10 - v30) * v58;
      a1[4].n64_u32[0] = v66.n64_u32[0];
      a1[4].n64_f32[1] = v67;
      v70 = v64 * v54;
      v66.n64_f32[1] = v67;
      a1[1].n64_f32[0] = v64;
      result.n64_u64[0] = vneg_f32(vadd_f32(vadd_f32(vmul_n_f32(v60, v54), vmul_n_f32(v62, v55)), vmul_n_f32(v66, v56))).n64_u64[0];
      a1[1].n64_u32[1] = 0;
      a1[3].n64_u32[1] = 0;
      a1[5].n64_u32[1] = 0;
      a1[3].n64_f32[0] = v68;
      a1[5].n64_f32[0] = v69;
      a1[7].n64_f32[0] = -(float)((float)(v70 - (float)(v55 * v65)) + (float)(v69 * v56));
      a1[6].n64_u64[0] = result.n64_u64[0];
      a1[7].n64_u32[1] = 1065353216;
    }
  }
  return result;
}

