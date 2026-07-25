/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C853C
 * Mangled: _ZN5Caver6Sprite5ScaleEfRKNS_7Vector2E
 * Demangled: Caver::Sprite::Scale(float,Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 10
 *   insn=0x00000000004C8544 string=0x00000000004C8548 "\n"
 *   insn=0x00000000004C8548 string=0x00000000004C854C "0"
 *   insn=0x00000000004C8554 string=0x00000000004C8558 "A"
 *   insn=0x00000000004C8558 string=0x00000000004C855C """
 *   insn=0x00000000004C855C string=0x00000000004C8560 ")"
 *   insn=0x00000000004C8560 string=0x00000000004C8564 "?"
 *   insn=0x00000000004C8564 string=0x00000000004C8568 "!"
 *   insn=0x00000000004C856C string=0x00000000004C8570 "A"
 *   insn=0x00000000004C8570 string=0x00000000004C8574 "A"
 *   insn=0x00000000004C8574 string=0x00000000004C8578 "J"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Sprite::Scale(__int64 this, int32x2_t a2, float32x2_t *a3)
{
  int v3; // w8
  float32x2_t *v4; // x10
  __int64 v5; // x11
  int v6; // w9
  float32x2_t v7; // d0

  v3 = *(_DWORD *)(this + 44);
  if ( v3 >= 1 )
  {
    v4 = *(float32x2_t **)(this + 56);
    v5 = *(int *)(this + 48);
    v6 = 0;
    v7.n64_u64[0] = vdup_lane_s32(a2, 0).n64_u64[0];
    do
    {
      ++v6;
      v4->n64_u64[0] = vadd_f32(
                         (float32x2_t)a3->n64_u64[0],
                         vmul_f32(v7, vsub_f32((float32x2_t)v4->n64_u64[0], (float32x2_t)a3->n64_u64[0]))).n64_u64[0];
      v4 = (float32x2_t *)((char *)v4 + v5);
    }
    while ( v6 < v3 );
  }
  return this;
}

