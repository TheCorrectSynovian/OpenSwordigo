/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF084
 * Mangled: _ZN5Caver7Matrix412PreTranslateEfff
 * Demangled: Caver::Matrix4::PreTranslate(float,float,float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 6
 *   insn=0x00000000004AF088 string=0x00000000004AF08C "@E-"
 *   insn=0x00000000004AF094 string=0x00000000004AF098 " "
 *   insn=0x00000000004AF0BC string=0x00000000004AF0C0 "B\n""
 *   insn=0x00000000004AF0C4 string=0x00000000004AF0C8 "a"
 *   insn=0x00000000004AF0D0 string=0x00000000004AF0D4 "@"
 *   insn=0x00000000004AF0E0 string=0x00000000004AF0E4 "B(1"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Matrix4::PreTranslate(float32x2_t *this, float32x2_t a2, float a3, float a4)
{
  float v4; // s4
  float v5; // s6
  float v6; // s16
  float v7; // s18
  float32x2_t v8; // d1
  unsigned __int64 v9; // d19
  unsigned __int64 v10; // d20
  float32x2_t result; // d0
  float v12; // s3
  float v13; // s4
  float v14; // s5
  float v15; // s2

  v4 = this[1].n64_f32[1];
  v5 = this[3].n64_f32[1];
  v6 = this[5].n64_f32[1];
  v7 = this[7].n64_f32[1];
  a2.n64_f32[1] = a3;
  v8.n64_u64[0] = vmul_n_f32(a2, v4).n64_u64[0];
  v9 = vadd_f32(this[2], vmul_n_f32(a2, v5)).n64_u64[0];
  v10 = vadd_f32(this[4], vmul_n_f32(a2, v6)).n64_u64[0];
  result.n64_u64[0] = vadd_f32(this[6], vmul_n_f32(a2, v7)).n64_u64[0];
  v12 = (float)(v4 * a4) + this[1].n64_f32[0];
  v13 = (float)(v5 * a4) + this[3].n64_f32[0];
  v14 = (float)(v6 * a4) + this[5].n64_f32[0];
  v15 = (float)(v7 * a4) + this[7].n64_f32[0];
  this->n64_u64[0] = vadd_f32((float32x2_t)this->n64_u64[0], v8).n64_u64[0];
  this[2].n64_u64[0] = v9;
  this[4].n64_u64[0] = v10;
  this[6].n64_u64[0] = result.n64_u64[0];
  this[1].n64_f32[0] = v12;
  this[3].n64_f32[0] = v13;
  this[5].n64_f32[0] = v14;
  this[7].n64_f32[0] = v15;
  return result;
}

