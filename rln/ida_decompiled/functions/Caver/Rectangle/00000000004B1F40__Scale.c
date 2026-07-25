/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1F40
 * Mangled: _ZN5Caver9Rectangle5ScaleERKNS_7Vector2E
 * Demangled: Caver::Rectangle::Scale(Caver::Vector2 const&)
 *
 * Callers: 1
 *   0x00000000001FDD00  Caver::Rectangle::Scale(Caver::Vector2 const&)
 *
 * Callees: 0
 *
 * Referenced strings: 8
 *   insn=0x00000000004B1F50 string=0x00000000004B1F54 "&"
 *   insn=0x00000000004B1F58 string=0x00000000004B1F5C "H  "
 *   insn=0x00000000004B1F70 string=0x00000000004B1F74 "  "
 *   insn=0x00000000004B1F70 string=0x00000000004B1F80 "c(""
 *   insn=0x00000000004B1F78 string=0x00000000004B1F98 "!( "
 *   insn=0x00000000004B1F80 string=0x00000000004B1F84 "B@!"
 *   insn=0x00000000004B1F8C string=0x00000000004B1F90 "  "
 *   insn=0x00000000004B1F90 string=0x00000000004B1F94 "E"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Rectangle::Scale(float *a1, float *a2)
{
  float v2; // s0
  float v3; // s4
  float v4; // s2
  float v5; // s5
  float v6; // s3
  float v7; // s6
  float v8; // s2
  float result; // s0
  float v10; // s1

  v2 = *a2;
  v3 = a1[1];
  v4 = a1[2];
  v5 = a1[3];
  v6 = *a2 * *a1;
  *a1 = v6;
  v7 = a2[1];
  v8 = v2 * v4;
  result = v7 * v5;
  a1[1] = v7 * v3;
  a1[2] = v8;
  a1[3] = v7 * v5;
  if ( v8 >= 0.0 )
  {
    if ( result >= 0.0 )
      return result;
LABEL_5:
    v10 = (float)(v7 * v3) + result;
    result = -result;
    a1[1] = v10;
    a1[3] = result;
    return result;
  }
  *a1 = v6 + v8;
  a1[2] = -v8;
  if ( result < 0.0 )
    goto LABEL_5;
  return result;
}

