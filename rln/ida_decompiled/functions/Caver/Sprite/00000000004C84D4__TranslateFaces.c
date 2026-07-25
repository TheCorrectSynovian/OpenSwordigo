/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C84D4
 * Mangled: _ZN5Caver6Sprite14TranslateFacesEiiRKNS_7Vector2E
 * Demangled: Caver::Sprite::TranslateFaces(int,int,Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x0000000000201BA0  Caver::Sprite::TranslateFaces(int,int,Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 20
 *   insn=0x00000000004C84D4 string=0x00000000004C84D8 ""
 *   insn=0x00000000004C84D8 string=0x00000000004C84DC "0"
 *   insn=0x00000000004C84DC string=0x00000000004C84E0 "\t"
 *   insn=0x00000000004C84E0 string=0x00000000004C84E4 "*|@"
 *   insn=0x00000000004C84E4 string=0x00000000004C84E8 "J}"
 *   insn=0x00000000004C84E8 string=0x00000000004C84EC "J"
 *   insn=0x00000000004C84EC string=0x00000000004C84F0 ")"
 *   insn=0x00000000004C84F0 string=0x00000000004C84F4 " "
 *   insn=0x00000000004C84F4 string=0x00000000004C84F8 "a"
 *   insn=0x00000000004C84F8 string=0x00000000004C84FC "B"
 *   insn=0x00000000004C8500 string=0x00000000004C8504 " "
 *   insn=0x00000000004C8504 string=0x00000000004C8508 ")"
 *   insn=0x00000000004C8508 string=0x00000000004C850C " "
 *   insn=0x00000000004C850C string=0x00000000004C8510 "a"
 *   insn=0x00000000004C8514 string=0x00000000004C8518 " "
 *   insn=0x00000000004C8518 string=0x00000000004C851C ")"
 *   insn=0x00000000004C851C string=0x00000000004C8520 " "
 *   insn=0x00000000004C8520 string=0x00000000004C8524 "a"
 *   insn=0x00000000004C8528 string=0x00000000004C852C " "
 *   insn=0x00000000004C852C string=0x00000000004C8530 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float32x2_t __fastcall Caver::Sprite::TranslateFaces(Caver::Sprite *this, int a2, int a3, float32x2_t *a4)
{
  __int64 v4; // x8
  float32x2_t *v5; // x9
  float32x2_t *v6; // x9
  float32x2_t *v7; // x9
  float32x2_t result; // d0

  if ( a3 >= 1 )
  {
    v4 = *((int *)this + 12);
    v5 = (float32x2_t *)(*((_QWORD *)this + 7) + 3 * a2 * v4);
    do
    {
      --a3;
      v5->n64_u64[0] = vadd_f32((float32x2_t)v5->n64_u64[0], (float32x2_t)a4->n64_u64[0]).n64_u64[0];
      v6 = (float32x2_t *)((char *)v5 + v4);
      v6->n64_u64[0] = vadd_f32((float32x2_t)v6->n64_u64[0], (float32x2_t)a4->n64_u64[0]).n64_u64[0];
      v7 = (float32x2_t *)((char *)v6 + v4);
      result.n64_u64[0] = vadd_f32((float32x2_t)v7->n64_u64[0], (float32x2_t)a4->n64_u64[0]).n64_u64[0];
      v7->n64_u64[0] = result.n64_u64[0];
      v5 = (float32x2_t *)((char *)v7 + v4);
    }
    while ( a3 );
  }
  return result;
}

