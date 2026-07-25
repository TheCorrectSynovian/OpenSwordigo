/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1D64
 * Mangled: _ZNK5Caver9Rectangle21RectangleByOutsettingEf
 * Demangled: Caver::Rectangle::RectangleByOutsetting(float)
 *
 * Callers: 1
 *   0x00000000001F3C90  Caver::Rectangle::RectangleByOutsetting(float)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004B1D70 string=0x00000000004B1D74 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Rectangle::RectangleByOutsetting@<D0>(
        float32x2_t *this@<X0>,
        double a2@<D0>,
        float32x2_t *a3@<X8>)
{
  float32x2_t v3; // d3
  float32x2_t result; // d0

  v3.n64_u64[0] = vdup_lane_s32(*(int32x2_t *)&a2, 0).n64_u64[0];
  *(float *)&a2 = *(float *)&a2 + *(float *)&a2;
  result.n64_u64[0] = vadd_f32(vdup_lane_s32(*(int32x2_t *)&a2, 0), this[1]).n64_u64[0];
  a3->n64_u64[0] = vsub_f32((float32x2_t)this->n64_u64[0], v3).n64_u64[0];
  a3[1].n64_u64[0] = result.n64_u64[0];
  return result;
}

