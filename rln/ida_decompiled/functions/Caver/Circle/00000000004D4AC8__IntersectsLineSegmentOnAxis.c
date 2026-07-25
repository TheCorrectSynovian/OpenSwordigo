/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4AC8
 * Mangled: _ZNK5Caver6Circle27IntersectsLineSegmentOnAxisERKNS_11LineSegmentERKNS_7Vector2EPfS7_
 * Demangled: Caver::Circle::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000001FDD90  Caver::Circle::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCF40  Caver::LineSegment::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Referenced strings: 20
 *   insn=0x00000000004D4AE0 string=0x00000000004D4AE4 "U"
 *   insn=0x00000000004D4B00 string=0x00000000004D4B04 "\t@"
 *   insn=0x00000000004D4B10 string=0x00000000004D4B14 "\n"
 *   insn=0x00000000004D4B1C string=0x00000000004D4B20 "()*"
 *   insn=0x00000000004D4B20 string=0x00000000004D4B24 ""
 *   insn=0x00000000004D4B24 string=0x00000000004D4B28 "h"
 *   insn=0x00000000004D4B24 string=0x00000000001FCF40 "0'"
 *   insn=0x00000000004D4B28 string=0x00000000005837A4 "o"
 *   insn=0x00000000004D4B3C string=0x00000000004D4B40 "h"
 *   insn=0x00000000004D4B40 string=0x0000000000583734 "o"
 *   insn=0x00000000004D4B48 string=0x00000000004D4B4C "B9)"
 *   insn=0x00000000004D4B4C string=0x00000000004D4B50 "C(#"
 *   insn=0x00000000004D4B50 string=0x00000000004D4B54 "  #"
 *   insn=0x00000000004D4B54 string=0x00000000004D4B58 "e"
 *   insn=0x00000000004D4B58 string=0x00000000004D4B64 "t"
 *   insn=0x00000000004D4B5C string=0x00000000004D4B60 ""
 *   insn=0x00000000004D4B64 string=0x00000000004D4B68 "!8""
 *   insn=0x00000000004D4B64 string=0x00000000004D4B70 "s"
 *   insn=0x00000000004D4B74 string=0x00000000004D4B78 "`"
 *   insn=0x00000000004D4BAC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Circle::IntersectsLineSegmentOnAxis(
        float32x2_t *this,
        const Caver::LineSegment *a2,
        float32x2_t *a3,
        float *a4,
        float *a5)
{
  float v6; // s9
  float v7; // s10
  float v9; // s0
  float v11; // [xsp+0h] [xbp-40h] BYREF
  float v12; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v13; // [xsp+8h] [xbp-38h]

  v13 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = this[1].n64_f32[0];
  v7 = vaddv_f32(vmul_f32((float32x2_t)this->n64_u64[0], (float32x2_t)a3->n64_u64[0]));
  Caver::LineSegment::SpanOnAxis(a2, (const Caver::Vector2 *)a3, &v12, &v11);
  v9 = v12;
  if ( v12 > (float)((float)(v6 + v7) + -0.001) || v11 < (float)((float)(v7 - v6) + 0.001) )
    return 0;
  if ( a4 )
    *a4 = v11 - (float)(v7 - v6);
  if ( a5 )
    *a5 = v9 - (float)(v6 + v7);
  return 1;
}

