/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000048A8E4
 * Mangled: _ZNK5Caver10FloatColor10SaturationEv
 * Demangled: Caver::FloatColor::Saturation(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 12
 *   insn=0x000000000048A8FC string=0x000000000048A900 " x "
 *   insn=0x000000000048A900 string=0x000000000048A904 "!h#"
 *   insn=0x000000000048A904 string=0x000000000048A908 "@  "
 *   insn=0x000000000048A908 string=0x000000000048A90C "@L "
 *   insn=0x000000000048A90C string=0x000000000048A910 "@ !"
 *   insn=0x000000000048A910 string=0x000000000048A914 "B"
 *   insn=0x000000000048A928 string=0x000000000048A92C "@8!"
 *   insn=0x000000000048A934 string=0x000000000048A938 "m"
 *   insn=0x000000000048A938 string=0x000000000048A93C "#(""
 *   insn=0x000000000048A944 string=0x000000000048A948 "f$"
 *   insn=0x000000000048A94C string=0x000000000048A950 "A8!"
 *   insn=0x000000000048A954 string=0x000000000048A958 "aL!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::FloatColor::Saturation(Caver::FloatColor *this)
{
  float v1; // s2
  float v2; // s4
  float v3; // s0
  float v4; // s1
  float v5; // s1
  float v6; // s0
  float v7; // s3
  float v8; // s6
  float v9; // s1

  v1 = *((float *)this + 1);
  v2 = *((float *)this + 2);
  v3 = fminf(*(float *)this, 3.4028e38);
  v4 = fmaxf(*(float *)this, -3.4028e38);
  if ( v1 < v3 )
    v3 = *((float *)this + 1);
  if ( v1 <= v4 )
    v1 = v4;
  if ( v2 >= v3 )
    v5 = v3;
  else
    v5 = *((float *)this + 2);
  if ( v2 > v1 )
    v1 = *((float *)this + 2);
  v6 = v1 - v5;
  if ( fabsf(v1 - v5) <= 0.0001 )
    return 0.0;
  v7 = v5 + v1;
  v8 = (float)(v5 + v1) * 0.5;
  v9 = (float)(2.0 - v1) - v5;
  if ( v8 < 0.5 )
    v9 = v7;
  return v6 / v9;
}

