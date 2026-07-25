/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ADBA4
 * Mangled: _ZN5Caver24RectIntersectsWith1DLineEffffPfS0_
 * Demangled: Caver::RectIntersectsWith1DLine(float,float,float,float,float *,float *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 15
 *   insn=0x00000000004ADBA8 string=0x00000000004ADBAC "$8 "
 *   insn=0x00000000004ADBB0 string=0x00000000004ADBB4 "  %"
 *   insn=0x00000000004ADBB8 string=0x00000000004ADBD4 "B8 "
 *   insn=0x00000000004ADBD4 string=0x00000000004ADBD8 "`8 "
 *   insn=0x00000000004ADBD8 string=0x00000000004ADBDC "!"
 *   insn=0x00000000004ADBDC string=0x00000000004ADBE0 "C"
 *   insn=0x00000000004ADBE4 string=0x00000000004ADBE8 "`  "
 *   insn=0x00000000004ADBEC string=0x00000000004ADBF0 "`"
 *   insn=0x00000000004ADBF0 string=0x00000000004ADBF4 "@ !"
 *   insn=0x00000000004ADBF4 string=0x00000000004ADBF8 "m"
 *   insn=0x00000000004ADC08 string=0x00000000004ADC0C "e"
 *   insn=0x00000000004ADC0C string=0x00000000004ADC18 "@ #"
 *   insn=0x00000000004ADC24 string=0x00000000004ADC40 " "
 *   insn=0x00000000004ADC30 string=0x00000000004ADC34 "!"
 *   insn=0x00000000004ADC38 string=0x00000000004ADC3C "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::RectIntersectsWith1DLine(
        Caver *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float *a6,
        float *a7)
{
  float v7; // s4
  float v9; // s2
  float v10; // s0
  float v11; // s1
  float v12; // s3
  float v13; // s0
  bool v14; // cc
  float v15; // s2

  v7 = a3 - a2;
  if ( fabsf(a3 - a2) < 0.00001 )
    return (a2 >= a4) & (unsigned __int8)(a2 <= a5);
  v9 = a4 - a2;
  v10 = a5 - a2;
  v11 = *a6;
  v12 = v9 / v7;
  v13 = v10 / v7;
  v14 = (float)(v9 / v7) <= v13;
  if ( (float)(v9 / v7) <= v13 )
    v15 = v9 / v7;
  else
    v15 = v13;
  if ( !v14 )
    v13 = v12;
  if ( v15 > v11 )
    return 0;
  if ( v13 < *(float *)this )
    return 0;
  if ( v15 > *(float *)this )
  {
    *(float *)this = v15;
    if ( v13 >= *a6 )
      return 1;
  }
  else if ( v13 >= v11 )
  {
    return 1;
  }
  *a6 = v13;
  return 1;
}

