/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6C80
 * Mangled: ._ZN13CPVRTModelPOD18GetBoneWorldMatrixER11PVRTMATRIXfRK8SPODNodeS4_
 * Demangled: CPVRTModelPOD::GetBoneWorldMatrix(PVRTMATRIXf &,SPODNode const&,SPODNode const&)
 *
 * Callers: 2
 *   0x0000000000505AFC  CPVRTModelPOD::GetBoneWorldMatrix(SPODNode const&,SPODNode const&)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callees: 1
 *   0x0000000000505874  CPVRTModelPOD::GetBoneWorldMatrix(PVRTMATRIXf &,SPODNode const&,SPODNode const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6C88 string=0x00000000001F6C8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 CPVRTModelPOD::GetBoneWorldMatrix()
{
  return _ZN13CPVRTModelPOD18GetBoneWorldMatrixER11PVRTMATRIXfRK8SPODNodeS4_();
}

