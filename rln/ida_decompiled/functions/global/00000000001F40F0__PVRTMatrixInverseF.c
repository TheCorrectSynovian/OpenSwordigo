/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F40F0
 * Mangled: ._Z18PVRTMatrixInverseFR11PVRTMATRIXfRKS_
 * Demangled: PVRTMatrixInverseF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Callers: 3
 *   0x0000000000505874  CPVRTModelPOD::GetBoneWorldMatrix(PVRTMATRIXf &,SPODNode const&,SPODNode const&)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *   0x0000000000516A14  PVRTTransformArrayBack(PVRTVECTOR3f *,PVRTVECTOR3f const*,int,PVRTMATRIXf const*)
 *
 * Callees: 1
 *   0x000000000051AFC0  PVRTMatrixInverseF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F40F4 string=0x000000000051AFC0 " B-%"
 *   insn=0x00000000001F40F8 string=0x00000000001F40FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixInverseF()
{
  return _Z18PVRTMatrixInverseFR11PVRTMATRIXfRKS_();
}

