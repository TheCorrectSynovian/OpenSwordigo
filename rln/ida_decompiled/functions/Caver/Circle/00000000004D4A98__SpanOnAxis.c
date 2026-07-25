/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004D4A98
 * Mangled: _ZNK5Caver6Circle10SpanOnAxisERKNS_7Vector2EPfS4_
 * Demangled: Caver::Circle::SpanOnAxis(Caver::Vector2 const&,float *,float *)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x00000000004D4A98 string=0x00000000004D4A9C """
 *   insn=0x00000000004D4AA4 string=0x00000000004D4AA8 "!#"
 *   insn=0x00000000004D4AB0 string=0x00000000004D4AB4 "A"
 *   insn=0x00000000004D4ABC string=0x00000000004D4AC0 "`"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Circle::SpanOnAxis(Caver::Circle *this, const Caver::Vector2 *a2, float *a3, float *a4)
{
  float v4; // s0
  float result; // s0

  v4 = (float)(*(float *)this * *(float *)a2) + (float)(*((float *)this + 1) * *((float *)a2 + 1));
  *a3 = v4 - *((float *)this + 2);
  result = v4 + *((float *)this + 2);
  *a4 = result;
  return result;
}

