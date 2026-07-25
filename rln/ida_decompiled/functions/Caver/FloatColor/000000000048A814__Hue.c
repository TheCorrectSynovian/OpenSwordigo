/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048A814
 * Mangled: _ZNK5Caver10FloatColor3HueEv
 * Demangled: Caver::FloatColor::Hue(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 23
 *   insn=0x000000000048A82C string=0x000000000048A830 " x "
 *   insn=0x000000000048A830 string=0x000000000048A834 "&h$"
 *   insn=0x000000000048A834 string=0x000000000048A838 "@  "
 *   insn=0x000000000048A838 string=0x000000000048A83C "@L "
 *   insn=0x000000000048A83C string=0x000000000048A840 "@ &"
 *   insn=0x000000000048A840 string=0x000000000048A844 "G"
 *   insn=0x000000000048A844 string=0x000000000048A848 "`  "
 *   insn=0x000000000048A848 string=0x000000000048A84C "`L "
 *   insn=0x000000000048A84C string=0x000000000048A850 "` '"
 *   insn=0x000000000048A854 string=0x000000000048A858 "e"
 *   insn=0x000000000048A86C string=0x000000000048A870 "  $"
 *   insn=0x000000000048A874 string=0x000000000048A878 "@ &"
 *   insn=0x000000000048A878 string=0x000000000048A87C ""
 *   insn=0x000000000048A87C string=0x000000000048A880 "` '"
 *   insn=0x000000000048A884 string=0x000000000048A888 "("
 *   insn=0x000000000048A890 string=0x000000000048A894 ""
 *   insn=0x000000000048A890 string=0x000000000048A8A4 "`8!"
 *   insn=0x000000000048A894 string=0x000000000048A898 "@8#"
 *   insn=0x000000000048A894 string=0x000000000048A8B4 " 8""
 *   insn=0x000000000048A89C string=0x000000000048A8A0 "\t"
 *   insn=0x000000000048A8A0 string=0x000000000048A8C4 "h"
 *   insn=0x000000000048A8CC string=0x000000000048A8D0 "  "
 *   insn=0x000000000048A8D0 string=0x000000000048A8D4 "e"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::FloatColor::Hue(Caver::FloatColor *this)
{
  float v1; // s1
  float v2; // s2
  float v3; // s3
  float v4; // s0
  float v5; // s6
  float v6; // s7
  float v7; // s5
  float v8; // s5
  float result; // s0
  int v10; // w8
  float v11; // s0
  float v12; // s0
  float v13; // s1

  v1 = *(float *)this;
  v2 = *((float *)this + 1);
  v3 = *((float *)this + 2);
  v4 = fminf(*(float *)this, 3.4028e38);
  v5 = fmaxf(*(float *)this, -3.4028e38);
  if ( v2 < v4 )
    v4 = *((float *)this + 1);
  if ( v2 <= v5 )
    v6 = v5;
  else
    v6 = *((float *)this + 1);
  if ( v3 < v4 )
    v4 = *((float *)this + 2);
  if ( v3 <= v6 )
    v7 = v6;
  else
    v7 = *((float *)this + 2);
  v8 = v7 - v4;
  result = 0.0;
  if ( fabsf(v8) > 0.0001 )
  {
    if ( v1 > -3.4028e38 )
      v10 = 0;
    else
      v10 = -1;
    if ( v2 > v5 )
      v10 = 1;
    if ( v3 > v6 )
      v10 = 2;
    if ( v10 == 1 )
    {
      v12 = (float)(v3 - v1) / v8;
      v13 = 2.0;
    }
    else
    {
      if ( !v10 )
      {
        v11 = (float)(v2 - v3) / v8;
        goto LABEL_25;
      }
      v12 = (float)(v1 - v2) / v8;
      v13 = 4.0;
    }
    v11 = v12 + v13;
LABEL_25:
    result = v11 * 0.16667;
    if ( result < 0.0 )
      return result + 1.0;
  }
  return result;
}

