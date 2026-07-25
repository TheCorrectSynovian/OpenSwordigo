/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C87A4
 * Mangled: _ZN5Caver6Sprite25TexCoordForVertexLocationERKNS_7Vector2E
 * Demangled: Caver::Sprite::TexCoordForVertexLocation(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004C87A4 string=0x00000000004C87A8 " "
 *   insn=0x00000000004C87AC string=0x00000000004C87B0 ""AF"
 *   insn=0x00000000004C87B0 string=0x00000000004C87B4 "$"
 *   insn=0x00000000004C87BC string=0x00000000004C87C0 "@"
 *   insn=0x00000000004C87C8 string=0x00000000004C87CC "  "
 *   insn=0x00000000004C87DC string=0x00000000004C87E0 "M"
 *   insn=0x00000000004C87E8 string=0x00000000004C87EC "(  "
 *   insn=0x00000000004C87F8 string=0x00000000004C87FC "   "
 *   insn=0x00000000004C87FC string=0x00000000004C8800 "M"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t *__usercall Caver::Sprite::TexCoordForVertexLocation@<X0>(
        float32x2_t *this@<X0>,
        float32x2_t *a2@<X1>,
        __int64 a3@<X8>)
{
  float v3; // s1
  unsigned __int64 v4; // d0

  v3 = 0.0;
  v4 = vadd_f32(
         *(float32x2_t *)(this->n64_u64[0] + 92),
         vdiv_f32(
           vmul_f32(*(float32x2_t *)(this->n64_u64[0] + 100), vsub_f32((float32x2_t)a2->n64_u64[0], this[1])),
           this[2])).n64_u64[0];
  *(_QWORD *)a3 = v4;
  if ( *(float *)&v4 < 0.0 || (v3 = 1.0, *(float *)&v4 > 1.0) )
    *(float *)a3 = v3;
  LODWORD(v4) = 0;
  if ( *((float *)&v4 + 1) < 0.0 || (LODWORD(v4) = 1.0, *((float *)&v4 + 1) > 1.0) )
    *(_DWORD *)(a3 + 4) = v4;
  return this;
}

