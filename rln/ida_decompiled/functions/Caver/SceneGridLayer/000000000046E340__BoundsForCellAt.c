/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000046E340
 * Mangled: _ZN5Caver14SceneGridLayer15BoundsForCellAtEii
 * Demangled: Caver::SceneGridLayer::BoundsForCellAt(int,int)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000046E344 string=0x000000000046E348 """
 *   insn=0x000000000046E348 string=0x000000000046E34C "B"
 *   insn=0x000000000046E34C string=0x000000000046E350 "B"
 *   insn=0x000000000046E354 string=0x000000000046E358 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::SceneGridLayer::BoundsForCellAt@<D0>(
        float32x2_t *this@<X0>,
        unsigned int a2@<W1>,
        unsigned int a3@<W2>,
        float32x2_t *a4@<X8>)
{
  float32x2_t result; // d0

  result.n64_u64[0] = this[3].n64_u64[0];
  a4->n64_u64[0] = vadd_f32(this[1], vmul_f32(result, vcvt_f32_s32((int32x2_t)__PAIR64__(a3, a2)))).n64_u64[0];
  a4[1].n64_u64[0] = result.n64_u64[0];
  return result;
}

