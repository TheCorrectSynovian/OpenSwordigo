/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048A9BC
 * Mangled: _ZN5Caver10FloatColor8FromHSLAEffff
 * Demangled: Caver::FloatColor::FromHSLA(float,float,float,float)
 *
 * Callers: 1
 *   0x00000000001F41A0  Caver::FloatColor::FromHSLA(float,float,float,float)
 *
 * Callees: 0
 *
 * Referenced strings: 58
 *   insn=0x000000000048A9C8 string=0x000000000048A9CC "m"
 *   insn=0x000000000048A9DC string=0x000000000048A9E0 "BH$"
 *   insn=0x000000000048A9E0 string=0x000000000048A9E4 "!H$"
 *   insn=0x000000000048A9E4 string=0x000000000048A9E8 "DX%"
 *   insn=0x000000000048A9F0 string=0x000000000048A9F4 "!X%"
 *   insn=0x000000000048A9F8 string=0x000000000048A9FC "!(%"
 *   insn=0x000000000048A9F8 string=0x000000000048AA08 "&($"
 *   insn=0x000000000048AA04 string=0x000000000048AA14 "i"
 *   insn=0x000000000048AA08 string=0x000000000048AA0C "!$"
 *   insn=0x000000000048AA14 string=0x000000000048AA18 "&1J"
 *   insn=0x000000000048AA20 string=0x000000000048AA24 ""
 *   insn=0x000000000048AA28 string=0x000000000048AA2C "&8$"
 *   insn=0x000000000048AA2C string=0x000000000048AA30 "(" "
 *   insn=0x000000000048AA30 string=0x000000000048AA34 "e"
 *   insn=0x000000000048AA34 string=0x000000000048AA38 "1*%"
 *   insn=0x000000000048AA34 string=0x000000000048AA40 " "%"
 *   insn=0x000000000048AA3C string=0x000000000048AA50 "i"
 *   insn=0x000000000048AA40 string=0x000000000048AA44 "m"
 *   insn=0x000000000048AA48 string=0x000000000048AA4C "1*0"
 *   insn=0x000000000048AA50 string=0x000000000048AA54 "0-J"
 *   insn=0x000000000048AA54 string=0x000000000048AA58 "i"
 *   insn=0x000000000048AA5C string=0x000000000048AA60 " "0"
 *   insn=0x000000000048AA60 string=0x000000000048AA64 "e"
 *   insn=0x000000000048AA64 string=0x000000000048AA70 " """
 *   insn=0x000000000048AA68 string=0x000000000048AA6C ""
 *   insn=0x000000000048AA70 string=0x000000000048AA74 "'"
 *   insn=0x000000000048AA74 string=0x000000000048AA78 "$"
 *   insn=0x000000000048AA78 string=0x000000000048AA7C "j"
 *   insn=0x000000000048AA78 string=0x000000000048AA9C "15J"
 *   insn=0x000000000048AA7C string=0x000000000048AA80 "RMG"
 *   insn=0x000000000048AA84 string=0x000000000048AA88 " "2"
 *   insn=0x000000000048AA8C string=0x000000000048AA90 "G:1"
 *   insn=0x000000000048AA9C string=0x000000000048AAA0 "  "
 *   insn=0x000000000048AAA0 string=0x000000000048AAA4 "e"
 *   insn=0x000000000048AAAC string=0x000000000048AAC4 "@"0"
 *   insn=0x000000000048AAB4 string=0x000000000048AAB8 "m"
 *   insn=0x000000000048AAC8 string=0x000000000048AACC "e"
 *   insn=0x000000000048AACC string=0x000000000048AAD8 "@"""
 *   insn=0x000000000048AAD0 string=0x000000000048AAD4 ""
 *   insn=0x000000000048AAD8 string=0x000000000048AADC " "
 *   insn=0x000000000048AADC string=0x000000000048AAE0 "$"
 *   insn=0x000000000048AAE0 string=0x000000000048AAE4 "i"
 *   insn=0x000000000048AAE0 string=0x000000000048AB04 "(" "
 *   insn=0x000000000048AAE4 string=0x000000000048AAE8 "3MG"
 *   insn=0x000000000048AAEC string=0x000000000048AAF0 "@"3"
 *   insn=0x000000000048AAF4 string=0x000000000048AAF8 "`:2"
 *   insn=0x000000000048AB08 string=0x000000000048AB0C " "%"
 *   insn=0x000000000048AB08 string=0x000000000048AB18 "1*%"
 *   insn=0x000000000048AB0C string=0x000000000048AB10 "m"
 *   insn=0x000000000048AB10 string=0x000000000048AB1C " "0"
 *   insn=0x000000000048AB1C string=0x000000000048AB20 "e"
 *   insn=0x000000000048AB20 string=0x000000000048AB2C " """
 *   insn=0x000000000048AB24 string=0x000000000048AB28 "\t"
 *   insn=0x000000000048AB30 string=0x000000000048AB34 "i"
 *   insn=0x000000000048AB30 string=0x000000000048AB50 ""
 *   insn=0x000000000048AB34 string=0x000000000048AB38 "!MG"
 *   insn=0x000000000048AB38 string=0x000000000048AB3C " "!"
 *   insn=0x000000000048AB40 string=0x000000000048AB44 "!81"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __usercall Caver::FloatColor::FromHSLA(float a1@<S0>, float a2@<S1>, float a3@<S2>, float a4@<S3>, float *a5@<X8>)
{
  float v6; // s5
  float v7; // s4
  float v8; // s1
  float v9; // s1
  float v10; // s4
  float v11; // s17
  float v12; // s6
  float v13; // s7
  float v14; // s7
  float v15; // s18
  float v16; // s17
  float v17; // s0
  float v18; // s0
  float v19; // s1

  if ( a1 < 0.0 || a1 > 1.0 )
    a1 = a1 - floorf(a1);
  v6 = 1.0;
  v7 = fminf(fmaxf(a3, 0.0), 1.0);
  v8 = fminf(fmaxf(a2, 0.0), 1.0);
  if ( v7 >= 0.5 )
    v9 = (float)(v8 + v7) - (float)(v8 * v7);
  else
    v9 = v7 * (float)(v8 + 1.0);
  v10 = (float)(v7 + v7) - v9;
  v11 = a1 + 0.33333;
  if ( (float)(a1 + 0.33333) >= 0.0 )
  {
    if ( v11 > 1.0 )
      v11 = v11 + -1.0;
  }
  else
  {
    v11 = v11 + 1.0;
  }
  v12 = (float)(v9 - v10) * 6.0;
  if ( v11 < 0.16667 )
  {
    v13 = v12 * v11;
LABEL_16:
    v14 = v10 + v13;
    goto LABEL_17;
  }
  v14 = v9;
  if ( v11 >= 0.5 )
  {
    v14 = v10;
    if ( v11 < 0.66667 )
    {
      v13 = v12 * (float)(0.66667 - v11);
      goto LABEL_16;
    }
  }
LABEL_17:
  if ( a1 >= 0.0 )
  {
    v15 = a1;
    if ( a1 > 1.0 )
      v15 = a1 + -1.0;
  }
  else
  {
    v15 = a1 + 1.0;
  }
  v16 = a1 + -0.33333;
  if ( v15 < 0.16667 )
  {
    v17 = v12 * v15;
LABEL_26:
    v18 = v10 + v17;
    goto LABEL_27;
  }
  v18 = v9;
  if ( v15 >= 0.5 )
  {
    v18 = v10;
    if ( v15 < 0.66667 )
    {
      v17 = v12 * (float)(0.66667 - v15);
      goto LABEL_26;
    }
  }
LABEL_27:
  if ( v16 >= 0.0 )
  {
    if ( v16 <= 1.0 )
      goto LABEL_31;
    v6 = -1.0;
  }
  v16 = v16 + v6;
LABEL_31:
  if ( v16 < 0.16667 )
  {
    v19 = v12 * v16;
LABEL_36:
    v9 = v10 + v19;
    goto LABEL_37;
  }
  if ( v16 >= 0.5 )
  {
    if ( v16 >= 0.66667 )
    {
      v9 = v10;
      goto LABEL_37;
    }
    v19 = v12 * (float)(0.66667 - v16);
    goto LABEL_36;
  }
LABEL_37:
  *a5 = v14;
  a5[1] = v18;
  a5[2] = v9;
  a5[3] = a4;
}

