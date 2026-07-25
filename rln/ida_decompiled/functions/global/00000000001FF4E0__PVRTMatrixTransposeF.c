/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF4E0
 * Mangled: ._Z20PVRTMatrixTransposeFR11PVRTMATRIXfRKS_
 * Demangled: PVRTMatrixTransposeF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Callers: 2
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *   0x0000000000516C98  PVRTTransformBack(PVRTVECTOR4f *,PVRTVECTOR4f const*,PVRTMATRIXf const*)
 *
 * Callees: 1
 *   0x000000000051AF7C  PVRTMatrixTransposeF(PVRTMATRIXf &,PVRTMATRIXf const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF4E4 string=0x000000000051AF7C "($@)*,A),4B).<C)0DD)2E)#"
 *   insn=0x00000000001FF4E8 string=0x00000000001FF4EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTMatrixTransposeF()
{
  return _Z20PVRTMatrixTransposeFR11PVRTMATRIXfRKS_();
}

