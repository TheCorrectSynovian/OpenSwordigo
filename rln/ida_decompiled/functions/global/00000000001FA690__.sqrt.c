/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA690
 * Mangled: .sqrt
 * Demangled: .sqrt
 *
 * Callers: 4
 *   0x0000000000510314  TransformCPODData(CPODData &,CPODData &,int,PVRTMATRIXf *,float *,float *,int,bool)
 *   0x000000000051B634  PVRTMatrixLookAtLHF(PVRTMATRIXf &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *   0x000000000051B81C  PVRTMatrixVec3NormalizeF(PVRTVECTOR3f &,PVRTVECTOR3f const&)
 *   0x000000000051B8D4  PVRTMatrixLookAtRHF(PVRTMATRIXf &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *
 * Callees: 1
 *   0x00000000006FE8C0  sqrt
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA698 string=0x00000000001FA69C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
double sqrt(double x)
{
  return sqrt(x);
}

