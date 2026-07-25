/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2BC0
 * Mangled: _ZN5Caver7Vector39NormalizeEv
 * Demangled: Caver::Vector3::Normalize(void)
 *
 * Callers: 1
 *   0x0000000000200330  Caver::Vector3::Normalize(void)
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 17
 *   insn=0x00000000004B2BCC string=0x00000000004B2BD0 "`"
 *   insn=0x00000000004B2BD0 string=0x00000000004B2BD4 "b\n@"
 *   insn=0x00000000004B2BD8 string=0x00000000004B2BDC "!!"
 *   insn=0x00000000004B2BE0 string=0x00000000004B2BE4 "A""
 *   insn=0x00000000004B2BE8 string=0x00000000004B2BEC " "
 *   insn=0x00000000004B2BF0 string=0x00000000004B2BF4 "g"
 *   insn=0x00000000004B2BF4 string=0x00000000004B2BF8 " "
 *   insn=0x00000000004B2BF8 string=0x00000000004B2BFC "M*"
 *   insn=0x00000000004B2BFC string=0x00000000001FD530 "0'"
 *   insn=0x00000000004B2C08 string=0x00000000004B2C0C "-"
 *   insn=0x00000000004B2C0C string=0x00000000004B2C10 "a"
 *   insn=0x00000000004B2C10 string=0x00000000004B2C14 "c\n@"
 *   insn=0x00000000004B2C18 string=0x00000000004B2C1C "@"
 *   insn=0x00000000004B2C1C string=0x00000000004B2C20 "!"
 *   insn=0x00000000004B2C20 string=0x00000000004B2C24 "a"
 *   insn=0x00000000004B2C2C string=0x00000000004B2C40 "`\n"
 *   insn=0x00000000004B2C34 string=0x00000000004B2C38 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t *__fastcall Caver::Vector3::Normalize(float32x2_t *this)
{
  float v1; // s0
  float v2; // s3
  float v3; // s0
  float v4; // s0

  v1 = sqrtf(
         (float)((float)(this->n64_f32[0] * this->n64_f32[0]) + (float)(this->n64_f32[1] * this->n64_f32[1]))
       + (float)(this[1].n64_f32[0] * this[1].n64_f32[0]));
  if ( v1 <= 0.0001 )
  {
    this->n64_u64[0] = 1065353216;
    v4 = 0.0;
  }
  else
  {
    v2 = this[1].n64_f32[0];
    v3 = 1.0 / v1;
    this->n64_u64[0] = vmul_n_f32((float32x2_t)this->n64_u64[0], v3).n64_u64[0];
    v4 = v3 * v2;
  }
  this[1].n64_f32[0] = v4;
  return this;
}

