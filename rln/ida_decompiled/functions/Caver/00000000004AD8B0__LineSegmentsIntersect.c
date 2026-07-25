/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AD8B0
 * Mangled: _ZN5Caver21LineSegmentsIntersectERKNS_7Vector2ES2_S2_S2_PfS3_b
 * Demangled: Caver::LineSegmentsIntersect(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,float *,float *,bool)
 *
 * Callers: 1
 *   0x0000000000203E50  Caver::LineSegmentsIntersect(Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,Caver::Vector2 const&,float *,float *,bool)
 *
 * Callees: 0
 *
 * Referenced strings: 30
 *   insn=0x00000000004AD8B0 string=0x00000000004AD8B4 "@"
 *   insn=0x00000000004AD8B4 string=0x00000000004AD8B8 "#D@-"
 *   insn=0x00000000004AD8C4 string=0x00000000004AD8C8 "G8$"
 *   insn=0x00000000004AD8C8 string=0x00000000004AD8CC "c8%"
 *   insn=0x00000000004AD8CC string=0x00000000004AD8D0 "08 "
 *   insn=0x00000000004AD8D0 string=0x00000000004AD8D4 "":&"
 *   insn=0x00000000004AD8DC string=0x00000000004AD8E0 "!81"
 *   insn=0x00000000004AD8E0 string=0x00000000004AD8E4 "  2"
 *   insn=0x00000000004AD8E4 string=0x00000000004AD8E8 ""
 *   insn=0x00000000004AD8E8 string=0x00000000004AD8EC "H"
 *   insn=0x00000000004AD8EC string=0x00000000005972F8 "-C"
 *   insn=0x00000000004AD8F0 string=0x00000000004AD8F4 "2"
 *   insn=0x00000000004AD8F4 string=0x00000000004AD8F8 "@"q"
 *   insn=0x00000000004AD8F8 string=0x00000000004AD8FC "e"
 *   insn=0x00000000004AD91C string=0x00000000004AD920 "f"
 *   insn=0x00000000004AD920 string=0x00000000004AD924 "c$"
 *   insn=0x00000000004AD928 string=0x00000000004AD92C "b8""
 *   insn=0x00000000004AD92C string=0x00000000004AD930 "A"
 *   insn=0x00000000004AD930 string=0x00000000004AD934 "D"
 *   insn=0x00000000004AD934 string=0x00000000004AD93C "E"
 *   insn=0x00000000004AD958 string=0x00000000004AD95C "d"
 *   insn=0x00000000004AD95C string=0x00000000004AD960 "H"
 *   insn=0x00000000004AD960 string=0x00000000004AD964 ""
 *   insn=0x00000000004AD960 string=0x00000000005972E0 "X"
 *   insn=0x00000000004AD96C string=0x00000000004AD970 "c$"
 *   insn=0x00000000004AD974 string=0x00000000004AD978 "b8""
 *   insn=0x00000000004AD978 string=0x00000000004AD97C "A"
 *   insn=0x00000000004AD97C string=0x00000000004AD980 "  &"
 *   insn=0x00000000004AD988 string=0x00000000004AD98C "  '"
 *   insn=0x00000000004AD98C string=0x00000000004AD990 "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegmentsIntersect(
        float *a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        char a7)
{
  float v7; // s4
  float v8; // s6
  float v9; // s7
  float v10; // s3
  float v11; // s16
  float v12; // s2
  float v13; // s1
  __int64 result; // x0
  float v15; // s4
  float v16; // s5
  float v17; // s0
  float v18; // s1

  v7 = a3[1];
  v8 = a1[1];
  v9 = a4[1] - v7;
  v10 = *a2 - *a1;
  v11 = *a4 - *a3;
  v12 = a2[1] - v8;
  v13 = (float)(v9 * v10) - (float)(v11 * v12);
  if ( v13 > -0.0001 && v13 < 0.0001 )
    return 0;
  v15 = v8 - v7;
  v16 = *a1 - *a3;
  v17 = (float)((float)(v11 * v15) - (float)(v9 * v16)) / v13;
  if ( (a7 & 1) != 0 )
  {
    v18 = (float)((float)(v10 * v15) - (float)(v16 * v12)) / v13;
  }
  else
  {
    result = 0;
    if ( v17 < 0.00001 )
      return result;
    if ( v17 > 0.99999 )
      return result;
    v18 = (float)((float)(v10 * v15) - (float)(v16 * v12)) / v13;
    result = 0;
    if ( v18 < 0.00001 || v18 > 0.99999 )
      return result;
  }
  if ( a5 )
    *a5 = v17;
  if ( a6 )
    *a6 = v18;
  return 1;
}

