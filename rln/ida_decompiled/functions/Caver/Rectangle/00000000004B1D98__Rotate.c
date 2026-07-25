/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1D98
 * Mangled: _ZN5Caver9Rectangle6RotateEf
 * Demangled: Caver::Rectangle::Rotate(float)
 *
 * Callers: 1
 *   0x00000000001FB7D0  Caver::Rectangle::Rotate(float)
 *
 * Callees: 2
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001FC440  Caver::Vector2::Rotate(float)
 *
 * Referenced strings: 35
 *   insn=0x00000000004B1DB8 string=0x00000000004B1DBC ""
 *   insn=0x00000000004B1DBC string=0x00000000004B1DC0 "T"
 *   insn=0x00000000004B1DD0 string=0x00000000004B1DD4 "   "
 *   insn=0x00000000004B1DDC string=0x00000000004B1DE0 "i*@-`"
 *   insn=0x00000000004B1DE0 string=0x00000000004B1DE4 "`"
 *   insn=0x00000000004B1DEC string=0x00000000004B1DF0 "+) "
 *   insn=0x00000000004B1DF0 string=0x00000000004B1DF4 "@)!"
 *   insn=0x00000000004B1E00 string=0x00000000001FC440 "0'"
 *   insn=0x00000000004B1E10 string=0x00000000004B1E14 ""uI"
 *   insn=0x00000000004B1E1C string=0x00000000004B1E20 "x!"
 *   insn=0x00000000004B1E28 string=0x00000000004B1E2C "ox!"
 *   insn=0x00000000004B1E2C string=0x00000000004B1E30 "lh""
 *   insn=0x00000000004B1E44 string=0x00000000004B1E48 "\tL-"
 *   insn=0x00000000004B1E4C string=0x00000000004B1E50 "\n"
 *   insn=0x00000000004B1E54 string=0x00000000004B1E58 "  /"
 *   insn=0x00000000004B1E58 string=0x00000000004B1E5C "-L/"
 *   insn=0x00000000004B1E5C string=0x00000000004B1E60 "  ,"
 *   insn=0x00000000004B1E64 string=0x00000000004B1E68 ","
 *   insn=0x00000000004B1E6C string=0x00000000004B1E70 "t)"
 *   insn=0x00000000004B1E80 string=0x00000000004B1E84 "\tL)"
 *   insn=0x00000000004B1E88 string=0x00000000004B1E8C "\n"
 *   insn=0x00000000004B1E8C string=0x00000000004B1E90 "  -"
 *   insn=0x00000000004B1E90 string=0x00000000004B1E94 "+L-"
 *   insn=0x00000000004B1E94 string=0x00000000004B1E98 "  ,"
 *   insn=0x00000000004B1E9C string=0x00000000004B1EA0 ","
 *   insn=0x00000000004B1EA0 string=0x00000000004B1EA4 "g)"
 *   insn=0x00000000004B1EB8 string=0x00000000004B1EBC "  +"
 *   insn=0x00000000004B1EBC string=0x00000000004B1EC0 "#L+"
 *   insn=0x00000000004B1EC0 string=0x00000000004B1EC4 "  ,"
 *   insn=0x00000000004B1EC4 string=0x00000000004B1EC8 "!"
 *   insn=0x00000000004B1ECC string=0x00000000004B1ED0 "!8#"
 *   insn=0x00000000004B1ED0 string=0x00000000004B1ED4 "b"
 *   insn=0x00000000004B1ED4 string=0x00000000004B1ED8 "`"
 *   insn=0x00000000004B1EE4 string=0x00000000004B1EE8 "!"
 *   insn=0x00000000004B1F0C string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::Rectangle::Rotate(float *this, float a2)
{
  float *v3; // x19
  float v4; // s9
  float v5; // s10
  float v6; // s0
  float v7; // s1
  float v8; // s11
  float v9; // s0
  float v10; // s3
  float v11; // s13
  float v12; // s14
  float v13; // s15
  float v14; // s12
  float v15; // s0
  float v16; // s9
  float v17; // s10
  float v18; // s13
  float v19; // s0
  float v20; // s1
  float v21; // s11
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s3
  float v26; // [xsp+Ch] [xbp-64h]
  float v27; // [xsp+10h] [xbp-60h] BYREF
  float v28; // [xsp+14h] [xbp-5Ch]
  __int64 v29; // [xsp+18h] [xbp-58h]

  v3 = this;
  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( fabsf(a2) >= 0.0001 )
  {
    v4 = *this;
    v5 = this[1];
    v6 = this[2];
    v7 = this[3];
    v28 = v5;
    v8 = v4 + v6;
    v26 = v5 + v7;
    v27 = v4;
    Caver::Vector2::Rotate((Caver::Vector2 *)&v27, a2);
    v9 = v27;
    v10 = v28;
    v27 = v8;
    v28 = v5;
    v11 = fminf(v9, 3.4028e38);
    v12 = fmaxf(v9, -3.4028e38);
    v13 = fminf(v10, 3.4028e38);
    v14 = fmaxf(v10, -3.4028e38);
    Caver::Vector2::Rotate((Caver::Vector2 *)&v27, a2);
    v15 = v27;
    v27 = v4;
    if ( v15 >= v11 )
      v16 = v11;
    else
      v16 = v15;
    if ( v15 <= v12 )
      v17 = v12;
    else
      v17 = v15;
    if ( v28 >= v13 )
      v18 = v13;
    else
      v18 = v28;
    if ( v28 > v14 )
      v14 = v28;
    v28 = v26;
    Caver::Vector2::Rotate((Caver::Vector2 *)&v27, a2);
    v19 = v27;
    v20 = v28;
    v27 = v8;
    v28 = v26;
    if ( v19 < v16 )
      v16 = v19;
    if ( v19 > v17 )
      v17 = v19;
    if ( v20 >= v18 )
      v21 = v18;
    else
      v21 = v20;
    if ( v20 > v14 )
      v14 = v20;
    this = (float *)Caver::Vector2::Rotate((Caver::Vector2 *)&v27, a2);
    v22 = v27;
    v23 = v28;
    if ( v27 >= v16 )
      v24 = v16;
    else
      v24 = v27;
    if ( v27 <= v17 )
      v22 = v17;
    if ( v28 >= v21 )
      v25 = v21;
    else
      v25 = v28;
    if ( v28 <= v14 )
      v23 = v14;
    *v3 = v24;
    v3[1] = v25;
    v3[2] = v22 - v24;
    v3[3] = v23 - v25;
  }
  return this;
}

