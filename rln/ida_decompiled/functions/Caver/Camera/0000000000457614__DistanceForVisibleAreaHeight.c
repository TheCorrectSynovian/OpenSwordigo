/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000457614
 * Mangled: _ZN5Caver6Camera28DistanceForVisibleAreaHeightEf
 * Demangled: Caver::Camera::DistanceForVisibleAreaHeight(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE5C0  .tanf
 *
 * Referenced strings: 2
 *   insn=0x0000000000457620 string=0x0000000000457624 ""
 *   insn=0x0000000000457624 string=0x0000000000457628 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Camera::DistanceForVisibleAreaHeight(Caver::Camera *this, float a2)
{
  return a2 / tanf(*((float *)this + 61));
}

