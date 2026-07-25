/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4BB0
 * Mangled: _ZNK5Caver6Circle6BoundsEv
 * Demangled: Caver::Circle::Bounds(void)
 *
 * Callers: 1
 *   0x0000000000201B90  Caver::Circle::Bounds(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004D4BBC string=0x00000000004D4BC0 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::Circle::Bounds@<S0>(float32x2_t *this@<X0>, float32x2_t *a2@<X8>, double a3@<D0>)
{
  float32x2_t v3; // d2

  LODWORD(a3) = this[1].n64_u32[0];
  v3.n64_u64[0] = vdup_lane_s32(*(int32x2_t *)&a3, 0).n64_u64[0];
  *(float *)&a3 = *(float *)&a3 + *(float *)&a3;
  a2->n64_u64[0] = vsub_f32((float32x2_t)this->n64_u64[0], v3).n64_u64[0];
  a2[1].n64_u32[0] = LODWORD(a3);
  a2[1].n64_u32[1] = LODWORD(a3);
  return *(float *)&a3;
}

