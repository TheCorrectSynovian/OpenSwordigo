/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202A50
 * Mangled: ._Z19PVRTMatrixMultiplyFR11PVRTMATRIXfRKS_S2_
 * Demangled: PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Callers: 9
 *   0x000000000050515C  CPVRTModelPOD::GetWorldMatrixNoCache(PVRTMATRIXf &,SPODNode const&)
 *   0x0000000000505874  CPVRTModelPOD::GetBoneWorldMatrix(PVRTMATRIXf &,SPODNode const&,SPODNode const&)
 *   0x000000000050C820  PVRTModelPODScaleAndConvertVtxData(SPODMesh &,EPVRTDataType)
 *   0x000000000051B634  PVRTMatrixLookAtLHF(PVRTMATRIXf &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *   0x000000000051B8D4  PVRTMatrixLookAtRHF(PVRTMATRIXf &,PVRTVECTOR3f const&,PVRTVECTOR3f const&,PVRTVECTOR3f const&)
 *   0x000000000051BABC  PVRTMatrixPerspectiveFovLHF(PVRTMATRIXf &,float,float,float,float,bool)
 *   0x000000000051BBF0  PVRTMatrixPerspectiveFovRHF(PVRTMATRIXf &,float,float,float,float,bool)
 *   0x000000000051BD2C  PVRTMatrixOrthoLHF(PVRTMATRIXf &,float,float,float,float,bool)
 *   0x000000000051BE00  PVRTMatrixOrthoRHF(PVRTMATRIXf &,float,float,float,float,bool)
 *
 * Callees: 1
 *   0x000000000051AC88  PVRTMatrixMultiplyF(PVRTMATRIXf &,PVRTMATRIXf const&,PVRTMATRIXf const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202A58 string=0x0000000000202A5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixMultiplyF()
{
  return _Z19PVRTMatrixMultiplyFR11PVRTMATRIXfRKS_S2_();
}

