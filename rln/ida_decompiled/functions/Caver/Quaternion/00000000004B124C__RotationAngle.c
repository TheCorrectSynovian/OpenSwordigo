/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B124C
 * Mangled: _ZNK5Caver10Quaternion13RotationAngleEv
 * Demangled: Caver::Quaternion::RotationAngle(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA060  .acos
 *
 * Referenced strings: 1
 *   insn=0x00000000004B125C string=0x00000000001FA060 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

float __fastcall Caver::Quaternion::RotationAngle(Caver::Quaternion *this)
{
  double v1; // d0

  v1 = acos(*(float *)this);
  return v1 + v1;
}

