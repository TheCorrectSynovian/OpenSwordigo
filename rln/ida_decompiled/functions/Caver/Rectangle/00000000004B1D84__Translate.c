/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1D84
 * Mangled: _ZN5Caver9Rectangle9TranslateERKNS_7Vector2E
 * Demangled: Caver::Rectangle::Translate(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F9470  Caver::Rectangle::Translate(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Rectangle::Translate(float32x2_t *a1, float32x2_t *a2)
{
  float32x2_t result; // d0

  result.n64_u64[0] = vadd_f32((float32x2_t)a2->n64_u64[0], (float32x2_t)a1->n64_u64[0]).n64_u64[0];
  a1->n64_u64[0] = result.n64_u64[0];
  return result;
}

