/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF3C0
 * Mangled: ._Z18PVRTMatrixScalingFR11PVRTMATRIXffff
 * Demangled: PVRTMatrixScalingF(PVRTMATRIXf &,float,float,float)
 *
 * Callers: 2
 *   0x0000000000505364  CPVRTModelPOD::GetScalingMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x000000000050C820  PVRTModelPODScaleAndConvertVtxData(SPODMesh &,EPVRTDataType)
 *
 * Callees: 1
 *   0x000000000051AE00  PVRTMatrixScalingF(PVRTMATRIXf &,float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF3C8 string=0x00000000001FF3CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixScalingF()
{
  return _Z18PVRTMatrixScalingFR11PVRTMATRIXffff();
}

