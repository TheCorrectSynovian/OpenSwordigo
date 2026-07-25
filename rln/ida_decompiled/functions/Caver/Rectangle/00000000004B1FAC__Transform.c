/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1FAC
 * Mangled: _ZN5Caver9Rectangle9TransformERKNS_7Vector2Ef
 * Demangled: Caver::Rectangle::Transform(Caver::Vector2 const&,float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FB7D0  Caver::Rectangle::Rotate(float)
 *
 * Referenced strings: 2
 *   insn=0x00000000004B1FC0 string=0x00000000004B1FC4 "`"
 *   insn=0x00000000004B1FC0 string=0x00000000001FB7D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Rectangle::Transform(Caver::Rectangle *this, float32x2_t *a2, float a3)
{
  float32x2_t result; // d0

  Caver::Rectangle::Rotate(this, a3);
  result.n64_u64[0] = vadd_f32((float32x2_t)a2->n64_u64[0], *(float32x2_t *)this).n64_u64[0];
  *(float32x2_t *)this = result;
  return result;
}

