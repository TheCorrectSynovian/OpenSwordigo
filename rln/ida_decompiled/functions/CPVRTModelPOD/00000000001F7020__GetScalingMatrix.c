/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7020
 * Mangled: ._ZNK13CPVRTModelPOD16GetScalingMatrixER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetScalingMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 2
 *   0x000000000050515C  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *   0x000000000050542C  CPVRTModelPOD::GetScalingMatrix(SPODNode const&)
 *
 * Callees: 1
 *   0x0000000000505364  CPVRTModelPOD::GetScalingMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7028 string=0x00000000001F702C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 CPVRTModelPOD::GetScalingMatrix()
{
  return _ZNK13CPVRTModelPOD16GetScalingMatrixER11PVRTMATRIXfRK8SPODNode();
}

