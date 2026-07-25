/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE974
 * Mangled: _ZNK5Caver7Matrix47InverseEv
 * Demangled: Caver::Matrix4::Inverse(void)
 *
 * Callers: 1
 *   0x00000000001F9650  Caver::Matrix4::Inverse(void)
 *
 * Callees: 1
 *   0x00000000001F7C40  .puts
 *
 * Referenced strings: 53
 *   insn=0x00000000004AE998 string=0x00000000004AE99C "<+7"
 *   insn=0x00000000004AE99C string=0x00000000004AE9A0 "(# "
 *   insn=0x00000000004AE9A0 string=0x00000000004AE9A4 ")"
 *   insn=0x00000000004AE9A4 string=0x00000000004AE9A8 "Z\n#"
 *   insn=0x00000000004AE9B0 string=0x00000000004AE9B4 "8qG"
 *   insn=0x00000000004AE9B4 string=0x00000000004AE9B8 "P4"
 *   insn=0x00000000004AE9B8 string=0x00000000004AE9BC "H# "
 *   insn=0x00000000004AE9BC string=0x00000000004AE9C0 "<+:"
 *   insn=0x00000000004AE9C4 string=0x00000000004AE9C8 "\n%"
 *   insn=0x00000000004AE9C8 string=0x00000000004AE9CC "9"
 *   insn=0x00000000004AE9CC string=0x00000000004AE9D0 "W"
 *   insn=0x00000000004AE9D4 string=0x00000000004AE9D8 "h# "
 *   insn=0x00000000004AE9D8 string=0x00000000004AE9DC ":+;"
 *   insn=0x00000000004AE9E0 string=0x00000000004AE9E4 "|3"
 *   insn=0x00000000004AE9E4 string=0x00000000004AE9E8 "9"
 *   insn=0x00000000004AE9E8 string=0x00000000004AE9EC "w"
 *   insn=0x00000000004AE9F4 string=0x00000000004AE9F8 ";;<"
 *   insn=0x00000000004AE9FC string=0x00000000004AEA00 ":1"
 *   insn=0x00000000004AEA00 string=0x00000000004AEA04 "9"
 *   insn=0x00000000004AEA0C string=0x00000000004AEA10 "@#8"
 *   insn=0x00000000004AEA10 string=0x00000000004AEA14 "<;:"
 *   insn=0x00000000004AEA1C string=0x00000000004AEA20 "9"
 *   insn=0x00000000004AEA20 string=0x00000000004AEA24 "W"
 *   insn=0x00000000004AEA24 string=0x00000000004AEA28 "`#8"
 *   insn=0x00000000004AEA28 string=0x00000000004AEA2C "8;;"
 *   insn=0x00000000004AEA30 string=0x00000000004AEA34 "8"
 *   insn=0x00000000004AEA34 string=0x00000000004AEA38 "W"
 *   insn=0x00000000004AEA44 string=0x00000000004AEA48 "@"
 *   insn=0x00000000004AEA48 string=0x00000000004AEA50 "|$"
 *   insn=0x00000000004AEA48 string=0x0000000000597310 "Matrix has no inverse : singular matrix"
 *   insn=0x00000000004AEA50 string=0x00000000001F7C40 "0'"
 *   insn=0x00000000004AEA58 string=0x00000000004AEA5C ":4"
 *   insn=0x00000000004AEA68 string=0x00000000004AEA6C "; "
 *   insn=0x00000000004AEA74 string=0x00000000004AEA78 "E%"
 *   insn=0x00000000004AEA78 string=0x00000000004AEA7C "b""
 *   insn=0x00000000004AEA80 string=0x00000000004AEA84 "C:3"
 *   insn=0x00000000004AEA90 string=0x00000000004AEA94 "Q"
 *   insn=0x00000000004AEA98 string=0x00000000004AEA9C "S;5"
 *   insn=0x00000000004AEAA0 string=0x00000000004AEAA4 "e;%"
 *   insn=0x00000000004AEAA4 string=0x00000000004AEAA8 "!8""
 *   insn=0x00000000004AEAAC string=0x00000000004AEAB0 "B\n1"
 *   insn=0x00000000004AEAB0 string=0x00000000004AEAB4 "d"
 *   insn=0x00000000004AEABC string=0x00000000004AEAC0 "!1"
 *   insn=0x00000000004AEAC4 string=0x00000000004AEAC8 "c1"
 *   insn=0x00000000004AEAD4 string=0x00000000004AEAD8 "\t"
 *   insn=0x00000000004AEAF8 string=0x00000000004AEAFC "%"
 *   insn=0x00000000004AEB00 string=0x00000000004AEB04 "A"
 *   insn=0x00000000004AEB0C string=0x00000000004AEB10 "`\n "
 *   insn=0x00000000004AEB10 string=0x00000000004AEB14 "c"
 *   insn=0x00000000004AEB18 string=0x00000000004AEB1C "!"
 *   insn=0x00000000004AEB20 string=0x00000000004AEB24 "!"
 *   insn=0x00000000004AEB2C string=0x00000000004AEB30 "!"
 *   insn=0x00000000004AEB48 string=0x00000000004AEB4C "\t="
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Matrix4::Inverse@<S0>(Caver::Matrix4 *this@<X0>, float32x2_t *a2@<X8>)
{
  float v2; // s0
  float v3; // s7
  float v4; // s4
  float v5; // s1
  float v6; // s21
  float v7; // s3
  float v8; // s20
  float v9; // s2
  float v10; // s6
  float v11; // s23
  float v12; // s5
  float v13; // s18
  float v14; // s26
  float v15; // s25
  float v16; // s16
  bool v17; // nf
  float v18; // s28
  float v19; // s26
  float v20; // s27
  float v21; // s19
  float v22; // s26
  float v23; // s27
  float v24; // s28
  float v25; // s17
  bool v26; // cc
  float v27; // s27
  float v28; // s28
  float v29; // s26
  float v30; // s22
  float v31; // s28
  float v32; // s26
  float v33; // s27
  float v34; // s24
  float v35; // s23
  float result; // s0
  float v37; // s24
  float v38; // s25
  float v39; // s26
  float v40; // s21
  float v41; // s20
  float v42; // s27
  float v43; // s1
  float v44; // s4
  float v45; // s5
  float v46; // s1
  float v47; // s0
  float32x2_t v48; // d2
  float v49; // s7
  float32x2_t v50; // d5
  float v51; // s1
  float32x2_t v52; // d3
  float v53; // s16
  float v54; // s6
  float v55; // s18
  float v56; // s19
  float v57; // s20

  v2 = *((float *)this + 4);
  v3 = *((float *)this + 5);
  v4 = *(float *)this;
  v6 = *((float *)this + 9);
  v5 = *((float *)this + 10);
  v8 = *((float *)this + 1);
  v7 = *((float *)this + 2);
  v9 = *((float *)this + 8);
  v10 = *(float *)this * v3;
  v11 = 0.0;
  v12 = *((float *)this + 6);
  v13 = v2 * v6;
  v14 = (float)(v2 * v6) * v7;
  if ( (float)(v10 * v5) >= 0.0 )
    v15 = (float)(v10 * v5) + 0.0;
  else
    v15 = 0.0;
  if ( (float)(v10 * v5) < 0.0 )
    v11 = (float)(v10 * v5) + 0.0;
  v16 = v9 * v8;
  v17 = v14 < 0.0;
  v18 = v15 + v14;
  v19 = v11 + v14;
  v20 = (float)(v9 * v8) * v12;
  if ( v17 )
    v11 = v19;
  else
    v15 = v18;
  v21 = v3 * v9;
  v17 = v20 < 0.0;
  v22 = v15 + v20;
  v23 = v11 + v20;
  v24 = v7 * (float)(v3 * v9);
  if ( v17 )
    v11 = v23;
  else
    v15 = v22;
  v25 = v2 * v8;
  v26 = v24 > -0.0;
  v27 = v15 - v24;
  v28 = v11 - v24;
  v29 = v5 * (float)(v2 * v8);
  if ( v26 )
    v11 = v28;
  else
    v15 = v27;
  v30 = v4 * v6;
  v26 = v29 > -0.0;
  v31 = v15 - v29;
  v32 = v11 - v29;
  v33 = (float)(v4 * v6) * v12;
  if ( v26 )
    v11 = v32;
  else
    v15 = v31;
  v34 = v15 - v33;
  if ( v33 > -0.0 )
  {
    v34 = v15;
    v11 = v11 - v33;
  }
  v35 = v34 + v11;
  if ( v35 == 0.0 )
  {
    puts("Matrix has no inverse : singular matrix");
  }
  else
  {
    v37 = v3 * v5;
    v38 = v6 * v12;
    v39 = v5 * v8;
    v40 = v6 * v7;
    v41 = v8 * v12;
    v42 = v5 * v2;
    v43 = v4 * v5;
    v44 = v4 * v12;
    v45 = v9 * v12;
    v46 = v43 - (float)(v7 * v9);
    v47 = v44 - (float)(v2 * v7);
    v48.n64_f32[0] = (float)(v37 - v38) * (float)(1.0 / v35);
    v49 = (float)(v41 - (float)(v3 * v7)) * (float)(1.0 / v35);
    v50.n64_f32[0] = -(float)((float)(v42 - v45) * (float)(1.0 / v35));
    v51 = v46 * (float)(1.0 / v35);
    v52.n64_f32[0] = (float)(v13 - v21) * (float)(1.0 / v35);
    v53 = -(float)((float)(v30 - v16) * (float)(1.0 / v35));
    v54 = (float)(v10 - v25) * (float)(1.0 / v35);
    a2->n64_u32[0] = v48.n64_u32[0];
    a2->n64_f32[1] = -(float)((float)(v39 - v40) * (float)(1.0 / v35));
    a2[1].n64_f32[0] = v49;
    a2[2].n64_u32[0] = v50.n64_u32[0];
    a2[2].n64_f32[1] = v51;
    a2[3].n64_f32[0] = -(float)(v47 * (float)(1.0 / v35));
    a2[4].n64_u32[0] = v52.n64_u32[0];
    a2[4].n64_f32[1] = v53;
    a2[5].n64_f32[0] = v54;
    v55 = *((float *)this + 12);
    v56 = *((float *)this + 13);
    v57 = *((float *)this + 14);
    v48.n64_f32[1] = -(float)((float)(v39 - v40) * (float)(1.0 / v35));
    v50.n64_f32[1] = v51;
    v52.n64_f32[1] = v53;
    result = -(float)((float)((float)(v49 * v55) - (float)(v56 * (float)(v47 * (float)(1.0 / v35)))) + (float)(v54 * v57));
    a2[1].n64_u32[1] = 0;
    a2[3].n64_u32[1] = 0;
    a2[5].n64_u32[1] = 0;
    a2[6].n64_u64[0] = vneg_f32(vadd_f32(vadd_f32(vmul_n_f32(v48, v55), vmul_n_f32(v50, v56)), vmul_n_f32(v52, v57))).n64_u64[0];
    a2[7].n64_f32[0] = result;
    a2[7].n64_u32[1] = 1065353216;
  }
  return result;
}

