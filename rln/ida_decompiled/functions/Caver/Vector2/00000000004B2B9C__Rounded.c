/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2B9C
 * Mangled: _ZNK5Caver7Vector27RoundedEv
 * Demangled: Caver::Vector2::Rounded(void)
 *
 * Callers: 1
 *   0x00000000001FDA30  Caver::Vector2::Rounded(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Vector2::Rounded@<D0>(float32x2_t *this@<X0>, float32x2_t *a2@<X8>)
{
  float32x2_t result; // d0

  result.n64_u64[0] = vrnda_f32((float32x2_t)this->n64_u64[0]).n64_u64[0];
  a2->n64_u64[0] = result.n64_u64[0];
  return result;
}

