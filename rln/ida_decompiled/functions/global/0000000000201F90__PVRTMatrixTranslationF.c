/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201F90
 * Mangled: ._Z22PVRTMatrixTranslationFR11PVRTMATRIXffff
 * Demangled: PVRTMatrixTranslationF(PVRTMATRIXf &,float,float,float)
 *
 * Callers: 2
 *   0x0000000000505560  CPVRTModelPOD::GetTranslationMatrix(PVRTMATRIXf &,SPODNode const&)
 *   0x000000000050C820  PVRTModelPODScaleAndConvertVtxData(SPODMesh &,EPVRTDataType)
 *
 * Callees: 1
 *   0x000000000051ADCC  PVRTMatrixTranslationF(PVRTMATRIXf &,float,float,float)
 *
 * Referenced strings: 2
 *   insn=0x0000000000201F94 string=0x000000000051ADCC "H"
 *   insn=0x0000000000201F98 string=0x0000000000201F9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixTranslationF()
{
  return _Z22PVRTMatrixTranslationFR11PVRTMATRIXffff();
}

