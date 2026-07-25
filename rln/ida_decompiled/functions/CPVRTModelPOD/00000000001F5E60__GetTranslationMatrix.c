/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5E60
 * Mangled: ._ZNK13CPVRTModelPOD20GetTranslationMatrixER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetTranslationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 2
 *   0x000000000050515C  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *   0x0000000000505624  CPVRTModelPOD::GetTranslationMatrix(SPODNode const&)
 *
 * Callees: 1
 *   0x0000000000505560  CPVRTModelPOD::GetTranslationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5E68 string=0x00000000001F5E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 CPVRTModelPOD::GetTranslationMatrix()
{
  return _ZNK13CPVRTModelPOD20GetTranslationMatrixER11PVRTMATRIXfRK8SPODNode();
}

