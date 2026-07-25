/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA060
 * Mangled: .acos
 * Demangled: .acos
 *
 * Callers: 3
 *   0x00000000004B124C  Caver::Quaternion::RotationAngle(void)
 *   0x0000000000513500  PVRTMatrixQuaternionToAxisAngleF(PVRTQUATERNIONf const&,PVRTVECTOR3f &,float &)
 *   0x000000000051359C  PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&,float)
 *
 * Callees: 1
 *   0x00000000006FE888  acos
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA068 string=0x00000000001FA06C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
double acos(double x)
{
  return acos(x);
}

