/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048A714
 * Mangled: _ZNK5Caver10FloatColor16GetHSLComponentsEPf
 * Demangled: Caver::FloatColor::GetHSLComponents(float *)
 *
 * Callers: 1
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *
 * Callees: 0
 *
 * Referenced strings: 30
 *   insn=0x000000000048A720 string=0x000000000048A724 "'uI"
 *   insn=0x000000000048A72C string=0x000000000048A730 " x "
 *   insn=0x000000000048A730 string=0x000000000048A734 "1h'"
 *   insn=0x000000000048A734 string=0x000000000048A738 "@  "
 *   insn=0x000000000048A738 string=0x000000000048A73C "@L "
 *   insn=0x000000000048A73C string=0x000000000048A740 "@ 1"
 *   insn=0x000000000048A740 string=0x000000000048A744 "R"
 *   insn=0x000000000048A764 string=0x000000000048A768 "v"
 *   insn=0x000000000048A768 string=0x000000000048A76C "`\n%"
 *   insn=0x000000000048A778 string=0x000000000048A77C "m"
 *   insn=0x000000000048A77C string=0x000000000048A780 "  '"
 *   insn=0x000000000048A77C string=0x000000000048A808 "&@"
 *   insn=0x000000000048A788 string=0x000000000048A78C "@ 1"
 *   insn=0x000000000048A794 string=0x000000000048A798 ")"
 *   insn=0x000000000048A7A0 string=0x000000000048A7A4 ""
 *   insn=0x000000000048A7A8 string=0x000000000048A7AC "eN'"
 *   insn=0x000000000048A7B4 string=0x000000000048A7B8 ""
 *   insn=0x000000000048A7B8 string=0x000000000048A7BC "A8$"
 *   insn=0x000000000048A7B8 string=0x000000000048A7D8 "!8""
 *   insn=0x000000000048A7BC string=0x000000000048A7C0 "!"
 *   insn=0x000000000048A7C0 string=0x000000000048A7C4 "\t"
 *   insn=0x000000000048A7C4 string=0x000000000048A7E8 "h"
 *   insn=0x000000000048A7C8 string=0x000000000048A7CC "!"
 *   insn=0x000000000048A7CC string=0x000000000048A7D0 "!(&"
 *   insn=0x000000000048A7D8 string=0x000000000048A7DC "!"
 *   insn=0x000000000048A7E0 string=0x000000000048A7E4 "!(""
 *   insn=0x000000000048A7EC string=0x000000000048A7F0 "p"
 *   insn=0x000000000048A7F0 string=0x000000000048A7F4 "&""
 *   insn=0x000000000048A7F8 string=0x000000000048A7FC "e"
 *   insn=0x000000000048A808 string=0x000000000048A80C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::FloatColor::GetHSLComponents(float *this, float *a2)
{
  float v2; // s1
  float v3; // s2
  float v4; // s4
  float v5; // s0
  float v6; // s17
  float v7; // s18
  float v8; // s20
  float v9; // s21
  float v10; // s3
  float v11; // s0
  float v12; // s6
  float v13; // s16
  int v14; // w9
  int v15; // w8
  float v16; // s5
  float v17; // s1

  v2 = *this;
  v3 = this[1];
  v4 = this[2];
  v5 = fminf(*this, 3.4028e38);
  v6 = fmaxf(*this, -3.4028e38);
  if ( v3 < v5 )
    v5 = this[1];
  if ( v3 <= v6 )
    v7 = v6;
  else
    v7 = this[1];
  if ( v4 >= v5 )
    v8 = v5;
  else
    v8 = this[2];
  if ( v4 <= v7 )
    v9 = v7;
  else
    v9 = this[2];
  v10 = v9 - v8;
  v11 = (float)(v8 + v9) * 0.5;
  v12 = 0.0;
  v13 = 0.0;
  if ( fabsf(v9 - v8) > 0.0001 )
  {
    if ( v2 > -3.4028e38 )
      v14 = 0;
    else
      v14 = -1;
    if ( v3 > v6 )
      v14 = 1;
    if ( v4 <= v7 )
      v15 = v14;
    else
      v15 = 2;
    if ( v11 >= 0.5 )
      v16 = (float)(2.0 - v9) - v8;
    else
      v16 = v8 + v9;
    if ( v15 == 1 )
    {
      v17 = (float)((float)(v4 - v2) / v10) + 2.0;
    }
    else if ( v15 )
    {
      v17 = (float)((float)(v2 - v3) / v10) + 4.0;
    }
    else
    {
      v17 = (float)(v3 - v4) / v10;
    }
    v13 = v10 / v16;
    v12 = v17 * 0.16667;
    if ( (float)(v17 * 0.16667) < 0.0 )
      v12 = v12 + 1.0;
  }
  *a2 = v12;
  a2[1] = v13;
  a2[2] = v11;
  return this;
}

