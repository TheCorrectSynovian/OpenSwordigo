/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C8474
 * Mangled: _ZN5Caver6Sprite9TranslateERKNS_7Vector2E
 * Demangled: Caver::Sprite::Translate(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F9920  Caver::Sprite::Translate(Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000001F9470  Caver::Rectangle::Translate(Caver::Vector2 const&)
 *
 * Referenced strings: 7
 *   insn=0x00000000004C848C string=0x00000000001F9470 "0'"
 *   insn=0x00000000004C84A4 string=0x00000000004C84A8 " "
 *   insn=0x00000000004C84A8 string=0x00000000004C84AC "a"
 *   insn=0x00000000004C84AC string=0x00000000004C84B0 "k"
 *   insn=0x00000000004C84B8 string=0x00000000004C84BC " "
 *   insn=0x00000000004C84BC string=0x00000000004C84C0 ")"
 *   insn=0x00000000004C84C0 string=0x00000000004C84C4 "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Sprite::Translate(Caver::Sprite *this, const Caver::Vector2 *a2)
{
  float32x2_t result; // d0
  int v5; // w8
  float32x2_t *v6; // x9
  __int64 v7; // x10
  int v8; // w11

  Caver::Rectangle::Translate((Caver::Sprite *)((char *)this + 8), a2);
  v5 = *((_DWORD *)this + 11);
  if ( v5 >= 1 )
  {
    v6 = (float32x2_t *)*((_QWORD *)this + 7);
    v7 = *((int *)this + 12);
    v8 = 0;
    do
    {
      ++v8;
      result.n64_u64[0] = vadd_f32((float32x2_t)v6->n64_u64[0], *(float32x2_t *)a2).n64_u64[0];
      v6->n64_u64[0] = result.n64_u64[0];
      v6 = (float32x2_t *)((char *)v6 + v7);
    }
    while ( v8 < v5 );
  }
  return result;
}

