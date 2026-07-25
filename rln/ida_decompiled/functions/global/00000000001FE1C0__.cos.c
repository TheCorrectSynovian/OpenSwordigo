/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE1C0
 * Mangled: .cos
 * Demangled: .cos
 *
 * Callers: 5
 *   0x00000000004AF218  Caver::Matrix4::RotationAxis(float,float,float,float)
 *   0x00000000005133BC  PVRTMatrixQuaternionRotationAxisF(PVRTQUATERNIONf &,PVRTVECTOR3f const&,float)
 *   0x000000000051AE28  PVRTMatrixRotationXF(PVRTMATRIXf &,float)
 *   0x000000000051AE98  PVRTMatrixRotationYF(PVRTMATRIXf &,float)
 *   0x000000000051AF14  PVRTMatrixRotationZF(PVRTMATRIXf &,float)
 *
 * Callees: 1
 *   0x00000000006FEA48  cos
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE1C8 string=0x00000000001FE1CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
double cos(double x)
{
  return cos(x);
}

