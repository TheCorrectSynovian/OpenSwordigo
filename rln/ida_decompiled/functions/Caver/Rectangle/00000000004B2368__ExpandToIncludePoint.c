/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2368
 * Mangled: _ZN5Caver9Rectangle20ExpandToIncludePointERKNS_7Vector2E
 * Demangled: Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001F9E30  Caver::Rectangle::ExpandToIncludePoint(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x00000000004B2378 string=0x00000000004B237C "!(""
 *   insn=0x00000000004B2378 string=0x00000000004B2390 ""(""
 *   insn=0x00000000004B237C string=0x00000000004B2380 ""8 "
 *   insn=0x00000000004B2394 string=0x00000000004B2398 "m"
 *   insn=0x00000000004B2398 string=0x00000000004B23A4 " "
 *   insn=0x00000000004B23B4 string=0x00000000004B23B8 "!(""
 *   insn=0x00000000004B23B4 string=0x00000000004B23CC ""(""
 *   insn=0x00000000004B23B8 string=0x00000000004B23BC ""8 "
 *   insn=0x00000000004B23D0 string=0x00000000004B23D4 "m"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Rectangle::ExpandToIncludePoint(float *a1, float *a2)
{
  float v2; // s0
  float v3; // s1
  float v4; // s2
  float result; // s0
  float v6; // s1
  float v7; // s2

  v2 = *a2;
  v3 = *a1;
  v4 = a1[2];
  if ( *a2 < *a1 )
  {
    v4 = (float)(v3 + v4) - v2;
    v3 = *a2;
    a1[2] = v4;
    *a1 = v2;
  }
  if ( v2 > (float)(v3 + v4) )
    a1[2] = v2 - v3;
  result = a2[1];
  v6 = a1[1];
  v7 = a1[3];
  if ( result < v6 )
  {
    v7 = (float)(v6 + v7) - result;
    v6 = a2[1];
    a1[3] = v7;
    a1[1] = result;
  }
  if ( result > (float)(v6 + v7) )
  {
    result = result - v6;
    a1[3] = result;
  }
  return result;
}

