/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000005138BC
 * Mangled: _Z29PVRTMatrixQuaternionMultiplyFR15PVRTQUATERNIONfRKS_S2_
 * Demangled: PVRTMatrixQuaternionMultiplyF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 38
 *   insn=0x00000000005138C4 string=0x00000000005138C8 " "
 *   insn=0x00000000005138C8 string=0x00000000005138CC "B"
 *   insn=0x00000000005138CC string=0x00000000005138D0 "$"
 *   insn=0x00000000005138D0 string=0x00000000005138D4 "E"
 *   insn=0x00000000005138DC string=0x00000000005138E0 "'#"
 *   insn=0x00000000005138E4 string=0x00000000005138E8 "S"
 *   insn=0x00000000005138F0 string=0x00000000005138F4 "s:4"
 *   insn=0x0000000000513900 string=0x0000000000513904 "f"
 *   insn=0x0000000000513904 string=0x0000000000513908 "0"
 *   insn=0x0000000000513908 string=0x000000000051390C "T"
 *   insn=0x000000000051390C string=0x0000000000513910 "1"
 *   insn=0x0000000000513910 string=0x0000000000513914 "r"
 *   insn=0x0000000000513914 string=0x0000000000513918 "#"
 *   insn=0x0000000000513918 string=0x000000000051391C "1:2"
 *   insn=0x000000000051391C string=0x0000000000513920 "R!"
 *   insn=0x0000000000513920 string=0x0000000000513924 "B0"
 *   insn=0x0000000000513928 string=0x000000000051392C "c0"
 *   insn=0x000000000051392C string=0x0000000000513930 "!4"
 *   insn=0x0000000000513930 string=0x0000000000513934 "@( "
 *   insn=0x0000000000513934 string=0x0000000000513938 "a(!"
 *   insn=0x0000000000513940 string=0x0000000000513944 " * "
 *   insn=0x0000000000513944 string=0x0000000000513948 "a*!"
 *   insn=0x0000000000513954 string=0x0000000000513958 "`"
 *   insn=0x0000000000513960 string=0x0000000000513964 "!!"
 *   insn=0x0000000000513968 string=0x000000000051396C " ( "
 *   insn=0x000000000051396C string=0x0000000000513970 "A""
 *   insn=0x0000000000513970 string=0x0000000000513974 "!( "
 *   insn=0x0000000000513974 string=0x0000000000513978 " "
 *   insn=0x000000000051397C string=0x0000000000513980 "b\n"
 *   insn=0x0000000000513980 string=0x0000000000513984 "f"
 *   insn=0x0000000000513984 string=0x0000000000513988 "  "
 *   insn=0x0000000000513984 string=0x00000000005139B0 " "
 *   insn=0x000000000051398C string=0x0000000000513990 "a"
 *   insn=0x0000000000513994 string=0x0000000000513998 "@"
 *   insn=0x0000000000513998 string=0x000000000051399C " "
 *   insn=0x000000000051399C string=0x00000000005139A0 "`"
 *   insn=0x00000000005139B4 string=0x00000000005139B8 "  "
 *   insn=0x00000000005139B4 string=0x00000000001FD530 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x4_t __fastcall PVRTMatrixQuaternionMultiplyF(float32x4_t *a1, float32x2_t *a2, float32x2_t *a3)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  float32x2_t v7; // d4
  float32x2_t v8; // d5
  unsigned __int64 v9; // d16
  float v10; // s19
  float v11; // s6
  float v12; // s20
  float v13; // s7
  float v14; // s18
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float32x4_t result; // q0

  v3 = a2->n64_f32[0];
  v4 = a2->n64_f32[1];
  v5 = a3->n64_f32[0];
  v6 = a3->n64_f32[1];
  v7.n64_u64[0] = a2[1].n64_u64[0];
  v8.n64_u64[0] = a3[1].n64_u64[0];
  v9 = vmul_f32(v7, v8).n64_u64[0];
  v10 = vmuls_n_f32(a3->n64_f32[0], v7.n64_f32[0]) - vmuls_n_f32(a2->n64_f32[0], v8.n64_f32[0]);
  v11 = *((float *)&v9 + 1)
      - (float)((float)((float)(a2->n64_f32[0] * a3->n64_f32[0]) + (float)(v4 * v6)) + *(float *)&v9);
  a1->n128_f32[3] = v11;
  LODWORD(v9) = a2[1].n64_u32[1];
  v12 = a3[1].n64_f32[1];
  v13 = v3 * v6;
  v14 = v5 * v4;
  v15 = (float)(vmuls_n_f32(v4, v8.n64_f32[0]) - vmuls_n_f32(v6, v7.n64_f32[0]))
      + (float)((float)(v5 * *(float *)&v9) + (float)(v3 * v12));
  v16 = v10 + (float)((float)(v6 * *(float *)&v9) + (float)(v4 * v12));
  a1->n128_f32[0] = v15;
  a1->n128_f32[1] = v16;
  v17 = (float)(v13 - v14) + (float)(vmuls_n_f32(*(float *)&v9, v8.n64_f32[0]) + vmuls_n_f32(v12, v7.n64_f32[0]));
  result.n128_f32[0] = sqrtf(
                         (float)(v17 * v17)
                       + (float)((float)(v16 * v16) + (float)((float)(v11 * v11) + (float)(v15 * v15))));
  a1->n128_f32[2] = v17;
  if ( result.n128_f32[0] != 0.0 )
  {
    result = vmulq_n_f32(*a1, 1.0 / result.n128_f32[0]);
    *a1 = result;
  }
  return result;
}

