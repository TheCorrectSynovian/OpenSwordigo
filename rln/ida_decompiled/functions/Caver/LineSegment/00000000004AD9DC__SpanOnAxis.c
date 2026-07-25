/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AD9DC
 * Mangled: _ZNK5Caver11LineSegment10SpanOnAxisERKNS_7Vector2EPfS4_
 * Demangled: Caver::LineSegment::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Callers: 1
 *   0x00000000001FCF40  Caver::LineSegment::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Callees: 0
 *
 * Referenced strings: 7
 *   insn=0x00000000004AD9DC string=0x00000000004AD9E0 """
 *   insn=0x00000000004AD9E8 string=0x00000000004AD9EC "B#"
 *   insn=0x00000000004AD9EC string=0x00000000004AD9F0 "!$"
 *   insn=0x00000000004AD9F8 string=0x00000000004AD9FC "A(#"
 *   insn=0x00000000004ADA04 string=0x00000000004ADA08 " L "
 *   insn=0x00000000004ADA08 string=0x00000000004ADA0C "B"
 *   insn=0x00000000004ADA0C string=0x00000000004ADA10 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float *__fastcall Caver::LineSegment::SpanOnAxis(float *result, float *a2, float *a3, float *a4)
{
  float v4; // s4
  float v5; // s5
  float v6; // s2
  float v7; // s0
  float v8; // s1
  float v9; // s2

  v4 = a2[1];
  v5 = result[3];
  v6 = *a2 * result[2];
  v7 = (float)(*result * *a2) + (float)(result[1] * v4);
  v8 = v6 + (float)(v4 * v5);
  if ( v7 >= v8 )
    v9 = v6 + (float)(v4 * v5);
  else
    v9 = (float)(*result * *a2) + (float)(result[1] * v4);
  if ( v7 < v8 )
    v7 = v8;
  *a3 = v9;
  *a4 = v7;
  return result;
}

