/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF10C
 * Mangled: _ZN5Caver7Matrix412PreTranslateERKNS_7Vector3E
 * Demangled: Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x0000000000200640  Caver::Matrix4::PreTranslate(Caver::Vector3 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000004AF10C string=0x00000000004AF110 "!@"
 *   insn=0x00000000004AF13C string=0x00000000004AF140 "##"
 *   insn=0x00000000004AF140 string=0x00000000004AF144 "%%"
 *   insn=0x00000000004AF144 string=0x00000000004AF148 "''"
 *   insn=0x00000000004AF148 string=0x00000000004AF14C "!1"
 *   insn=0x00000000004AF150 string=0x00000000004AF154 "R"
 *   insn=0x00000000004AF154 string=0x00000000004AF158 "s"
 *   insn=0x00000000004AF15C string=0x00000000004AF160 " "
 *   insn=0x00000000004AF160 string=0x00000000004AF164 "b(""
 *   insn=0x00000000004AF16C string=0x00000000004AF170 "!(0"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Matrix4::PreTranslate(float32x2_t *a1, float32x2_t *a2)
{
  float v2; // s1
  float v3; // s3
  float v4; // s5
  float v5; // s7
  float v6; // s17
  float32x2_t v7; // d21
  unsigned __int64 v8; // d19
  unsigned __int64 v9; // d20
  float32x2_t result; // d0
  float v11; // s2
  float v12; // s3
  float v13; // s4
  float v14; // s1

  v2 = a2[1].n64_f32[0];
  v3 = a1[1].n64_f32[1];
  v4 = a1[3].n64_f32[1];
  v5 = a1[5].n64_f32[1];
  v6 = a1[7].n64_f32[1];
  v7.n64_u64[0] = vmul_n_f32((float32x2_t)a2->n64_u64[0], v3).n64_u64[0];
  v8 = vadd_f32(a1[2], vmul_n_f32((float32x2_t)a2->n64_u64[0], v4)).n64_u64[0];
  v9 = vadd_f32(a1[4], vmul_n_f32((float32x2_t)a2->n64_u64[0], v5)).n64_u64[0];
  result.n64_u64[0] = vadd_f32(a1[6], vmul_n_f32((float32x2_t)a2->n64_u64[0], v6)).n64_u64[0];
  v11 = (float)(v2 * v3) + a1[1].n64_f32[0];
  v12 = (float)(v2 * v4) + a1[3].n64_f32[0];
  v13 = (float)(v2 * v5) + a1[5].n64_f32[0];
  v14 = (float)(v2 * v6) + a1[7].n64_f32[0];
  a1->n64_u64[0] = vadd_f32((float32x2_t)a1->n64_u64[0], v7).n64_u64[0];
  a1[2].n64_u64[0] = v8;
  a1[4].n64_u64[0] = v9;
  a1[6].n64_u64[0] = result.n64_u64[0];
  a1[1].n64_f32[0] = v11;
  a1[3].n64_f32[0] = v12;
  a1[5].n64_f32[0] = v13;
  a1[7].n64_f32[0] = v14;
  return result;
}

