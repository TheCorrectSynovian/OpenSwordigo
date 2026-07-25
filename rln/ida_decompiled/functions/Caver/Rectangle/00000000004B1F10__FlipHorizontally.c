/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B1F10
 * Mangled: _ZN5Caver9Rectangle16FlipHorizontallyEv
 * Demangled: Caver::Rectangle::FlipHorizontally(void)
 *
 * Callers: 1
 *   0x00000000001FDC30  Caver::Rectangle::FlipHorizontally(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Rectangle::FlipHorizontally(Caver::Rectangle *this)
{
  float result; // s0

  result = (float)-*(float *)this - *((float *)this + 2);
  *(float *)this = result;
  return result;
}

