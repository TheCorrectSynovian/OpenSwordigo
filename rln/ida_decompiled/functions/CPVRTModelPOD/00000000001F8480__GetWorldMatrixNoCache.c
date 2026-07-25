/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8480
 * Mangled: ._ZNK13CPVRTModelPOD21GetWorldMatrixNoCacheER11PVRTMATRIXfRK8SPODNode
 * Demangled: CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Callers: 12
 *   0x0000000000503F24  CPVRTModelPOD::InitImpl(void)
 *   0x0000000000505018  CPVRTModelPOD::FlushCache(void)
 *   0x0000000000505694  CPVRTModelPOD::GetWorldMatrixNoCache(SPODNode const&)
 *   0x00000000005056A4  CPVRTModelPOD::GetWorldMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x0000000000505788  CPVRTModelPOD::GetWorldMatrix(SPODNode const&)
 *   0x0000000000505874  CPVRTModelPOD::GetBoneWorldMatrix(PVRTMATRIXf &,SPODNode const&,SPODNode const&)
 *   0x0000000000505B14  CPVRTModelPOD::GetCamera(PVRTVECTOR3f &,PVRTVECTOR3f &,PVRTVECTOR3f &,uint)
 *   0x0000000000505CBC  CPVRTModelPOD::GetCameraPos(PVRTVECTOR3f &,PVRTVECTOR3f &,uint)
 *   0x0000000000505EF8  CPVRTModelPOD::GetLight(PVRTVECTOR3f &,PVRTVECTOR3f &,uint)
 *   0x0000000000506028  CPVRTModelPOD::GetLightPosition(uint)
 *   0x000000000050612C  CPVRTModelPOD::GetLightDirection(uint)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callees: 1
 *   0x000000000050515C  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8488 string=0x00000000001F848C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 CPVRTModelPOD::GetWorldMatrixNoCache()
{
  return _ZNK13CPVRTModelPOD21GetWorldMatrixNoCacheER11PVRTMATRIXfRK8SPODNode();
}

