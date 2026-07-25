/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ADA18
 * Mangled: _ZNK5Caver11LineSegment21IntersectsLineSegmentERKS0_PfS3_
 * Demangled: Caver::LineSegment::IntersectsLineSegment(Caver::LineSegment const&,float *,float *)
 *
 * Callers: 1
 *   0x0000000000202CC0  Caver::LineSegment::IntersectsLineSegment(Caver::LineSegment const&,float *,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 25
 *   insn=0x00000000004ADA18 string=0x00000000004ADA1C "#"
 *   insn=0x00000000004ADA2C string=0x00000000004ADA30 "%8$"
 *   insn=0x00000000004ADA30 string=0x00000000004ADA34 "A8&"
 *   insn=0x00000000004ADA34 string=0x00000000004ADA38 "8#"
 *   insn=0x00000000004ADA38 string=0x00000000004ADA3C "":0"
 *   insn=0x00000000004ADA4C string=0x00000000004ADA50 ""
 *   insn=0x00000000004ADA50 string=0x00000000004ADA54 "H"
 *   insn=0x00000000004ADA54 string=0x00000000005972F8 "-C"
 *   insn=0x00000000004ADA5C string=0x00000000004ADA60 "@"q"
 *   insn=0x00000000004ADA60 string=0x00000000004ADA64 "e"
 *   insn=0x00000000004ADA7C string=0x00000000004ADA80 ""
 *   insn=0x00000000004ADA84 string=0x00000000004ADA88 "c8%"
 *   insn=0x00000000004ADA88 string=0x00000000004ADA8C "c"
 *   insn=0x00000000004ADA8C string=0x00000000004ADA90 "` '"
 *   insn=0x00000000004ADA94 string=0x00000000004ADA98 "d"
 *   insn=0x00000000004ADA98 string=0x00000000004ADA9C "H"
 *   insn=0x00000000004ADA9C string=0x00000000005972E0 "X"
 *   insn=0x00000000004ADAA0 string=0x00000000004ADAA4 "` %"
 *   insn=0x00000000004ADAA8 string=0x00000000004ADAAC "!$"
 *   insn=0x00000000004ADAB0 string=0x00000000004ADAB4 "!8""
 *   insn=0x00000000004ADAB4 string=0x00000000004ADAB8 " "
 *   insn=0x00000000004ADACC string=0x00000000004ADAD0 "B"
 *   insn=0x00000000004ADAD0 string=0x00000000004ADAD4 "C"
 *   insn=0x00000000004ADAD0 string=0x00000000004ADAD8 "C"
 *   insn=0x00000000004ADAD8 string=0x00000000004ADADC "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegment::IntersectsLineSegment(
        Caver::LineSegment *this,
        const Caver::LineSegment *a2,
        float *a3,
        float *a4)
{
  float v4; // s4
  float v5; // s16
  float v6; // s5
  float v7; // s1
  float v8; // s7
  float v9; // s2
  float v10; // s0
  __int64 result; // x0
  float v12; // s4
  float v13; // s6
  float v14; // s3
  float v15; // s0

  v4 = *((float *)a2 + 1);
  v5 = *((float *)this + 1);
  v6 = *((float *)a2 + 3) - v4;
  v7 = *((float *)this + 2) - *(float *)this;
  v8 = *((float *)a2 + 2) - *(float *)a2;
  v9 = *((float *)this + 3) - v5;
  v10 = (float)(v6 * v7) - (float)(v8 * v9);
  if ( v10 > -0.0001 && v10 < 0.0001 )
    return 0;
  v12 = v5 - v4;
  v13 = *(float *)this - *(float *)a2;
  v14 = (float)((float)(v8 * v12) - (float)(v6 * v13)) / v10;
  result = 0;
  if ( v14 >= 0.00001 && v14 <= 0.99999 )
  {
    v15 = (float)((float)(v7 * v12) - (float)(v13 * v9)) / v10;
    result = 0;
    if ( v15 >= 0.00001 && v15 <= 0.99999 )
    {
      if ( a3 )
        *a3 = v14;
      if ( a4 )
        *a4 = v15;
      return 1;
    }
  }
  return result;
}

