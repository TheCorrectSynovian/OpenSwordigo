/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AFDD0
 * Mangled: _ZNK5Caver12OrientedRect27IntersectsLineSegmentOnAxisERKNS_11LineSegmentERKNS_7Vector2EPfS7_
 * Demangled: Caver::OrientedRect::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000001F3620  Caver::OrientedRect::IntersectsLineSegmentOnAxis(Caver::LineSegment const&,Caver::Vector2 const&,float *,float *)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FCF40  Caver::LineSegment::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Referenced strings: 27
 *   insn=0x00000000004AFDE8 string=0x00000000004AFDEC "U"
 *   insn=0x00000000004AFE18 string=0x00000000004AFE1C "D$"
 *   insn=0x00000000004AFE1C string=0x00000000004AFE20 "B&"
 *   insn=0x00000000004AFE20 string=0x00000000004AFE24 "!#"
 *   insn=0x00000000004AFE24 string=0x00000000004AFE28 "e%"
 *   insn=0x00000000004AFE28 string=0x00000000004AFE2C "c'"
 *   insn=0x00000000004AFE2C string=0x00000000004AFE30 "\t(!"
 *   insn=0x00000000004AFE30 string=0x00000000004AFE34 "A(#"
 *   insn=0x00000000004AFE40 string=0x00000000004AFE44 "!"
 *   insn=0x00000000004AFE44 string=0x00000000004AFE48 "@ "
 *   insn=0x00000000004AFE48 string=0x00000000004AFE4C "a!"
 *   insn=0x00000000004AFE4C string=0x00000000004AFE50 "\n(!"
 *   insn=0x00000000004AFE5C string=0x00000000004AFE60 "()*"
 *   insn=0x00000000004AFE60 string=0x00000000004AFE64 "74"
 *   insn=0x00000000004AFE64 string=0x00000000001FCF40 "0'"
 *   insn=0x00000000004AFE68 string=0x00000000005837A4 "o"
 *   insn=0x00000000004AFE80 string=0x0000000000583734 "o"
 *   insn=0x00000000004AFE88 string=0x00000000004AFE8C ""9*"
 *   insn=0x00000000004AFE8C string=0x00000000004AFE90 "C(#"
 *   insn=0x00000000004AFE90 string=0x00000000004AFE94 "  #"
 *   insn=0x00000000004AFE94 string=0x00000000004AFE98 "e"
 *   insn=0x00000000004AFE98 string=0x00000000004AFEA4 "t"
 *   insn=0x00000000004AFE9C string=0x00000000004AFEA0 ""
 *   insn=0x00000000004AFEA4 string=0x00000000004AFEA8 "!8""
 *   insn=0x00000000004AFEA4 string=0x00000000004AFEB0 "s"
 *   insn=0x00000000004AFEB4 string=0x00000000004AFEB8 "`"
 *   insn=0x00000000004AFEEC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OrientedRect::IntersectsLineSegmentOnAxis(
        Caver::OrientedRect *this,
        const Caver::LineSegment *a2,
        const Caver::Vector2 *a3,
        float *a4,
        float *a5)
{
  float v6; // s3
  float v7; // s9
  float v8; // s10
  float v10; // s0
  float v12; // [xsp+0h] [xbp-40h] BYREF
  float v13; // [xsp+4h] [xbp-3Ch] BYREF
  __int64 v14; // [xsp+8h] [xbp-38h]

  v14 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = *((float *)a3 + 1);
  v7 = (float)(*(float *)this * *(float *)a3) + (float)(*((float *)this + 1) * v6);
  v8 = (float)(*((float *)this + 6)
             * fabsf((float)(*(float *)a3 * *((float *)this + 2)) + (float)(v6 * *((float *)this + 3))))
     + (float)(*((float *)this + 7)
             * fabsf((float)(*(float *)a3 * *((float *)this + 4)) + (float)(v6 * *((float *)this + 5))));
  Caver::LineSegment::SpanOnAxis(a2, a3, &v13, &v12);
  v10 = v13;
  if ( v13 > (float)((float)(v7 + v8) + -0.001) || v12 < (float)((float)(v7 - v8) + 0.001) )
    return 0;
  if ( a4 )
    *a4 = v12 - (float)(v7 - v8);
  if ( a5 )
    *a5 = v10 - (float)(v7 + v8);
  return 1;
}

