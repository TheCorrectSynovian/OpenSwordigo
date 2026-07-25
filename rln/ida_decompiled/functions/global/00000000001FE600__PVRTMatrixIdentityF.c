/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE600
 * Mangled: ._Z19PVRTMatrixIdentityFR11PVRTMATRIXf
 * Demangled: PVRTMatrixIdentityF(PVRTMATRIXf &)
 *
 * Callers: 6
 *   0x000000000050529C  CPVRTModelPOD::GetRotationMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x0000000000505364  CPVRTModelPOD::GetScalingMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x0000000000505560  CPVRTModelPOD::GetTranslationMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x0000000000505634  CPVRTModelPOD::GetTransformationMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x000000000050C820  PVRTModelPODScaleAndConvertVtxData(SPODMesh &,EPVRTDataType)
 *   0x0000000000510538  sub_510538
 *
 * Callees: 1
 *   0x000000000051AC5C  PVRTMatrixIdentityF(PVRTMATRIXf &)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FE604 string=0x000000000051AC5C "H"
 *   insn=0x00000000001FE608 string=0x00000000001FE60C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixIdentityF()
{
  return _Z19PVRTMatrixIdentityFR11PVRTMATRIXf();
}

