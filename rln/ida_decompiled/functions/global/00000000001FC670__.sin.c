/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC670
 * Mangled: .sin
 * Demangled: .sin
 *
 * Callers: 6
 *   0x00000000004AF218  Caver::Matrix4::RotationAxis(float,float,float,float)
 *   0x00000000005133BC  PVRTMatrixQuaternionRotationAxisF(PVRTQUATERNIONf &,PVRTVECTOR3f const&,float)
 *   0x000000000051359C  PVRTMatrixQuaternionSlerpF(PVRTQUATERNIONf &,PVRTQUATERNIONf const&,PVRTQUATERNIONf const&,float)
 *   0x000000000051AE28  PVRTMatrixRotationXF(PVRTMATRIXf &,float)
 *   0x000000000051AE98  PVRTMatrixRotationYF(PVRTMATRIXf &,float)
 *   0x000000000051AF14  PVRTMatrixRotationZF(PVRTMATRIXf &,float)
 *
 * Callees: 1
 *   0x00000000006FE990  sin
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC678 string=0x00000000001FC67C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
double sin(double x)
{
  return sin(x);
}

