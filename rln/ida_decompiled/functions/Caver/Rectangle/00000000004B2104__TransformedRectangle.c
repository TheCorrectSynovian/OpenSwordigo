/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2104
 * Mangled: _ZNK5Caver9Rectangle20TransformedRectangleERKNS_7Vector2Ef
 * Demangled: Caver::Rectangle::TransformedRectangle(Caver::Vector2 const&,float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB7D0  Caver::Rectangle::Rotate(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000004B2124 string=0x00000000004B2128 "`"
 *   insn=0x00000000004B2124 string=0x00000000001FB7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Rectangle::TransformedRectangle@<D0>(
        Caver::Rectangle *this@<X0>,
        float32x2_t *a2@<X1>,
        float a3@<S0>,
        Caver::Rectangle *a4@<X8>)
{
  float32x2_t result; // d0

  *(_OWORD *)a4 = *(_OWORD *)this;
  Caver::Rectangle::Rotate(a4, a3);
  result.n64_u64[0] = vadd_f32((float32x2_t)a2->n64_u64[0], *(float32x2_t *)a4).n64_u64[0];
  *(float32x2_t *)a4 = result;
  return result;
}

