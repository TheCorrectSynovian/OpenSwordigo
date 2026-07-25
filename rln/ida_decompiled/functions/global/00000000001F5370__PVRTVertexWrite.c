/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5370
 * Mangled: ._Z15PVRTVertexWritePv13EPVRTDataTypej
 * Demangled: PVRTVertexWrite(void *,EPVRTDataType,uint)
 *
 * Callers: 2
 *   0x000000000050CD84  PVRTModelPODReorderFaces(SPODMesh &,int,int,int)
 *   0x000000000050E220  PVRTModelPODToggleStrips(SPODMesh &)
 *
 * Callees: 1
 *   0x0000000000517BD8  PVRTVertexWrite(void *,EPVRTDataType,uint)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5374 string=0x0000000000517BD8 "?"
 *   insn=0x00000000001F5378 string=0x00000000001F537C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 PVRTVertexWrite()
{
  return _Z15PVRTVertexWritePv13EPVRTDataTypej();
}

