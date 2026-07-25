/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF440
 * Mangled: ._ZNK13CPVRTModelPOD17GetRotationMatrixER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetRotationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 2
 *   0x000000000050515C  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *   0x0000000000505354  CPVRTModelPOD::GetRotationMatrix(SPODNode const&)
 *
 * Callees: 1
 *   0x000000000050529C  CPVRTModelPOD::GetRotationMatrix(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF448 string=0x00000000001FF44C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 CPVRTModelPOD::GetRotationMatrix()
{
  return _ZNK13CPVRTModelPOD17GetRotationMatrixER11PVRTMATRIXfRK8SPODNode();
}

