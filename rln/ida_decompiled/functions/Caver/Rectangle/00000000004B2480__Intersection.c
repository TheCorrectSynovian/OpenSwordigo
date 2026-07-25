/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2480
 * Mangled: _ZNK5Caver9Rectangle12IntersectionERKS0_
 * Demangled: Caver::Rectangle::Intersection(Caver::Rectangle const&)
 *
 * Callers: 1
 *   0x0000000000200200  Caver::Rectangle::Intersection(Caver::Rectangle const&)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004B2488 string=0x00000000004B248C """
 *   insn=0x00000000004B2498 string=0x00000000004B249C "A"
 *   insn=0x00000000004B249C string=0x00000000004B24A0 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Rectangle::Intersection@<D0>(
        int8x8_t *this@<X0>,
        float32x2_t *a2@<X1>,
        float32x2_t *a3@<X8>)
{
  int8x8_t v3; // d2
  float32x2_t v4; // d4
  int8x8_t v5; // d0
  float32x2_t result; // d0

  v3.n64_u64[0] = vadd_f32((float32x2_t)this->n64_u64[0], this[1]).n64_u64[0];
  v4.n64_u64[0] = vbsl_s8(
                    vcgt_f32((float32x2_t)a2->n64_u64[0], (float32x2_t)this->n64_u64[0]),
                    (int8x8_t)a2->n64_u64[0],
                    (int8x8_t)this->n64_u64[0]).n64_u64[0];
  v5.n64_u64[0] = vadd_f32((float32x2_t)a2->n64_u64[0], a2[1]).n64_u64[0];
  result.n64_u64[0] = vsub_f32(vbsl_s8(vcgt_f32(v5, v3), v3, v5), v4).n64_u64[0];
  a3->n64_u64[0] = v4.n64_u64[0];
  a3[1].n64_u64[0] = result.n64_u64[0];
  return result;
}

