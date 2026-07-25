/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1D20
 * Mangled: _ZN5Caver9Rectangle16ExpandVerticallyEf
 * Demangled: Caver::Rectangle::ExpandVertically(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004B1D2C string=0x00000000004B1D30 "!(#"
 *   insn=0x00000000004B1D30 string=0x00000000004B1D34 "@( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Rectangle::ExpandVertically(Caver::Rectangle *this, float a2)
{
  float v2; // s1
  float result; // s0

  v2 = *((float *)this + 1) + (float)(a2 * -0.5);
  result = *((float *)this + 3) + a2;
  *((float *)this + 1) = v2;
  *((float *)this + 3) = result;
  return result;
}

