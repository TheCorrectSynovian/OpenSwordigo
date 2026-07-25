/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B66F8
 * Mangled: _ZN5Caver27RotatingBackgroundComponent6UpdateEf
 * Demangled: Caver::RotatingBackgroundComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002B66F8 string=0x00000000005883D0 "\n"
 *   insn=0x00000000002B66FC string=0x00000000002B6700 "h"
 *   insn=0x00000000002B6714 string=0x00000000002B6718 "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::RotatingBackgroundComponent::Update(Caver::RotatingBackgroundComponent *this, float a2)
{
  float result; // s0

  result = (float)(a2 * -0.01) * 6.28318531 + *((float *)this + 36);
  *((float *)this + 36) = result;
  return result;
}

