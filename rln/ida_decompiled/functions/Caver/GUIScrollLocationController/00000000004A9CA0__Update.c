/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A9CA0
 * Mangled: _ZN5Caver27GUIScrollLocationController6UpdateEf
 * Demangled: Caver::GUIScrollLocationController::Update(float)
 *
 * Callers: 1
 *   0x0000000000203D60  Caver::GUIScrollLocationController::Update(float)
 *
 * Callees: 0
 *
 * Referenced strings: 46
 *   insn=0x00000000004A9CA0 string=0x00000000004A9CA4 "("
 *   insn=0x00000000004A9CA4 string=0x00000000004A9D28 ""
 *   insn=0x00000000004A9CAC string=0x00000000004A9CB0 "5D"
 *   insn=0x00000000004A9CB4 string=0x00000000004A9CB8 "E"
 *   insn=0x00000000004A9CBC string=0x00000000004A9CC0 "m"
 *   insn=0x00000000004A9CC0 string=0x00000000004A9CCC " @9("
 *   insn=0x00000000004A9CC4 string=0x00000000004A9CC8 "A"
 *   insn=0x00000000004A9CCC string=0x00000000004A9CD0 "("
 *   insn=0x00000000004A9CD4 string=0x0000000000583944 "\n"
 *   insn=0x00000000004A9CE8 string=0x00000000004A9CEC "d8&"
 *   insn=0x00000000004A9CEC string=0x00000000004A9CF0 "M"
 *   insn=0x00000000004A9CF0 string=0x00000000004A9CF4 "\t"
 *   insn=0x00000000004A9CF0 string=0x00000000004A9D38 "\t"
 *   insn=0x00000000004A9CF8 string=0x00000000004A9CFC " "0"
 *   insn=0x00000000004A9CFC string=0x00000000004A9D00 "\n"
 *   insn=0x00000000004A9D04 string=0x00000000004A9D08 "?"
 *   insn=0x00000000004A9D04 string=0x00000000004A9D40 ""
 *   insn=0x00000000004A9D10 string=0x00000000004A9D14 "m"
 *   insn=0x00000000004A9D14 string=0x00000000004A9D18 " @"
 *   insn=0x00000000004A9D18 string=0x00000000004A9D1C "G'"
 *   insn=0x00000000004A9D1C string=0x00000000004A9D20 "!8'"
 *   insn=0x00000000004A9D20 string=0x00000000004A9D24 ""
 *   insn=0x00000000004A9D2C string=0x00000000004A9D30 ""
 *   insn=0x00000000004A9D38 string=0x00000000004A9D3C "\n"
 *   insn=0x00000000004A9D4C string=0x00000000004A9D50 "E"
 *   insn=0x00000000004A9D74 string=0x00000000004A9D78 "# "
 *   insn=0x00000000004A9D78 string=0x00000000004A9D7C "B(#"
 *   insn=0x00000000004A9D7C string=0x00000000004A9D80 "C"
 *   insn=0x00000000004A9D80 string=0x00000000004A9D84 "` $"
 *   insn=0x00000000004A9D8C string=0x00000000004A9DA4 "%"
 *   insn=0x00000000004A9D90 string=0x00000000004A9D94 "H  "
 *   insn=0x00000000004A9D98 string=0x00000000004A9D9C "C"
 *   insn=0x00000000004A9DB4 string=0x00000000004A9DB8 "` $"
 *   insn=0x00000000004A9DB4 string=0x00000000004A9DC8 "@ "
 *   insn=0x00000000004A9DB8 string=0x00000000004A9DBC "e"
 *   insn=0x00000000004A9DBC string=0x00000000004A9DC0 "!@&"
 *   insn=0x00000000004A9DD8 string=0x00000000004A9DDC "!('"
 *   insn=0x00000000004A9DDC string=0x00000000004A9DE0 "' "
 *   insn=0x00000000004A9DE0 string=0x00000000004A9DE4 "?"
 *   insn=0x00000000004A9DE4 string=0x00000000004A9DE8 "G('"
 *   insn=0x00000000004A9DEC string=0x00000000004A9DF0 "C'"
 *   insn=0x00000000004A9DF0 string=0x00000000004A9DF4 "h  "
 *   insn=0x00000000004A9DF8 string=0x00000000004A9DFC ")"
 *   insn=0x00000000004A9DFC string=0x00000000004A9E00 "\t"
 *   insn=0x00000000004A9E0C string=0x00000000004A9E10 "f8&"
 *   insn=0x00000000004A9E18 string=0x00000000004A9E1C "$"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::GUIScrollLocationController::Update(Caver::GUIScrollLocationController *this, float result)
{
  float v2; // s2
  float v3; // s1
  float v4; // s5
  float v5; // s3
  float v6; // s6
  float v7; // s4
  _DWORD *v8; // x8
  int v9; // w9
  int v10; // w10
  int v11; // w8
  bool v12; // nf
  float v13; // s5
  float v14; // s4
  float v15; // s2
  float v16; // s3
  float v17; // s5
  float v18; // s1
  float v19; // s7
  float v20; // s6

  if ( *(_BYTE *)this )
  {
    v2 = *((float *)this + 4);
    v3 = 0.0;
    v4 = fabsf(v2);
    if ( v4 > 0.1 )
      v3 = -(float)(v2 * *((float *)this + 6));
    if ( *((_BYTE *)this + 8) )
    {
      v5 = *((float *)this + 3);
      v6 = *((float *)this + 1);
      v7 = v5 - v6;
      if ( v4 <= 0.01 )
      {
        v8 = (_DWORD *)((char *)this + 40);
        v9 = *((_DWORD *)this + 10);
        v10 = *((_DWORD *)this + 9);
      }
      else
      {
        v8 = (_DWORD *)((char *)this + 40);
        v9 = *((_DWORD *)this + 10);
        v10 = *((_DWORD *)this + 9);
        if ( (float)(v7 / v2) > 0.01 && v9 >= v10 && v4 > 0.1 )
          v3 = v3 - (float)(v2 * *((float *)this + 8));
      }
      v12 = v4 < 10.0;
      v13 = fabsf(v7);
      if ( v12 && v13 < 2.0
        || (v3 = v3 + (float)(v7 * *((float *)this + 7)), v19 = v2 + (float)(v3 * result), v9 >= v10)
        && ((v20 = v5 - (float)(v6 + (float)(v19 * result)), (float)(v7 * v20) < 0.0) || v13 < 1.0 || fabsf(v20) < 1.0) )
      {
        *((float *)this + 1) = v5;
        *((_DWORD *)this + 4) = 0;
        *((_BYTE *)this + 8) = 0;
        v2 = 0.0;
        v3 = 0.0;
      }
      else if ( (float)(v2 * v19) < 0.0 )
      {
        *v8 = v9 + 1;
      }
    }
    v14 = *((float *)this + 5);
    v15 = v2 + (float)(v3 * result);
    v16 = fabsf(v15);
    *((float *)this + 4) = v15;
    if ( v16 > v14 )
    {
      if ( v15 <= 0.0 )
        v15 = -v14;
      else
        v15 = v14;
      v16 = fabsf(v15);
      *((float *)this + 4) = v15;
    }
    v17 = fabsf(v3);
    v18 = *((float *)this + 1);
    if ( v17 < 1.0 && v16 < 1.0 )
    {
      v18 = roundf(v18);
      *((float *)this + 1) = v18;
    }
    result = (float)(v15 * result) + v18;
    *((float *)this + 1) = result;
  }
  else
  {
    v11 = *((_DWORD *)this + 3);
    *((_BYTE *)this + 8) = 0;
    *((_DWORD *)this + 1) = v11;
  }
  return result;
}

