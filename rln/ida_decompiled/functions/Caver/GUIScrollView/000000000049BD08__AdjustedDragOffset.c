/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049BD08
 * Mangled: _ZN5Caver13GUIScrollView18AdjustedDragOffsetERKNS_7Vector2E
 * Demangled: Caver::GUIScrollView::AdjustedDragOffset(Caver::Vector2 const&)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 31
 *   insn=0x000000000049BD08 string=0x000000000049BD0C "\t)"
 *   insn=0x000000000049BD14 string=0x000000000049BD18 "  ""
 *   insn=0x000000000049BD18 string=0x000000000049BD1C "\t"
 *   insn=0x000000000049BD24 string=0x000000000049BD28 "@"
 *   insn=0x000000000049BD28 string=0x000000000049BD2C "B(#"
 *   insn=0x000000000049BD2C string=0x000000000049BD30 "!($"
 *   insn=0x000000000049BD30 string=0x000000000049BD34 "B8!"
 *   insn=0x000000000049BD34 string=0x000000000049BD38 "@  "
 *   insn=0x000000000049BD38 string=0x000000000049BD3C "a8$"
 *   insn=0x000000000049BD40 string=0x000000000049BD44 "j"
 *   insn=0x000000000049BD44 string=0x000000000049BD48 "C"
 *   insn=0x000000000049BD48 string=0x000000000049BD4C "@8 "
 *   insn=0x000000000049BD50 string=0x000000000049BD54 "@( "
 *   insn=0x000000000049BD60 string=0x000000000049BD64 "J"
 *   insn=0x000000000049BD64 string=0x000000000049BD68 "B"
 *   insn=0x000000000049BD70 string=0x000000000049BD74 " ( "
 *   insn=0x000000000049BD80 string=0x000000000049BD84 "  ""
 *   insn=0x000000000049BD84 string=0x000000000049BD88 "\t"
 *   insn=0x000000000049BD90 string=0x000000000049BD94 " "
 *   insn=0x000000000049BD94 string=0x000000000049BD98 "B(#"
 *   insn=0x000000000049BD98 string=0x000000000049BD9C "!($"
 *   insn=0x000000000049BD9C string=0x000000000049BDA0 "B8!"
 *   insn=0x000000000049BDA0 string=0x000000000049BDA4 "@  "
 *   insn=0x000000000049BDA4 string=0x000000000049BDA8 "a8$"
 *   insn=0x000000000049BDAC string=0x000000000049BDB0 "i"
 *   insn=0x000000000049BDB0 string=0x000000000049BDB4 "#"
 *   insn=0x000000000049BDB4 string=0x000000000049BDB8 "@8 "
 *   insn=0x000000000049BDBC string=0x000000000049BDC0 "@( "
 *   insn=0x000000000049BDCC string=0x000000000049BDD0 "I"
 *   insn=0x000000000049BDD0 string=0x000000000049BDD4 """
 *   insn=0x000000000049BDDC string=0x000000000049BDE0 " ( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __usercall Caver::GUIScrollView::AdjustedDragOffset@<S0>(
        float *a1@<X0>,
        float *a2@<X1>,
        float *a3@<X8>,
        float result@<S0>)
{
  float v4; // w9
  float v5; // w10
  float v6; // s1
  float v7; // s2
  float v8; // s3
  float v9; // s4
  float v10; // s2
  float v11; // s1
  float v12; // s1
  float v13; // s2
  float v14; // s3
  float v15; // s4
  float v16; // s2
  float v17; // s1

  v4 = *a2;
  v5 = a2[1];
  *a3 = *a2;
  a3[1] = v5;
  v6 = a1[62];
  v7 = a1[36];
  if ( v6 > v7 )
  {
    v8 = a1[34];
    v9 = a1[60];
    result = v5;
    v10 = (float)(v7 + v8) - (float)(v6 + v9);
    v11 = v8 - v9;
    if ( v10 > v5 )
    {
      result = v10 + (float)((float)(v10 - v5) * -0.4);
      a3[1] = result;
    }
    if ( result > v11 )
    {
      result = v11 + (float)((float)(result - v11) * 0.4);
      a3[1] = result;
    }
  }
  v12 = a1[61];
  v13 = a1[35];
  if ( v12 > v13 )
  {
    v14 = a1[33];
    v15 = a1[59];
    result = v4;
    v16 = (float)(v13 + v14) - (float)(v12 + v15);
    v17 = v14 - v15;
    if ( v16 > v4 )
    {
      result = v16 + (float)((float)(v16 - v4) * -0.4);
      *a3 = result;
    }
    if ( result > v17 )
    {
      result = v17 + (float)((float)(result - v17) * 0.4);
      *a3 = result;
    }
  }
  return result;
}

