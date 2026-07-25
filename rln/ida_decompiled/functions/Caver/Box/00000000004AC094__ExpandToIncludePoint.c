/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AC094
 * Mangled: _ZN5Caver3Box20ExpandToIncludePointERKNS_7Vector3E
 * Demangled: Caver::Box::ExpandToIncludePoint(Caver::Vector3 const&)
 *
 * Callers: 1
 *   0x00000000001F63E0  Caver::Box::ExpandToIncludePoint(Caver::Vector3 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x00000000004AC0A4 string=0x00000000004AC0A8 "!(""
 *   insn=0x00000000004AC0A4 string=0x00000000004AC0BC ""(""
 *   insn=0x00000000004AC0A8 string=0x00000000004AC0AC ""8 "
 *   insn=0x00000000004AC0C0 string=0x00000000004AC0C4 "m"
 *   insn=0x00000000004AC0C4 string=0x00000000004AC0D0 " "
 *   insn=0x00000000004AC0E0 string=0x00000000004AC0E4 "!(""
 *   insn=0x00000000004AC0E0 string=0x00000000004AC0F8 ""(""
 *   insn=0x00000000004AC0E4 string=0x00000000004AC0E8 ""8 "
 *   insn=0x00000000004AC0FC string=0x00000000004AC100 "m"
 *   insn=0x00000000004AC100 string=0x00000000004AC10C " @"
 *   insn=0x00000000004AC11C string=0x00000000004AC120 "!(""
 *   insn=0x00000000004AC11C string=0x00000000004AC134 ""(""
 *   insn=0x00000000004AC120 string=0x00000000004AC124 ""8 "
 *   insn=0x00000000004AC138 string=0x00000000004AC13C "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Box::ExpandToIncludePoint(float *a1, float *a2)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float result; // s0
  float v9; // s1
  float v10; // s2

  v2 = *a2;
  v3 = *a1;
  v4 = a1[3];
  if ( *a2 < *a1 )
  {
    v4 = (float)(v3 + v4) - v2;
    v3 = *a2;
    a1[3] = v4;
    *a1 = v2;
  }
  if ( v2 > (float)(v3 + v4) )
    a1[3] = v2 - v3;
  v5 = a2[1];
  v6 = a1[1];
  v7 = a1[4];
  if ( v5 < v6 )
  {
    v7 = (float)(v6 + v7) - v5;
    v6 = a2[1];
    a1[4] = v7;
    a1[1] = v5;
  }
  if ( v5 > (float)(v6 + v7) )
    a1[4] = v5 - v6;
  result = a2[2];
  v9 = a1[2];
  v10 = a1[5];
  if ( result < v9 )
  {
    v10 = (float)(v9 + v10) - result;
    v9 = a2[2];
    a1[5] = v10;
    a1[2] = result;
  }
  if ( result > (float)(v9 + v10) )
  {
    result = result - v9;
    a1[5] = result;
  }
  return result;
}

