/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA910
 * Mangled: ._Z14PVRTVertexReadPjPKv13EPVRTDataType
 * Demangled: PVRTVertexRead(uint *,void const*,EPVRTDataType)
 *
 * Callers: 3
 *   0x000000000050CD84  PVRTModelPODReorderFaces(SPODMesh &,int,int,int)
 *   0x000000000050E220  PVRTModelPODToggleStrips(SPODMesh &)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *
 * Callees: 1
 *   0x0000000000517318  PVRTVertexRead(uint *,void const*,EPVRTDataType)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA914 string=0x0000000000517318 "_"
 *   insn=0x00000000001FA918 string=0x00000000001FA91C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTVertexRead()
{
  return _Z14PVRTVertexReadPjPKv13EPVRTDataType();
}

