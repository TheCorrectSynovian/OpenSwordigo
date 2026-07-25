/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2CAC
 * Mangled: _ZN5Caver7Vector49NormalizeEv
 * Demangled: Caver::Vector4::Normalize(void)
 *
 * Callers: 1
 *   0x00000000001FCAE0  Caver::Vector4::Normalize(void)
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 18
 *   insn=0x00000000004B2CB8 string=0x00000000004B2CBC "`"
 *   insn=0x00000000004B2CBC string=0x00000000004B2CC0 "b"
 *   insn=0x00000000004B2CC4 string=0x00000000004B2CC8 "!!"
 *   insn=0x00000000004B2CC8 string=0x00000000004B2CCC "B""
 *   insn=0x00000000004B2CD4 string=0x00000000004B2CD8 "a#"
 *   insn=0x00000000004B2CDC string=0x00000000004B2CE0 " "
 *   insn=0x00000000004B2CE4 string=0x00000000004B2CE8 "g"
 *   insn=0x00000000004B2CE8 string=0x00000000004B2CEC " "
 *   insn=0x00000000004B2CF0 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004B2CFC string=0x00000000004B2D00 "m"
 *   insn=0x00000000004B2D00 string=0x00000000004B2D04 "b"
 *   insn=0x00000000004B2D04 string=0x00000000004B2D08 "c"
 *   insn=0x00000000004B2D0C string=0x00000000004B2D10 " "
 *   insn=0x00000000004B2D10 string=0x00000000004B2D14 "A"
 *   insn=0x00000000004B2D18 string=0x00000000004B2D1C "a"
 *   insn=0x00000000004B2D1C string=0x00000000004B2D20 "b\n"
 *   insn=0x00000000004B2D28 string=0x00000000004B2D40 "`"
 *   insn=0x00000000004B2D34 string=0x00000000004B2D38 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t *__fastcall Caver::Vector4::Normalize(float32x2_t *this)
{
  float v1; // s0
  float v2; // s4
  float v3; // s0
  float v4; // s2
  float v5; // s0

  v1 = sqrtf(
         (float)((float)((float)(this->n64_f32[0] * this->n64_f32[0]) + (float)(this->n64_f32[1] * this->n64_f32[1]))
               + (float)(this[1].n64_f32[0] * this[1].n64_f32[0]))
       + (float)(this[1].n64_f32[1] * this[1].n64_f32[1]));
  if ( v1 <= 0.0001 )
  {
    this[1].n64_u32[0] = 0;
    this->n64_u64[0] = 1065353216;
    v5 = 0.0;
  }
  else
  {
    v2 = this[1].n64_f32[1];
    v3 = 1.0 / v1;
    v4 = v3 * this[1].n64_f32[0];
    this->n64_u64[0] = vmul_n_f32((float32x2_t)this->n64_u64[0], v3).n64_u64[0];
    this[1].n64_f32[0] = v4;
    v5 = v3 * v2;
  }
  this[1].n64_f32[1] = v5;
  return this;
}

