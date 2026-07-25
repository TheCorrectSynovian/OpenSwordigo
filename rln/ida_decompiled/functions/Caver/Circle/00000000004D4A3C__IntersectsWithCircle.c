/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4A3C
 * Mangled: _ZNK5Caver6Circle20IntersectsWithCircleERKS0_
 * Demangled: Caver::Circle::IntersectsWithCircle(Caver::Circle const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 7
 *   insn=0x00000000004D4A50 string=0x00000000004D4A54 "a"
 *   insn=0x00000000004D4A60 string=0x00000000004D4A64 " "
 *   insn=0x00000000004D4A68 string=0x00000000004D4A6C "g"
 *   insn=0x00000000004D4A6C string=0x00000000004D4A70 " "
 *   insn=0x00000000004D4A74 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004D4A78 string=0x00000000004D4A7C "b\n@"
 *   insn=0x00000000004D4A80 string=0x00000000004D4A84 "!(""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Circle::IntersectsWithCircle(float32x2_t *this, float32x2_t *a2)
{
  float32x2_t v2; // d0

  v2.n64_u64[0] = vsub_f32((float32x2_t)this->n64_u64[0], (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  return sqrtf(vaddv_f32(vmul_f32(v2, v2))) <= (float)(this[1].n64_f32[0] + a2[1].n64_f32[0]);
}

