/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE30
 * Mangled: ._Z24PVRTMatrixLinearEqSolveFPfPS_i
 * Demangled: PVRTMatrixLinearEqSolveF(float *,float **,int)
 *
 * Callers: 2
 *   0x0000000000516C98  PVRTTransformBack(PVRTVECTOR4f *,PVRTVECTOR4f const*,PVRTMATRIXf const*)
 *   0x000000000051B1E0  PVRTMatrixInverseExF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Callees: 1
 *   0x000000000051B3D8  PVRTMatrixLinearEqSolveF(float *,float **,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE38 string=0x00000000001FAE3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall PVRTMatrixLinearEqSolveF(float *a1, float **a2, int a3)
{
  return _Z24PVRTMatrixLinearEqSolveFPfPS_i(a1, a2, a3);
}

