/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1CBC
 * Mangled: _ZN5Caver9Rectangle5InsetEf
 * Demangled: Caver::Rectangle::Inset(float)
 *
 * Callers: 1
 *   0x0000000000201030  Caver::Rectangle::Inset(float)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004B1CC8 string=0x00000000004B1CCC "!"
 *   insn=0x00000000004B1CCC string=0x00000000004B1CD0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Rectangle::Inset(float32x2_t *this, double a2)
{
  float32x2_t v2; // d1
  float32x2_t result; // d0

  v2.n64_u64[0] = vdup_lane_s32(*(int32x2_t *)&a2, 0).n64_u64[0];
  *(float *)&a2 = *(float *)&a2 + *(float *)&a2;
  result.n64_u64[0] = vsub_f32(this[1], vdup_lane_s32(*(int32x2_t *)&a2, 0)).n64_u64[0];
  this->n64_u64[0] = vadd_f32(v2, (float32x2_t)this->n64_u64[0]).n64_u64[0];
  this[1].n64_u64[0] = result.n64_u64[0];
  return result;
}

