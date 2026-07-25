/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AE8A4
 * Mangled: _ZNK5Caver7Matrix414Determinant3x3Ev
 * Demangled: Caver::Matrix4::Determinant3x3(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 18
 *   insn=0x00000000004AE8A4 string=0x00000000004AE8A8 ""
 *   insn=0x00000000004AE8C8 string=0x00000000004AE8CC "!$"
 *   insn=0x00000000004AE8D4 string=0x00000000004AE8D8 "e\n""
 *   insn=0x00000000004AE8D8 string=0x00000000004AE8DC "@ "
 *   insn=0x00000000004AE8E8 string=0x00000000004AE8EC "("
 *   insn=0x00000000004AE8F0 string=0x00000000004AE8F4 "e"
 *   insn=0x00000000004AE908 string=0x00000000004AE90C "f('"
 *   insn=0x00000000004AE918 string=0x00000000004AE91C "" "
 *   insn=0x00000000004AE920 string=0x00000000004AE924 "f(0"
 *   insn=0x00000000004AE92C string=0x00000000004AE930 "  2"
 *   insn=0x00000000004AE934 string=0x00000000004AE938 "a8!"
 *   insn=0x00000000004AE93C string=0x00000000004AE940 "!"
 *   insn=0x00000000004AE948 string=0x00000000004AE94C " 8 "
 *   insn=0x00000000004AE954 string=0x00000000004AE958 "@ 2"
 *   insn=0x00000000004AE958 string=0x00000000004AE95C "a8""
 *   insn=0x00000000004AE960 string=0x00000000004AE964 "a"
 *   insn=0x00000000004AE964 string=0x00000000004AE968 "@"
 *   insn=0x00000000004AE968 string=0x00000000004AE96C " ( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Matrix4::Determinant3x3(Caver::Matrix4 *this)
{
  float v1; // s0
  float v2; // s1
  float v3; // s2
  float v4; // s5
  float v5; // s4
  float v6; // s6
  float v7; // s16
  float v8; // s17
  float v9; // s19
  float v10; // s3
  float v11; // s20
  float v12; // s21
  float v13; // s1
  float v14; // s4
  float v15; // s5
  float v16; // s0
  float v17; // s2
  float v18; // s4
  bool v19; // nf
  float v20; // s7
  float v21; // s5
  float v22; // s1
  float v23; // s4
  float v24; // s16
  bool v25; // cc
  float v26; // s5
  float v27; // s1
  float v28; // s3
  float v29; // s0
  float v30; // s1
  float v31; // s2

  v1 = *((float *)this + 4);
  v2 = *((float *)this + 5);
  v4 = *((float *)this + 9);
  v3 = *((float *)this + 10);
  v5 = *((float *)this + 8);
  v7 = *((float *)this + 1);
  v6 = *((float *)this + 2);
  v8 = *((float *)this + 6);
  v9 = *(float *)this * v2;
  v10 = 0.0;
  v11 = v1 * v4;
  v12 = v5 * v7;
  v13 = v2 * v5;
  v14 = *(float *)this * v4;
  v15 = v9 * v3;
  v16 = v3 * (float)(v1 * v7);
  v17 = v14 * v8;
  v18 = v15 + 0.0;
  v19 = v15 < 0.0;
  v20 = v11 * v6;
  if ( v15 >= 0.0 )
    v21 = v15 + 0.0;
  else
    v21 = 0.0;
  if ( v19 )
    v10 = v18;
  v22 = v6 * v13;
  v23 = v21 + v20;
  v24 = v12 * v8;
  if ( v20 < 0.0 )
  {
    v23 = v21;
    v10 = v10 + v20;
  }
  if ( v24 < 0.0 )
    v10 = v10 + v24;
  else
    v23 = v23 + v24;
  v25 = v22 > -0.0;
  v26 = v23 - v22;
  v27 = v10 - v22;
  if ( !v25 )
  {
    v23 = v26;
    v27 = v10;
  }
  v25 = v16 > -0.0;
  v28 = v23 - v16;
  v29 = v27 - v16;
  if ( v25 )
    v28 = v23;
  else
    v29 = v27;
  v25 = v17 > -0.0;
  v30 = v28 - v17;
  v31 = v29 - v17;
  if ( v25 )
  {
    v30 = v28;
    v29 = v31;
  }
  return v30 + v29;
}

