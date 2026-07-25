/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2074
 * Mangled: _ZNK5Caver9Rectangle19TranslatedRectangleERKNS_7Vector2E
 * Demangled: Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F9C60  Caver::Rectangle::TranslatedRectangle(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004B2074 string=0x00000000004B2078 "!"
 *   insn=0x00000000004B2078 string=0x00000000004B207C "\t"
 *   insn=0x00000000004B2084 string=0x00000000004B2088 "\t"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Rectangle::TranslatedRectangle@<D0>(
        float32x2_t *a1@<X0>,
        float32x2_t *a2@<X1>,
        float32x2_t *a3@<X8>)
{
  unsigned __int64 v3; // x9
  float32x2_t result; // d0

  v3 = a1[1].n64_u64[0];
  result.n64_u64[0] = vadd_f32((float32x2_t)a1->n64_u64[0], (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  a3->n64_u64[0] = result.n64_u64[0];
  a3[1].n64_u64[0] = v3;
  return result;
}

