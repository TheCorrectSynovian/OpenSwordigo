/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1F28
 * Mangled: _ZN5Caver9Rectangle14FlipVerticallyEv
 * Demangled: Caver::Rectangle::FlipVertically(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Rectangle::FlipVertically(Caver::Rectangle *this)
{
  float result; // s0

  result = (float)-*((float *)this + 1) - *((float *)this + 3);
  *((float *)this + 1) = result;
  return result;
}

