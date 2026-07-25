/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ADC4C
 * Mangled: _ZNK5Caver11LineSegment19IntersectsRectangleERKNS_9RectangleEPfS4_
 * Demangled: Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000002008F0  Caver::LineSegment::IntersectsRectangle(Caver::Rectangle const&,float *,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 46
 *   insn=0x00000000004ADC54 string=0x00000000004ADC58 """
 *   insn=0x00000000004ADC5C string=0x00000000004ADC60 "%@"
 *   insn=0x00000000004ADC60 string=0x00000000004ADC64 "d8!"
 *   insn=0x00000000004ADC68 string=0x00000000004ADC6C "`  "
 *   insn=0x00000000004ADC6C string=0x00000000004ADC70 "C(%"
 *   insn=0x00000000004ADC70 string=0x00000000004ADC74 "E"
 *   insn=0x00000000004ADC74 string=0x00000000004ADC78 "  ""
 *   insn=0x00000000004ADC74 string=0x00000000004ADC9C "B8!"
 *   insn=0x00000000004ADC7C string=0x00000000004ADC80 "  #"
 *   insn=0x00000000004ADC9C string=0x00000000004ADCA0 "a8!"
 *   insn=0x00000000004ADCA0 string=0x00000000004ADCA4 "B"
 *   insn=0x00000000004ADCA4 string=0x00000000004ADCA8 "!"
 *   insn=0x00000000004ADCA8 string=0x00000000004ADCAC "@ !"
 *   insn=0x00000000004ADCAC string=0x00000000004ADCB0 "#"
 *   insn=0x00000000004ADCB0 string=0x00000000004ADCB4 "B"
 *   insn=0x00000000004ADCB8 string=0x00000000004ADCBC "` !"
 *   insn=0x00000000004ADCC4 string=0x00000000004ADCC8 "H  "
 *   insn=0x00000000004ADCC8 string=0x00000000004ADCCC "d"
 *   insn=0x00000000004ADCCC string=0x00000000004ADCD0 "h"
 *   insn=0x00000000004ADCD0 string=0x00000000004ADCD4 "h  "
 *   insn=0x00000000004ADCD4 string=0x00000000004ADCD8 "\t"
 *   insn=0x00000000004ADCD8 string=0x00000000004ADCDC "@ !"
 *   insn=0x00000000004ADCE0 string=0x00000000004ADCE4 "J"
 *   insn=0x00000000004ADCE4 string=0x00000000004ADCE8 "A"
 *   insn=0x00000000004ADD04 string=0x00000000004ADD08 "#"
 *   insn=0x00000000004ADD08 string=0x00000000004ADD0C "%"
 *   insn=0x00000000004ADD18 string=0x00000000004ADD1C "`(%"
 *   insn=0x00000000004ADD20 string=0x00000000004ADD24 "@ #"
 *   insn=0x00000000004ADD20 string=0x00000000004ADD40 "c8""
 *   insn=0x00000000004ADD28 string=0x00000000004ADD2C "k"
 *   insn=0x00000000004ADD2C string=0x00000000004ADD30 "@  "
 *   insn=0x00000000004ADD30 string=0x00000000004ADD34 "i"
 *   insn=0x00000000004ADD34 string=0x00000000004ADDA0 "B"
 *   insn=0x00000000004ADD44 string=0x00000000004ADD48 "c"
 *   insn=0x00000000004ADD4C string=0x00000000004ADD50 "`  "
 *   insn=0x00000000004ADD54 string=0x00000000004ADD58 "`"
 *   insn=0x00000000004ADD58 string=0x00000000004ADD5C "@ !"
 *   insn=0x00000000004ADD60 string=0x00000000004ADD70 "#"
 *   insn=0x00000000004ADD78 string=0x00000000004ADD88 "H"
 *   insn=0x00000000004ADD88 string=0x00000000004ADD8C "@ #"
 *   insn=0x00000000004ADD8C string=0x00000000004ADD90 "\t"
 *   insn=0x00000000004ADD94 string=0x00000000004ADD98 "E"
 *   insn=0x00000000004ADD98 string=0x00000000004ADD9C "\n"
 *   insn=0x00000000004ADDA0 string=0x00000000004ADDA4 "I"
 *   insn=0x00000000004ADDA0 string=0x00000000004ADDA8 "C"
 *   insn=0x00000000004ADDA8 string=0x00000000004ADDAC "j"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LineSegment::IntersectsRectangle(float *a1, float *a2, float *a3, int *a4)
{
  float v4; // s1
  float v5; // s2
  float v6; // s4
  float v7; // s3
  float v8; // w9
  int v9; // w10
  float v10; // s1
  float v11; // s2
  float v12; // s1
  float v13; // s3
  float v15; // s2
  float v16; // s3
  float v17; // s4
  float v18; // s0
  float v19; // s3
  float v20; // s0
  float v21; // s2

  v4 = *a1;
  v5 = *a2;
  v6 = a1[2] - *a1;
  v7 = *a2 + a2[2];
  if ( fabsf(v6) >= 0.00001 )
  {
    v11 = (float)(v5 - v4) / v6;
    v12 = (float)(v7 - v4) / v6;
    if ( v11 <= v12 )
      v13 = v11;
    else
      v13 = v12;
    if ( v11 <= v12 )
      v11 = v12;
    v10 = 1.0;
    if ( v13 > 1.0 || v11 < 0.0 )
      return 0;
    if ( v13 <= 0.0 )
      v8 = 0.0;
    else
      v8 = v13;
    if ( v11 >= 1.0 )
    {
      v9 = 1065353216;
    }
    else
    {
      v9 = LODWORD(v11);
      v10 = v11;
    }
  }
  else
  {
    if ( v4 < v5 )
      return 0;
    if ( v4 > v7 )
      return 0;
    v8 = 0.0;
    v9 = 1065353216;
    v10 = 1.0;
  }
  v15 = a1[1];
  v16 = a2[1];
  v17 = a1[3] - v15;
  v18 = v16 + a2[3];
  if ( fabsf(v17) >= 0.00001 )
  {
    v19 = (float)(v16 - v15) / v17;
    v20 = (float)(v18 - v15) / v17;
    if ( v19 <= v20 )
      v21 = v19;
    else
      v21 = v20;
    if ( v19 > v20 )
      v20 = v19;
    if ( v21 > v10 )
      return 0;
    if ( v20 < v8 )
      return 0;
    if ( v21 > v8 )
      v8 = v21;
    if ( v20 < v10 )
      v9 = LODWORD(v20);
  }
  else if ( v15 < v16 || v15 > v18 )
  {
    return 0;
  }
  if ( a3 )
    *a3 = v8;
  if ( a4 )
    *a4 = v9;
  return 1;
}

