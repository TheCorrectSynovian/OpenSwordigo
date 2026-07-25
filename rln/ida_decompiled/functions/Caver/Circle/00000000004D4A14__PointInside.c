/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4A14
 * Mangled: _ZNK5Caver6Circle11PointInsideERKNS_7Vector2E
 * Demangled: Caver::Circle::PointInside(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004D4A14 string=0x00000000004D4A18 "!"
 *   insn=0x00000000004D4A28 string=0x00000000004D4A2C "A""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Circle::PointInside(float32x2_t *this, float32x2_t *a2)
{
  float32x2_t v2; // d0

  v2.n64_u64[0] = vsub_f32((float32x2_t)this->n64_u64[0], (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  return vaddv_f32(vmul_f32(v2, v2)) <= (float)(this[1].n64_f32[0] * this[1].n64_f32[0]);
}

