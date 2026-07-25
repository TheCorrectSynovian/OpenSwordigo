/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AFD70
 * Mangled: _ZNK5Caver12OrientedRect10SpanOnAxisERKNS_7Vector2EPfS4_
 * Demangled: Caver::OrientedRect::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 13
 *   insn=0x00000000004AFD70 string=0x00000000004AFD74 """
 *   insn=0x00000000004AFD80 string=0x00000000004AFD84 "D$"
 *   insn=0x00000000004AFD84 string=0x00000000004AFD88 "B&"
 *   insn=0x00000000004AFD88 string=0x00000000004AFD8C "!#"
 *   insn=0x00000000004AFD8C string=0x00000000004AFD90 "e%"
 *   insn=0x00000000004AFD90 string=0x00000000004AFD94 "c'"
 *   insn=0x00000000004AFD9C string=0x00000000004AFDA0 "B(#"
 *   insn=0x00000000004AFDA4 string=0x00000000004AFDA8 "!"
 *   insn=0x00000000004AFDA8 string=0x00000000004AFDAC "B"
 *   insn=0x00000000004AFDAC string=0x00000000004AFDB0 "a!"
 *   insn=0x00000000004AFDB4 string=0x00000000004AFDB8 "!(""
 *   insn=0x00000000004AFDC0 string=0x00000000004AFDC4 "B"
 *   insn=0x00000000004AFDC4 string=0x00000000004AFDC8 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::OrientedRect::SpanOnAxis(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // s3
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float result; // s0

  v4 = a2[1];
  v5 = (float)(*a1 * *a2) + (float)(a1[1] * v4);
  v6 = (float)(a1[6] * fabsf((float)(*a2 * a1[2]) + (float)(v4 * a1[3])))
     + (float)(a1[7] * fabsf((float)(*a2 * a1[4]) + (float)(v4 * a1[5])));
  v7 = v5 - v6;
  result = v5 + v6;
  *a3 = v7;
  *a4 = result;
  return result;
}

