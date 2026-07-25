/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202860
 * Mangled: ._Z33PVRTBoundingBoxComputeInterleavedP19PVRTBOUNDINGBOX_TAGPKhiii
 * Demangled: PVRTBoundingBoxComputeInterleaved(PVRTBOUNDINGBOX_TAG *,uchar const*,int,int,int)
 *
 * Callers: 1
 *   0x000000000050C820  PVRTModelPODScaleAndConvertVtxData(SPODMesh &,EPVRTDataType)
 *
 * Callees: 1
 *   0x0000000000516378  PVRTBoundingBoxComputeInterleaved(PVRTBOUNDINGBOX_TAG *,uchar const*,int,int,int)
 *
 * Referenced strings: 2
 *   insn=0x0000000000202864 string=0x0000000000516378 "i|@"
 *   insn=0x0000000000202868 string=0x000000000020286C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTBoundingBoxComputeInterleaved()
{
  return _Z33PVRTBoundingBoxComputeInterleavedP19PVRTBOUNDINGBOX_TAGPKhiii();
}

