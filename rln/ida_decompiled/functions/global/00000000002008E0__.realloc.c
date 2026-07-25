/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002008E0
 * Mangled: .realloc
 * Demangled: .realloc
 *
 * Callers: 6
 *   0x00000000004FA0C8  sub_4FA0C8
 *   0x000000000050E220  PVRTModelPODToggleStrips(SPODMesh &)
 *   0x000000000050F2AC  PVRTModelPODFlattenToWorldSpace(CPVRTModelPOD &,CPVRTModelPOD &)
 *   0x0000000000515544  CPVRTString::reserve(ulong)
 *   0x0000000000517E18  PVRTVertexGenerateTangentSpace(int *,char **,ushort *,int,char const*,int,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,EPVRTDataType,int,float)
 *   0x0000000000572750  sub_572750
 *
 * Callees: 1
 *   0x00000000006FEB78  realloc
 *
 * Referenced strings: 1
 *   insn=0x00000000002008E8 string=0x00000000002008EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void *realloc(void *p, size_t byte_count)
{
  return realloc(p, byte_count);
}

