/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1CFC
 * Mangled: _ZN5Caver9Rectangle18ExpandHorizontallyEf
 * Demangled: Caver::Rectangle::ExpandHorizontally(float)
 *
 * Callers: 1
 *   0x00000000002000B0  Caver::Rectangle::ExpandHorizontally(float)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000004B1D08 string=0x00000000004B1D0C "!(#"
 *   insn=0x00000000004B1D0C string=0x00000000004B1D10 "@( "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Rectangle::ExpandHorizontally(Caver::Rectangle *this, float a2)
{
  float v2; // s1
  float result; // s0

  v2 = *(float *)this + (float)(a2 * -0.5);
  result = *((float *)this + 2) + a2;
  *(float *)this = v2;
  *((float *)this + 2) = result;
  return result;
}

