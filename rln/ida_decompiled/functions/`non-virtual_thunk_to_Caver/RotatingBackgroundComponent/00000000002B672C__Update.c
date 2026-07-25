/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B672C
 * Mangled: _ZThn24_N5Caver27RotatingBackgroundComponent6UpdateEf
 * Demangled: `non-virtual thunk to'Caver::RotatingBackgroundComponent::Update(float)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000002B672C string=0x00000000005883D0 "\n"
 *   insn=0x00000000002B6730 string=0x00000000002B6734 "h"
 *   insn=0x00000000002B6748 string=0x00000000002B674C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall `non-virtual thunk to'Caver::RotatingBackgroundComponent::Update(
        Caver::RotatingBackgroundComponent *this,
        float a2)
{
  float result; // s0

  result = (float)(a2 * -0.01) * 6.28318531 + *((float *)this + 30);
  *((float *)this + 30) = result;
  return result;
}

