/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ADE64
 * Mangled: _ZNK5Caver11LineSegment16IntersectsCircleERKNS_6CircleEPfS4_
 * Demangled: Caver::LineSegment::IntersectsCircle(Caver::Circle const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000001FF0F0  Caver::LineSegment::IntersectsCircle(Caver::Circle const&,float *,float *)
 *
 * Callees: 1
 *   0x00000000001FD530  .sqrtf
 *
 * Referenced strings: 26
 *   insn=0x00000000004ADE7C string=0x00000000004ADE80 """
 *   insn=0x00000000004ADE80 string=0x00000000004ADE84 "#@"
 *   insn=0x00000000004ADE88 string=0x00000000004ADE8C "!"
 *   insn=0x00000000004ADE90 string=0x00000000004ADE94 "b#"
 *   insn=0x00000000004ADE94 string=0x00000000004ADE98 "#"
 *   insn=0x00000000004ADE98 string=0x00000000004ADE9C "c"
 *   insn=0x00000000004ADEA0 string=0x00000000004ADEA4 "!"
 *   insn=0x00000000004ADEAC string=0x00000000004ADEB0 "\t"
 *   insn=0x00000000004ADEB0 string=0x00000000004ADEB4 "+"
 *   insn=0x00000000004ADEB8 string=0x00000000004ADEBC "j"
 *   insn=0x00000000004ADEBC string=0x00000000004ADEC0 "a\t$"
 *   insn=0x00000000004ADEC0 string=0x00000000004ADEC4 "  "
 *   insn=0x00000000004ADEC4 string=0x00000000004ADEC8 "A\t*"
 *   insn=0x00000000004ADEC8 string=0x00000000004ADECC "(( "
 *   insn=0x00000000004ADEE4 string=0x00000000004ADEE8 "LA!"
 *   insn=0x00000000004ADEE8 string=0x00000000004ADEEC "g"
 *   insn=0x00000000004ADEEC string=0x00000000004ADEF8 "H"
 *   insn=0x00000000004ADEF4 string=0x00000000001FD530 "0'"
 *   insn=0x00000000004ADEF8 string=0x0000000000597218 "r"
 *   insn=0x00000000004ADF00 string=0x00000000004ADF04 "l)+"
 *   insn=0x00000000004ADF04 string=0x00000000004ADF08 ""
 *   insn=0x00000000004ADF08 string=0x00000000004ADF0C "`!!"
 *   insn=0x00000000004ADF0C string=0x00000000004ADF10 "L"
 *   insn=0x00000000004ADF18 string=0x00000000004ADF1C "g"
 *   insn=0x00000000004ADF58 string=0x00000000004ADF5C "ai!"
 *   insn=0x00000000004ADF6C string=0x00000000004ADF70 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegment::IntersectsCircle(float32x2_t *a1, float32x2_t *a2, float *a3, float *a4)
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
    *a3 = fmaxf(v10, 0.0);
  if ( a4 )
    *a4 = fminf(v11, 1.0);
  return 1;
}

