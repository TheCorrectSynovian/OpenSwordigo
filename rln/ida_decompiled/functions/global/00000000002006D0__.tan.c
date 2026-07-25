/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002006D0
 * Mangled: .tan
 * Demangled: .tan
 *
 * Callers: 2
 *   0x000000000051BABC  PVRTMatrixPerspectiveFovLHF(PVRTMATRIXf &,float,float,float,float,bool)
 *   0x000000000051BBF0  PVRTMatrixPerspectiveFovRHF(PVRTMATRIXf &,float,float,float,float,bool)
 *
 * Callees: 1
 *   0x00000000006FEB48  tan
 *
 * Referenced strings: 1
 *   insn=0x00000000002006D8 string=0x00000000002006DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
double tan(double x)
{
  return tan(x);
}

