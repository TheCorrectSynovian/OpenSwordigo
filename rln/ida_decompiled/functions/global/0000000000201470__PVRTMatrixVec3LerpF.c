/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201470
 * Mangled: ._Z19PVRTMatrixVec3LerpFR12PVRTVECTOR3fRKS_S2_f
 * Demangled: PVRTMatrixVec3LerpF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,float)
 *
 * Callers: 4
 *   0x0000000000505364  CPVRTModelPOD::GetScalingMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x000000000050543C  CPVRTModelPOD::GetTranslation(PVRTVECTOR3f &,SPODNode const&)
 *   0x00000000005054AC  CPVRTModelPOD::GetTranslation(SPODNode const&)
 *   0x0000000000505560  CPVRTModelPOD::GetTranslationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callees: 1
 *   0x000000000051BED0  PVRTMatrixVec3LerpF(PVRTVECTOR3f &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,float)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201474 string=0x000000000051BED0 "!"
 *   insn=0x0000000000201478 string=0x000000000020147C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixVec3LerpF()
{
  return _Z19PVRTMatrixVec3LerpFR12PVRTVECTOR3fRKS_S2_f();
}

