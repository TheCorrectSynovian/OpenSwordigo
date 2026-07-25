/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ADF7C
 * Mangled: _ZNK5Caver11LineSegment16IntersectsCircleERKNS_6CircleEPNS_7Vector2ES5_
 * Demangled: Caver::LineSegment::IntersectsCircle(Caver::Circle const&,Caver::Vector2 *,Caver::Vector2 *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 35
 *   insn=0x00000000004ADF9C string=0x00000000004ADFA0 """
 *   insn=0x00000000004ADFA0 string=0x00000000004ADFA4 "#@"
 *   insn=0x00000000004ADFA8 string=0x00000000004ADFAC "!"
 *   insn=0x00000000004ADFB0 string=0x00000000004ADFB4 "b#"
 *   insn=0x00000000004ADFB4 string=0x00000000004ADFB8 "#"
 *   insn=0x00000000004ADFB8 string=0x00000000004ADFBC "c"
 *   insn=0x00000000004ADFC0 string=0x00000000004ADFC4 "!"
 *   insn=0x00000000004ADFCC string=0x00000000004ADFD0 "\t"
 *   insn=0x00000000004ADFD0 string=0x00000000004ADFD4 "+"
 *   insn=0x00000000004ADFD8 string=0x00000000004ADFDC "j"
 *   insn=0x00000000004ADFDC string=0x00000000004ADFE0 "a\t$"
 *   insn=0x00000000004ADFE0 string=0x00000000004ADFE4 "  "
 *   insn=0x00000000004ADFE4 string=0x00000000004ADFE8 "A\t*"
 *   insn=0x00000000004ADFE8 string=0x00000000004ADFEC "(( "
 *   insn=0x00000000004AE004 string=0x00000000004AE008 "LA!"
 *   insn=0x00000000004AE008 string=0x00000000004AE00C "g"
 *   insn=0x00000000004AE00C string=0x00000000004AE018 "H"
 *   insn=0x00000000004AE010 string=0x00000000004AE014 "G="
 *   insn=0x00000000004AE014 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004AE018 string=0x0000000000597218 "r"
 *   insn=0x00000000004AE020 string=0x00000000004AE024 "l)+"
 *   insn=0x00000000004AE024 string=0x00000000004AE028 ""
 *   insn=0x00000000004AE028 string=0x00000000004AE02C "`!!"
 *   insn=0x00000000004AE02C string=0x00000000004AE030 "L"
 *   insn=0x00000000004AE038 string=0x00000000004AE03C "g"
 *   insn=0x00000000004AE040 string=0x00000000004AE044 ";="
 *   insn=0x00000000004AE050 string=0x00000000004AE054 "%"
 *   insn=0x00000000004AE080 string=0x00000000004AE084 "ci#"
 *   insn=0x00000000004AE084 string=0x00000000004AE088 "B"
 *   insn=0x00000000004AE088 string=0x00000000004AE08C "B"
 *   insn=0x00000000004AE08C string=0x00000000004AE090 "!"
 *   insn=0x00000000004AE0A4 string=0x00000000004AE0A8 "B"
 *   insn=0x00000000004AE0A8 string=0x00000000004AE0AC "@"
 *   insn=0x00000000004AE0AC string=0x00000000004AE0B0 " "
 *   insn=0x00000000004AE0B0 string=0x00000000004AE0B4 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegment::IntersectsCircle(
        float32x2_t *a1,
        float32x2_t *a2,
        float32x2_t *a3,
        float32x2_t *a4)
{
  float32x2_t v4; // d1
  float32x2_t v5; // d0
  float v6; // s11
  float v7; // s10
  float v8; // s8
  float v9; // s12
  float v10; // s11
  float v11; // s0

  v4.n64_u64[0] = vsub_f32(a1[1], (float32x2_t)a1->n64_u64[0]).n64_u64[0];
  v5.n64_u64[0] = vsub_f32((float32x2_t)a1->n64_u64[0], (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  v6 = vaddv_f32(vmul_f32(v4, v4));
  v7 = vaddv_f32(vmul_f32(vadd_f32(v4, v4), v5));
  v8 = (float)(v7 * v7)
     + (float)((float)(v6 * -4.0) * (float)(vaddv_f32(vmul_f32(v5, v5)) - (float)(a2[1].n64_f32[0] * a2[1].n64_f32[0])));
  if ( v8 < 0.0001 )
    return 0;
  v9 = v6 + v6;
  v10 = (float)((float)-v7 - sqrtf(v8)) / (float)(v6 + v6);
  if ( v10 > 0.9999 )
    return 0;
  v11 = (float)(sqrtf(v8) - v7) / v9;
  if ( v11 < 0.0001 )
    return 0;
  if ( a3 )
    a3->n64_u64[0] = vadd_f32(
                       (float32x2_t)a1->n64_u64[0],
                       vmul_n_f32(vsub_f32(a1[1], (float32x2_t)a1->n64_u64[0]), fmaxf(v10, 0.0))).n64_u64[0];
  if ( a4 )
    a4->n64_u64[0] = vadd_f32(
                       (float32x2_t)a1->n64_u64[0],
                       vmul_n_f32(vsub_f32(a1[1], (float32x2_t)a1->n64_u64[0]), fminf(v11, 1.0))).n64_u64[0];
  return 1;
}

