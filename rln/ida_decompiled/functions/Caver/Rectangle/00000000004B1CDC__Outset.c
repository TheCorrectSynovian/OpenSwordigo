/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1CDC
 * Mangled: _ZN5Caver9Rectangle6OutsetEf
 * Demangled: Caver::Rectangle::Outset(float)
 *
 * Callers: 1
 *   0x00000000001F5260  Caver::Rectangle::Outset(float)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004B1CE8 string=0x00000000004B1CEC "A"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Rectangle::Outset(float32x2_t *this, double a2)
{
  float32x2_t v2; // d1
  float32x2_t result; // d0

  v2.n64_u64[0] = vdup_lane_s32(*(int32x2_t *)&a2, 0).n64_u64[0];
  *(float *)&a2 = *(float *)&a2 + *(float *)&a2;
  result.n64_u64[0] = vadd_f32(vdup_lane_s32(*(int32x2_t *)&a2, 0), this[1]).n64_u64[0];
  this->n64_u64[0] = vsub_f32((float32x2_t)this->n64_u64[0], v2).n64_u64[0];
  this[1].n64_u64[0] = result.n64_u64[0];
  return result;
}

