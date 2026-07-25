/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004CC19C
 * Mangled: _ZN5Caver7Texture54ConvertSubtextureCoordinatesToParentTextureCoordinatesERKNS_7Vector2E
 * Demangled: Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F9480  Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004CC1A8 string=0x00000000004CC1AC "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __usercall Caver::Texture::ConvertSubtextureCoordinatesToParentTextureCoordinates@<D0>(
        Caver::Texture *this@<X0>,
        float32x2_t *a2@<X1>,
        float32x2_t *a3@<X8>)
{
  float32x2_t result; // d0

  result.n64_u64[0] = vadd_f32(
                        *(float32x2_t *)((char *)this + 92),
                        vmul_f32((float32x2_t)a2->n64_u64[0], *(float32x2_t *)((char *)this + 100))).n64_u64[0];
  a3->n64_u64[0] = result.n64_u64[0];
  return result;
}

