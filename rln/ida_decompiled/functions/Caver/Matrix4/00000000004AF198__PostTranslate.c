/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AF198
 * Mangled: _ZN5Caver7Matrix413PostTranslateEfff
 * Demangled: Caver::Matrix4::PostTranslate(float,float,float)
 *
 * Callers: 1
 *   0x00000000001FAB60  Caver::Matrix4::PostTranslate(float,float,float)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004AF19C string=0x00000000004AF1A0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x4_t __fastcall Caver::Matrix4::PostTranslate(float32x4_t *this, float a2, float a3, float a4)
{
  float32x4_t result; // q0

  result = vaddq_f32(
             this[3],
             vaddq_f32(vaddq_f32(vmulq_n_f32(*this, a2), vmulq_n_f32(this[1], a3)), vmulq_n_f32(this[2], a4)));
  this[3] = result;
  return result;
}

