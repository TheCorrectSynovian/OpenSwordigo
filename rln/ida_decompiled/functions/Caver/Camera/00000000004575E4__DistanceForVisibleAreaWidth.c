/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004575E4
 * Mangled: _ZN5Caver6Camera27DistanceForVisibleAreaWidthEf
 * Demangled: Caver::Camera::DistanceForVisibleAreaWidth(float)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE5C0  .tanf
 *
 * Referenced strings: 4
 *   insn=0x00000000004575EC string=0x00000000004575F0 "\t"
 *   insn=0x00000000004575F0 string=0x00000000004575F4 ""
 *   insn=0x00000000004575F4 string=0x00000000004575F8 " "
 *   insn=0x0000000000457600 string=0x0000000000457604 " \t "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Camera::DistanceForVisibleAreaWidth(Caver::Camera *this, float a2)
{
  float v2; // s9

  v2 = *((float *)this + 60);
  return a2 / (float)(v2 * tanf(*((float *)this + 61)));
}

